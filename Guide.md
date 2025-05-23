# 移行ガイド
## v3.1.0
* v3.1.0 より下記の通り変更となりましたので、移行をお願いします
  * [RICOH Live Streaming Client SDK for Windows Unity](unity_app/README.md) で使用する依存ライブラリの扱いが変更となりました
    * 旧
      * [unity_app\Assets\Plugins\x86_64](unity_app/Assets/Plugins/x86_64) に依存ライブラリも含めていました
    * 新
      * Unity の Package Manager からインストールする必要があります  
        インストール方法等の詳細はチュートリアルの [SDKの利用](doc/articles/tutorial.html#sdkの利用) をご参照ください

  * `IClientListener` を廃止し、各種イベントハンドラを `System.EventHandler` 型の `Client` のメンバーに設定するように変更となりました
    * 旧
      ```c#
      protected class ClientListener : IClientListener
      {
          public void OnAddLocalTrack(LSAddLocalTrackEvent lSAddLocalTrackEvent)
          {
          }
      }
  
      public void MyMethod()
      {
        client = new Client();
        client.SetEventListener(new ClientListener());
      }
      ```
    * 新
      ```c#
      private void OnAddLocalTrack(object sender, LSAddLocalTrackEvent lSAddLocalTrackEvent)
      {
      }
  
      public void MyMethod()
      {
        client = new Client();
        client.OnAddLocalTrack += OnAddLocalTrack;
      }
      ```

  * `IClientListener#OnChangeStability(LSChangeStabilityEvent lSChangeStabilityEvent)` を廃止し、`IClientListener#OnChangeMediaStability(LSChangeMediaStabilityEvent lSChangeMediaStability)` にて設定するように変更となりました  
  また、enum `Stability` のメンバー `IceStable` と `IceUnstable` が `Stable` と `Unstable` に変更となりました
    * 旧
      ```c#
      private void OnChangeStability(object sender, LSChangeStabilityEvent lSChangeStabilityEvent)
      {
          if (lSChangeStabilityEvent.Stability == Stability.IceStable)
          {
          }
      }
      ```
    * 新
      ```c#
      private void OnChangeMediaStability(object sender, LSChangeMediaStabilityEvent lSChangeMediaStabilityEvent)
      {
          if (lSChangeMediaStabilityEvent.Stability == Stability.Stable)
          {
          }
      }
      ```
  
  * 非推奨の `WebrtcLog#Create(string path, string prefix, uint size)` と `WebrtcLog#Destroy()` を廃止しました  
    今後は `Client#SetLibWebrtcLogOption(LibWebrtcLogOption option)` を使用するように変更をお願いします
    * 旧
      ```c#
      uint logSize = 10 * 1024 * 1024;
      WebrtcLog.Create(logFilePath, "webrtc_", logSize);
      ```
    * 新
      ```c#
      uint logSize = 10; // Mbyte
      client.SetLibWebrtcLogOption(new LibWebrtcLogOption(logFilePath, logSize));
      ```

## v2.0.0
* v2.0.0 より `IClientListener` で定義している各種イベントハンドラの引数が変更になりましたので、下記の通り移行をお願いします
  * `IClientListener#OnConnecting()`
    * 旧
      ```c#
      void OnConnecting() {}
      ```
    * 新
      ```c#
      void OnConnecting(LSConnectingEvent lSConnectingEvent) {}
      ```
  * `IClientListener#OnOpen()`
    * 旧
      ```c#
      void OnOpen() {}
      ```
    * 新
      ```c#
      void OnOpen(LSOpenEvent lSOpenEvent) {}
      ```
  * `IClientListener#OnClosing()`
    * 旧
      ```c#
      void OnClosing() {}
      ```
    * 新
      ```c#
      void OnClosing(LSClosingEvent lSClosingEvent) {}
      ```
  * `IClientListener#OnClosed()`
    * 旧
      ```c#
      void OnClosed() {}
      ```
    * 新
      ```c#
      void OnClosed(LSCloseEvent lSCloseEvent) {}
      ```
  * `IClientListener#OnAddLocalTrack()`
    * 旧
      ```c#
      void OnAddLocalTrack(MediaStreamTrack mediaStreamTrack, MediaStream stream)
      {
          var track = mediaStreamTrack;
          var mediaStream = stream;
      }
      ```
    * 新
      ```c#
      void OnAddLocalTrack(LSAddLocalTrackEvent lSAddLocalTrackEvent)
      {
          var track = lSAddLocalTrackEvent.MediaStreamTrack;
          var mediaStream = lSAddLocalTrackEvent.Stream;
      }
      ```
  * `IClientListener#OnAddRemoteConnection()`
    * 旧
      ```c#
      void OnAddRemoteConnection(string connectionId, Dictionary<string, object> metadata)
      {
          var connId = connectionId;
          var meta = metadata;
      }
      ```
    * 新
      ```c#
      void OnAddRemoteConnection(LSAddRemoteConnectionEvent lSAddRemoteConnectionEvent)
      {
          var connId = lSAddRemoteConnectionEvent.ConnectionId;
          var meta = lSAddRemoteConnectionEvent.Metadata;
      }
      ```
  * `IClientListener#OnRemoveRemoteConnection()`
    * 旧
      ```c#
      void OnRemoveRemoteConnection(string connectionId, Dictionary<string, object> metadata, List<MediaStreamTrack> mediaStreamTracks)
      {
          var connId = connectionId;
          var meta = metadata;
          var tracks = mediaStreamTracks;
      }
      ```
    * 新
      ```c#
      void OnRemoveRemoteConnection(LSRemoveRemoteConnectionEvent lSRemoveRemoteConnectionEvent)
      {
          var connId = lSRemoveRemoteConnectionEvent.ConnectionId;
          var meta = lSRemoveRemoteConnectionEvent.Metadata;
          var tracks = lSRemoveRemoteConnectionEvent.MediaStreamTracks;
      }
      ```
  * `IClientListener#OnAddRemoteTrack()`
    * 旧
      ```c#
      void OnAddRemoteTrack(string connectionId, MediaStream stream, MediaStreamTrack mediaStreamTrack, Dictionary<string, object> metadata, MuteType muteType)
      {
          var connId = connectionId;
          var mediaStream = stream;
          var track = mediaStreamTrack;
          var meta = metadata;
          var mute = muteType;
      }
      ```
    * 新
      ```c#
      void OnAddRemoteTrack(LSAddRemoteTrackEvent lSAddRemoteTrackEvent)
      {
          var connId = lSAddRemoteTrackEvent.ConnectionId;
          var mediaStream = lSAddRemoteTrackEvent.Stream;
          var track = lSAddRemoteTrackEvent.MediaStreamTrack;
          var meta = lSAddRemoteTrackEvent.Metadata;
          var mute = lSAddRemoteTrackEvent.MuteType;
      }
      ```
  * `IClientListener#OnUpdateRemoteConnection()`
    * 旧
      ```c#
      void OnUpdateRemoteConnection(string connectionId, Dictionary<string, object> metadata)
      {
          var connId = connectionId;
          var meta = metadata;
      }
      ```
    * 新
      ```c#
      void OnUpdateRemoteConnection(LSUpdateRemoteConnectionEvent lSUpdateRemoteConnectionEvent)
      {
          var connId = lSUpdateRemoteConnectionEvent.ConnectionId;
          var meta = lSUpdateRemoteConnectionEvent.Metadata;
      }
      ```
  * `IClientListener#OnUpdateRemoteTrack()`
    * 旧
      ```c#
      void OnUpdateRemoteTrack(string connectionId, MediaStream stream, MediaStreamTrack mediaStreamTrack, Dictionary<string, object> metadata)
      {
          var connId = connectionId;
          var mediaStream = stream;
          var track = mediaStreamTrack;
          var meta = metadata;
      }
      ```
    * 新
      ```c#
      void OnUpdateRemoteTrack(LSUpdateRemoteTrackEvent lSUpdateRemoteTrackEvent)
      {
          var connId = lSUpdateRemoteTrackEvent.ConnectionId;
          var mediaStream = lSUpdateRemoteTrackEvent.Stream;
          var track = lSUpdateRemoteTrackEvent.MediaStreamTrack;
          var meta = lSUpdateRemoteTrackEvent.Metadata;
      }
      ```
  * `IClientListener#OnUpdateMute()`
    * 旧
      ```c#
      void OnUpdateMute(string connectionId, MediaStream stream, MediaStreamTrack mediaStreamTrack, MuteType muteType)
      {
          var connId = connectionId;
          var mediaStream = stream;
          var track = mediaStreamTrack;
          var mute = muteType;
      }
      ```
    * 新
      ```c#
      void OnUpdateMute(LSUpdateMuteEvent lSUpdateMuteEvent)
      {
          var connId = lSUpdateMuteEvent.ConnectionId;
          var mediaStream = lSUpdateMuteEvent.Stream;
          var track = lSUpdateMuteEvent.MediaStreamTrack;
          var mute = lSUpdateMuteEvent.MuteType;
      }
      ```
  * `IClientListener#OnChangeStability()`
    * 旧
      ```c#
      void OnChangeStability(string connectionId, Stability stability)
      {
          var connId = connectionId;
          var state = stability;
      }
      ```
    * 新
      ```c#
      void OnChangeStability(LSChangeStabilityEvent lSChangeStabilityEvent)
      {
          var connId = lSChangeStabilityEvent.ConnectionId;
          var state = lSChangeStabilityEvent.Stability;
      }
      ```
