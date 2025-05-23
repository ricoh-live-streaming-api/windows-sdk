using com.ricoh.livestreaming;
using com.ricoh.livestreaming.unity;
using com.ricoh.livestreaming.webrtc;
using log4net;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public abstract class BehaviorBase : MonoBehaviour
{
    public DropdownRoomType roomTypeDropdown;
    public SynchronizationContext UnityUIContext { get; protected set; }
    public RTCStatsLogger StatsLogger { get; protected set; }
    public VideoTrack RenderLocalVideoTrack { get; protected set; }
    public bool HasLocalVideoTrack { get; protected set; } = true;

    public virtual Dictionary<string, object> ConnectionMetadata { get; protected set; } = new Dictionary<string, object>() { { "connection_metadata_sample", "connection_metadata_default" } };
    public virtual Dictionary<string, object> AudioTrackMetadata { get; protected set; } = new Dictionary<string, object>() { { "audio_track_metadata_sample", "audio_track_metadata_default" } };
    public virtual Dictionary<string, object> VideoTrackMetadata { get; protected set; } = new Dictionary<string, object>() { { "video_track_metadata_sample", "video_track_metadata_default" } };

    protected static readonly object frameLockObject = new object();
    protected static readonly object clientLockObject = new object();
    protected static readonly ILog Logger = LogManager.GetLogger(System.Reflection.MethodBase.GetCurrentMethod().DeclaringType);

    protected Client client;
    protected virtual VideoCapturer VideoCapturer { get; }
    protected virtual RoomSpec.Type RoomType { get; }
    protected virtual int MaxBitrateKbps { get; }
    protected List<LSTrack> localLSTracks = new List<LSTrack>();
    protected UserData userData;
    protected string userDataFilePath;
    protected WindowProcedureHook windowProcedureHook;

    private string logFilePath;
    private string webrtcLogPath;
    private string statsLogPath;
    private const string webrtcLogName = "webrtc";
    private const uint webrtcMaxTotalFileSizeMbyte = 10;
    private Timer statsOutpuTimer;

    public virtual void Awake()
    {
        logFilePath = Path.Combine(Application.persistentDataPath, "logs");
        webrtcLogPath = Path.Combine(logFilePath, "webrtc");
        statsLogPath = Path.Combine(logFilePath, "stats");

        // webrtc ログのバックアップフォルダを削除
        DeleteWebrtcLog();

        userDataFilePath = Application.persistentDataPath + "/UserData.json";
        userData = UserDataSerializer.Load(userDataFilePath);

        // Read configuration.
        try
        {
            Secrets.GetInstance();
        }
        catch (Exception ex)
        {
            Logger.Error("Failed to read configuration.", ex);
            UnityEngine.Diagnostics.Utils.ForceCrash(UnityEngine.Diagnostics.ForcedCrashCategory.Abort);
        }

        // Set RoomType dropdown.
        roomTypeDropdown.Initialize();
    }

    /// <summary>
    /// <see cref="client"/>を新しく生成し、初期化処理を行う。
    /// </summary>
    protected void InitializeClient()
    {
        client = new Client();

        // Subscribe to the event.
        client.OnAddLocalTrack += OnAddLocalTrack;
        client.OnAddRemoteConnection += OnAddRemoteConnection;
        client.OnAddRemoteTrack += OnAddRemoteTrack;
        client.OnClosed += OnClosed;
        client.OnClosing += OnClosing;
        client.OnConnecting += OnConnecting;
        client.OnError += OnError;
        client.OnOpen += OnOpen;
        client.OnRemoveRemoteConnection += OnRemoveRemoteConnection;
        client.OnUpdateRemoteTrack += OnUpdateRemoteTrack;
        client.OnUpdateMute += OnUpdateMute;
        client.OnUpdateRemoteConnection += OnUpdateRemoteConnection;
        client.OnChangeMediaStability += OnChangeMediaStability;
        client.OnUpdateConnectionsStatus += OnUpdateConnectionsStatus;
        client.OnUpdateRecording += OnUpdateRecording;
        client.OnMediaOpen += OnMediaOpen;

        SetConfigWebrtcLog(client);
        SetDevice(client);
    }

    /// <summary>
    /// webrtcのログの設定を行う
    /// </summary>
    /// <param name="client"><see cref="Client"/></param>
    protected void SetConfigWebrtcLog(Client client)
    {
        Directory.CreateDirectory(webrtcLogPath);

        // 前回 Connect 時の webrtc ログを検索
        var files = Directory.EnumerateFiles(webrtcLogPath, webrtcLogName + "*", SearchOption.TopDirectoryOnly);
        if (files.Count() > 0)
        {
            // webrtc ログを別フォルダに退避
            string backupDir = Path.Combine(webrtcLogPath, DateTime.Now.ToString("yyyyMMddHHmmss"));
            Directory.CreateDirectory(backupDir);

            foreach (string file in files)
            {
                File.Move(file, Path.Combine(backupDir, Path.GetFileName(file)));
            }
        }

        try
        {
            client.SetLibWebrtcLogOption(new LibWebrtcLogOption(
                Path.Combine(webrtcLogPath, webrtcLogName),
                webrtcMaxTotalFileSizeMbyte,
                LibWebrtcLogOption.Level.Info));
        }
        catch (SDKException e)
        {
            Logger.Error($"Failed to SetLibWebrtcLogOption. code={e.Detail.Code}", e);
        }
    }

    /// <summary>
    /// webrtc ログフォルダ削除
    /// </summary>
    protected void DeleteWebrtcLog()
    {
        Directory.CreateDirectory(webrtcLogPath);

        var folders = Directory.EnumerateDirectories(webrtcLogPath, "*", SearchOption.AllDirectories);
        foreach (string folder in folders)
        {
            Directory.Delete(folder, true);
        }
    }

    /// <summary>
    /// AudioInputDropdownの変更イベント
    /// </summary>
    /// <param name="deviceName">変更後のデバイス名</param>
    protected virtual void OnAudioInputDropdownValueChanged(string deviceName)
    {
        client.SetAudioInputDevice(deviceName);

        if (client.GetState() != ConnectionState.Open)
        {
            return;
        }

        var constraints = new MediaStreamConstraints()
            .SetAudio(true);

        try
        {
            var stream = client.GetUserMedia(constraints);

            client.ReplaceMediaStreamTrack(
                GetLSTrack(MediaStreamTrack.TrackType.Audio),
                stream.GetAudioTracks()[0]);
        }
        catch (SDKException e)
        {
            Logger.Error($"Failed to ReplaceMediaStreamTrack. code={e.Detail.Code}", e);
        }
        catch (Exception e)
        {
            Logger.Error("Failed to ReplaceMediaStreamTrack.", e);
        }
    }

    /// <summary>
    /// AudioOutputDropdownの変更イベント
    /// </summary>
    /// <param name="deviceName">変更後のデバイス名</param>
    protected virtual void OnAudioOutputDropdownValueChanged(string deviceName)
    {
        client.SetAudioOutputDevice(deviceName);
    }

    /// <summary>
    /// Mic mute変更イベント
    /// </summary>
    /// <param name="muteType">変更する<see cref="MuteType"/></param>
    protected void OnMicMuteValueChanged(MuteType muteType)
    {
        if (client.GetState() == ConnectionState.Open)
        {
            ChangeMute(muteType, MediaStreamTrack.TrackType.Audio);
        }
    }

    /// <summary>
    /// Video mute変更イベント
    /// </summary>
    /// <param name="muteType">変更する<see cref="MuteType"/></param>
    protected void OnVideoMuteValueChanged(MuteType muteType)
    {
        if (client.GetState() == ConnectionState.Open)
        {
            ChangeMute(muteType, MediaStreamTrack.TrackType.Video);
        }
    }

    /// <summary>
    /// Clientにmute状態の変化を通知する
    /// </summary>
    /// <param name="muteType">変更する<see cref="MuteType"/></param>
    /// <param name="trackType">Mute対象の<see cref="MediaStreamTrack.TrackType"/></param>
    private void ChangeMute(MuteType muteType, MediaStreamTrack.TrackType trackType)
    {
        try
        {
            client?.ChangeMute(GetLSTrack(trackType), muteType);
        }
        catch (SDKException e)
        {
            Logger.Error($"Failed to ChangeMute. code={e.Detail.Code}", e);
        }
        catch (Exception e)
        {
            Logger.Error("Failed to ChangeMute.", e);
        }
    }

    /// <summary>
    /// VideoRequirement変更イベント
    /// </summary>
    /// <param name="connectionId">Videoを要求するリモートトラックのコネクションID</param>
    /// <param name="isVideoReceive">true : Videoを要求する, false : Videoを要求しない</param>
    public virtual void OnVideoRequirementChanged(string connectionId, bool isVideoReceive)
    {
        try
        {
            client.ChangeMediaRequirements(
                connectionId,
                isVideoReceive ? VideoRequirement.Required : VideoRequirement.Unrequired);
        }
        catch (SDKException e)
        {
            Logger.Error($"Failed to ChangeMediaRequirements. code={e.Detail.Code}", e);
        }
        catch (Exception e)
        {
            Logger.Error("Failed to ChangeMediaRequirements.", e);
        }
    }

    /// <summary>
    /// Video送信ビットレートの変更イベント
    /// </summary>
    public virtual void OnVideoSendBitrateChanged()
    {
        try
        {
            client.ChangeVideoSendBitrate(MaxBitrateKbps);
        }
        catch (SDKException e)
        {
            Logger.Error($"Failed to OnVideoSendBitrateChanged. code={e.Detail.Code}", e);
        }
        catch (Exception e)
        {
            Logger.Error("Failed to OnVideoSendBitrateChanged.", e);
        }
    }

    public virtual void OnVideoSendFramerateChanged(Text maxFramerate)
    {
        try
        {
            client.ChangeVideoSendFramerate(Convert.ToInt32(maxFramerate.text));
        }
        catch (SDKException e)
        {
            Logger.Error($"Failed to OnVideoSendFramerateChanged. code={e.Detail.Code}", e);
        }
        catch (Exception e)
        {
            Logger.Error("Failed to OnVideoSendFramerateChanged.", e);
        }
    }

    /// <summary>
    /// アプリ終了時に呼び出されるUnityのコールバック
    /// </summary>
    public virtual void OnApplicationQuit()
    {
        Logger.Debug("OnApplicationQuit()");

        UserDataSerializer.Save(userData, userDataFilePath);
        windowProcedureHook.Term();

        client.Disconnect();
        Task.Run(async () =>
        {
            if (client.GetState() != ConnectionState.Idle)
            {
                while (client.GetState() != ConnectionState.Closed)
                {
                    await Task.Delay(15);
                }
            }
        }).Wait(100);
        client.Dispose();
        client = null;
    }

    /// <summary>
    /// <see cref="localLSTracks"/> から指定する TrackType の LSTrack を取得する
    /// </summary>
    /// <param name="trackType"><see cref="MediaStreamTrack.TrackType"/></param>
    /// <returns>成功 : <see cref="LSTrack"/>, 失敗 : null</returns>
    protected LSTrack GetLSTrack(MediaStreamTrack.TrackType trackType)
    {
        return localLSTracks.Find(item => item.MediaStreamTrack.Type == trackType);
    }

    /// <summary>
    /// 各種デバイスを初期化する処理
    /// アプリ起動時に1回のみ呼び出す
    /// </summary>
    protected abstract void InitializeDevice();

    /// <summary>
    /// 各種デバイスを設定する処理
    /// </summary>
    /// <param name="client">デバイスに紐づけるクライアント</param>
    protected abstract void SetDevice(Client client);

    /// <summary>
    /// Connect ボタンに表示する文字列を設定する
    /// </summary>
    /// <param name="buttonText">表示文字列</param>
    /// <param name="interactable">true : ボタン操作可, false : ボタン操作不可</param>
    protected abstract void SetConnectButtonText(string buttonText, bool interactable);

    #region ClientListener events
    private void OnAddLocalTrack(object sender, LSAddLocalTrackEvent lSAddLocalTrackEvent)
    {
        Logger.Debug($"OnAddLocalTrack() trackID={lSAddLocalTrackEvent.MediaStreamTrack.Id}");

        UnityUIContext.Post(__ =>
        {
            lock (frameLockObject)
            {
                if (HasLocalVideoTrack && lSAddLocalTrackEvent.MediaStreamTrack is VideoTrack videoTrack)
                {
                    videoTrack.SetEventListener(CreateVideoTrackListener(this));
                    videoTrack.AddSink();
                    RenderLocalVideoTrack = videoTrack;
                }
            }
        }, null);
    }

    private void OnAddRemoteConnection(object sender, LSAddRemoteConnectionEvent lSAddRemoteConnectionEvent)
    {
        var metadataStr = "";
        foreach (var m in lSAddRemoteConnectionEvent.Metadata)
        {
            metadataStr += $"({m.Key}, {m.Value})";
        }

        Logger.Debug($"OnAddRemoteConnection() connectionId={lSAddRemoteConnectionEvent.ConnectionId} metadata={metadataStr}");
    }

    private void OnAddRemoteTrack(object sender, LSAddRemoteTrackEvent lSAddRemoteTrackEvent)
    {
        Logger.Debug($"OnAddRemoteTrack() " +
            $"connectionId={lSAddRemoteTrackEvent.ConnectionId}, " +
            $"streamID={lSAddRemoteTrackEvent.Stream.Id}, " +
            $"trackID={lSAddRemoteTrackEvent.MediaStreamTrack.Id}, " +
            $"muteType={lSAddRemoteTrackEvent.MuteType}");

        foreach (KeyValuePair<string, object> pair in lSAddRemoteTrackEvent.Metadata)
        {
            Logger.Debug($"key={pair.Key} value={pair.Value}");
        }

        UnityUIContext.Post(__ =>
        {
            lock (frameLockObject)
            {
                AddRemoteTrack(
                    lSAddRemoteTrackEvent.ConnectionId,
                    lSAddRemoteTrackEvent.Stream,
                    lSAddRemoteTrackEvent.MediaStreamTrack,
                    lSAddRemoteTrackEvent.Metadata);
            }
        }, null);
    }

    private void OnClosed(object sender, LSCloseEvent lSCloseEvent)
    {
        Logger.Debug("OnClosed()");

        UnityUIContext.Post(__ =>
        {
            lock (clientLockObject)
            {
                if (statsOutpuTimer != null)
                {
                    statsOutpuTimer.Change(Timeout.Infinite, Timeout.Infinite); // stops timer.
                        statsOutpuTimer.Dispose();
                    statsOutpuTimer = null;
                }

                if (StatsLogger != null)
                {
                    StatsLogger.Dispose();
                    StatsLogger = null;
                }

                VideoCapturer?.Release();

                    // 切断した場合、Clientを再生成する
                    client?.Dispose();
                client = null;
                InitializeClient();
            }
        }, null);

        SetConnectButtonText("Connect", true);
    }

    private void OnClosing(object sender, LSClosingEvent lSClosingEvent)
    {
        Logger.Debug("OnClosing()");
        SetConnectButtonText("Disconnecting...", false);
        UnityUIContext.Post(__ =>
        {
            lock (frameLockObject)
            {
                ClearRemoteTracks();
            }
        }, null);
    }

    private void OnConnecting(object sender, LSConnectingEvent lSConnectingEvent)
    {
        Logger.Debug("OnConnecting()");
    }

    private void OnError(object sender, SDKErrorEvent error)
    {
        Logger.Debug($"OnError() " +
            $"code={error.Detail.Code}, " +
            $"type={error.Detail.Type}, " +
            $"error={error.Detail.Error}, " +
            $"WithDisconnection={error.WithDisconnection}," +
            $"detail={error.ToReportString()}");
    }

    private void OnOpen(object sender, LSOpenEvent LSOpenEvent)
    {
        Logger.Debug($"OnOpen() " +
            $"accessToken=\n{LSOpenEvent.AccessTokenJson}\n" +
            $"ReceiverExistence={ LSOpenEvent.ConnectionsStatus.ConnectionsVideoStatus.ReceiverExistence}");

        UnityUIContext.Post(__ =>
        {
            StatsLogger = new RTCStatsLogger(Utils.CreateFilePath(statsLogPath));

            // starts logging stats.
            statsOutpuTimer = new Timer(state =>
            {
                lock (clientLockObject)
                {
                    if (client != null)
                    {
                        var statsReports = client.GetStats();
                        foreach (var report in statsReports)
                        {
                            StatsLogger?.Log(report.Key, report.Value);
                        }
                    }
                }
            }, null, 500, 1000);
        }, null);

        SetConnectButtonText("Disconnect", true);
    }

    private void OnRemoveRemoteConnection(object sender, LSRemoveRemoteConnectionEvent lSRemoveRemoteConnectionEvent)
    {
        var metadataStr = "";
        foreach (var m in lSRemoveRemoteConnectionEvent.Metadata)
        {
            metadataStr += $"({m.Key}, {m.Value})";
        }

        var mediaStreamTracksStr = "";
        foreach (var track in lSRemoveRemoteConnectionEvent.MediaStreamTracks)
        {
            mediaStreamTracksStr += $"({track.Id}, {track.Type})";
        }

        Logger.Debug($"OnRemoveRemoteConnection() " +
            $"connectionId={lSRemoveRemoteConnectionEvent.ConnectionId} " +
            $"metadata={metadataStr} " +
            $"mediaStreamTrack={mediaStreamTracksStr}");

        UnityUIContext.Post(__ =>
        {
            lock (frameLockObject)
            {
                RemoveRemoteTrackByConnectionId(lSRemoveRemoteConnectionEvent.ConnectionId);
            }
        }, null);
    }

    private void OnUpdateRemoteTrack(object sender, LSUpdateRemoteTrackEvent lSUpdateRemoteTrackEvent)
    {
        var metadataStr = "";
        foreach (var m in lSUpdateRemoteTrackEvent.Metadata)
        {
            metadataStr += $"({m.Key}, {m.Value})";
        }

        Logger.Debug($"OnUpdateRemoteTrack() " +
            $"connectionId={lSUpdateRemoteTrackEvent.ConnectionId}, " +
            $"streamID={lSUpdateRemoteTrackEvent.Stream.Id}, " +
            $"trackID={lSUpdateRemoteTrackEvent.MediaStreamTrack.Id} " +
            $"metadata={metadataStr}");
    }

    private void OnUpdateMute(object sender, LSUpdateMuteEvent lSUpdateMuteEvent)
    {
        Logger.Debug($"OnUpdateMute() " +
            $"connectionId={lSUpdateMuteEvent.ConnectionId}, " +
            $"streamID={lSUpdateMuteEvent.Stream.Id}, " +
            $"trackID={lSUpdateMuteEvent.MediaStreamTrack.Id}, " +
            $"muteType={lSUpdateMuteEvent.MuteType}");
    }

    private void OnUpdateRemoteConnection(object sender, LSUpdateRemoteConnectionEvent lSUpdateRemoteConnectionEvent)
    {
        Logger.Debug($"OnUpdateRemoteConnection() connectionId={lSUpdateRemoteConnectionEvent.ConnectionId}");

        foreach (KeyValuePair<string, object> pair in lSUpdateRemoteConnectionEvent.Metadata)
        {
            Logger.Debug($"key={pair.Key} value={pair.Value}");
        }
    }

    public virtual void OnUpdateConnectionsStatus(object sender, LSUpdateConnectionsStatusEvent lSUpdateConnectionsStatusEvent)
    {
        Logger.Debug($"OnUpdateConnectionsStatus() " +
            $"ReceiverExistence={lSUpdateConnectionsStatusEvent.ConnectionsStatus.ConnectionsVideoStatus.ReceiverExistence}");
    }

    public virtual void OnUpdateRecording(object sender, LSUpdateRecordingEvent lSUpdateRecordingEvent)
    {
        Logger.Debug($"OnUpdateRecording() " +
            $"InRecording={lSUpdateRecordingEvent.RecordingStatus.InRecording}");
    }

    public virtual void OnMediaOpen(object sender, LSMediaOpenEvent lSMediaOpenEvent)
    {
        Logger.Debug("OnMediaOpen()");
    }

    private void OnChangeMediaStability(object sender, LSChangeMediaStabilityEvent lSChangeMediaStabilityEvent)
    {
        Logger.Debug($"OnChangeMediaStability() connectionId={lSChangeMediaStabilityEvent.ConnectionId} stability={lSChangeMediaStabilityEvent.Stability}");
    }
    #endregion

    /// <summary>
    /// リモートトラックのクリアを行う。
    /// <see cref="OnClosed"/>で実行される。
    /// </summary>
    protected abstract void ClearRemoteTracks();

    // TODO リモートトラックの処理も共通化したい。WatchのみListではないことを考慮しないといけない。
    /// <summary>
    /// リモートトラックの追加を行う。
    /// <see cref="OnAddRemoteTrack"/>で実行される。
    /// </summary>
    /// <param name="connectionId">追加するリモートトラックのコネクションID</param>
    /// <param name="stream">追加するストリーム</param>
    /// <param name="track">追加するリモートトラック</param>
    /// <param name="metadata">追加するリモートトラックのメタデータ</param>
    protected abstract void AddRemoteTrack(string connectionId, MediaStream stream, MediaStreamTrack track, Dictionary<string, object> metadata);

    /// <summary>
    /// リモートトラックの削除を行う。
    /// <see cref="OnRemoveRemoteConnection(string, Dictionary{string, object})"/>で実行される。
    /// </summary>
    /// <param name="connectionId"></param>
    protected abstract void RemoveRemoteTrackByConnectionId(string connectionId);

    protected abstract VideoTrack.IListener CreateVideoTrackListener(BehaviorBase app);
}
