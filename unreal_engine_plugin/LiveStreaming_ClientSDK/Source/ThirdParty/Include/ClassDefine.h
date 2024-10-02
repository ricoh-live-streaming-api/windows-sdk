// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once
#include "EnumDefine.h"
#include "Collections.h"

class ErrorDetail;
class LSTrack;
class LSTrackOption;
class SDKErrorEvent;
class SDKException;
class Client;
class Option;
class ReceivingOption;
class SendingOption;
class SendingVideoOption;
class ProxyOption;
class MediaStream;	//webrtc
class MediaStreamConstraints;	//webrtc
class MediaStreamTrack;	//webrtc
class AudioDataCapturer;	//webrtc
class VideoCapturer;	//webrtc
class VideoDeviceCapturer;
class CodecUtil;
class VideoCapturerDeviceCapability;
class DeviceInfo;
class DeviceUtil;
class RTCStats;
class RTCStatsReport;
class VideoTrack;
class LibWebrtcLogOption;
class IClientListener;
class AudioTrack;
class VideoTrack;
class ConnectionsStatus;
class ConnectionsVideoStatus;
class LSConnectingEvent;
class LSOpenEvent;
class LSClosingEvent;
class LSCloseEvent;
class LSAddLocalTrackEvent;
class LSAddRemoteTrackEvent;
class LSAddRemoteConnectionEvent;
class LSRemoveRemoteConnectionEvent;
class LSUpdateRemoteConnectionEvent;
class LSUpdateRemoteTrackEvent;
class LSUpdateMuteEvent;
class LSChangeStabilityEvent;
class LSUpdateConnectionsStatusEvent;

/// <summary>
/// 音声を追加出力するためのコールバック関数
/// </summary>
typedef unsigned int (*RequestPlayDataCallback)(
	void* target,
	const size_t nSamples,
	const size_t nBytesPerSample,
	const size_t nChannels,
	const unsigned int samplesPerSec,
	void* audioSamples,
	size_t& nSamplesOut,
	long long* elapsedTimeMs,
	long long* ntpTimeMs);

/// <summary>
/// com::ricoh::livestreaming::ErrorDetailのWrapper
/// </summary>
class ErrorDetail 
{
public:
	virtual int get_Code() = 0;
	virtual const char* get_Error() = 0;
	virtual ErrorType get_Type() = 0;
	virtual ~ErrorDetail() {};
};

/// <summary>
/// com::ricoh::livestreaming::LSTrackのWrapper
/// </summary>
class LSTrack
{
public:
	virtual MediaStreamTrack* get_MediaStreamTrack() = 0;
	virtual MediaStream* get_MediaStream() = 0;
	virtual StringDictionary* get_Metadata() = 0;
	virtual MuteType get_MuteType() = 0;
	virtual ~LSTrack() {};
};

/// <summary>
/// com::ricoh::livestreaming::LSTrackOptionのWrapper
/// </summary>
class LSTrackOption
{
public:
	virtual StringDictionary* get_Metadata() = 0;
	virtual MuteType get_MuteType() = 0;
	virtual LSTrackOption* SetMeta(StringDictionary*) = 0;
	virtual LSTrackOption* SetMuteType(MuteType) = 0;
	virtual ~LSTrackOption() {};
};

/// <summary>
/// com::ricoh::livestreaming::SDKErrorEventのWrapper
/// </summary>
class SDKErrorEvent 
{
public:
	virtual ErrorDetail* get_Detail() = 0;
	virtual const char* ToReportString() = 0;
	virtual ~SDKErrorEvent() {};
};

/// <summary>
/// com::ricoh::livestreaming::SDKExceptionのWrapper
/// </summary>
class SDKException 
{
public:
	virtual ErrorDetail* get_Detail() = 0;
	virtual const char* ToReportString() = 0;
	virtual const char* get_StackTrace() = 0;
	virtual const char* get_Message() = 0;
	virtual ~SDKException() {};
};

/// <summary>
/// com::ricoh::livestreaming::ClientのWrapper
/// </summary>
class Client 
{
public:
	virtual void Dispose() = 0;
	virtual MediaStream* GetUserMedia(MediaStreamConstraints*) = 0;
	virtual void Connect(const char*, const char*, Option*) = 0;
	virtual void Disconnect() = 0;
	virtual ConnectionState GetState() = 0;
	virtual void UpdateMeta(StringDictionary*) = 0;
	virtual void UpdateTrackMeta(LSTrack*, StringDictionary*) = 0;
	virtual void ChangeMediaRequirements(const char*, VideoRequirement) = 0;
	virtual void ChangeVideoSendBitrate(int) = 0;
	virtual void SetEventListener(IClientListener*) = 0;
	virtual Dictionary<RTCStatsReport*>* GetStats() = 0;
	virtual void SetAudioInputDevice(const wchar_t*) = 0;
	virtual void SetAudioOutputDevice(const wchar_t*) = 0;
	virtual void ReplaceMediaStreamTrack(LSTrack*, MediaStreamTrack*) = 0;
	virtual void ChangeMute(LSTrack*, MuteType) = 0;
	virtual void ChangeVideoSendFramerate(double) = 0;
	virtual void SetLibWebrtcLogOption(LibWebrtcLogOption*) = 0;
	virtual ~Client() {};

};

/// <summary>
/// com::ricoh::livestreaming::ReceivingOptionのWrapper
/// </summary>
class ReceivingOption
{
public:
	virtual bool get_Enabled() = 0;
	virtual ~ReceivingOption() {};
};

/// <summary>
/// com::ricoh::livestreaming::SendingOptionのWrapper
/// </summary>
class SendingOption
{
public:
	virtual SendingVideoOption* get_Video() = 0;
	virtual ~SendingOption() {};
};

/// <summary>
/// com::ricoh::livestreaming::ProxyOptionのWrapper
/// </summary>
class ProxyOption
{
public:
	virtual const char* get_Url() = 0;
	virtual ~ProxyOption() {};
};

/// <summary>
/// com::ricoh::livestreaming::OptionのWrapper
/// </summary>
class Option 
{
public:
	virtual const char* get_SignalingURL() = 0;
	virtual ReadOnlyList<LSTrack*>* get_LocalLSTracks() = 0;
	virtual StringDictionary* get_Meta() = 0;
	virtual bool get_EnableCpuOveruseDetection() = 0;
	virtual SendingOption* get_SendingOption() = 0;
	virtual ReceivingOption* get_ReceivingOption() = 0;
	virtual IceTransportPolicy get_IceTransportPolicy() = 0; //Nullable
	virtual IceServersProtocol get_IceServersProtocol() = 0; //Nullable
	virtual ProxyOption* get_ProxyOption() = 0; //Nullable
	virtual Option* SetSignalingURL(const char*) = 0;
	virtual Option* SetLocalLSTracks(List<LSTrack*>*) = 0;
	virtual Option* SetMeta(StringDictionary*) = 0;
	virtual Option* SetEnableCpuOveruseDetection(bool) = 0;
	virtual Option* SetSendingOption(SendingOption*) = 0;
	virtual Option* SetReceivingOption(ReceivingOption*) = 0;
	virtual Option* SetIceTransportPolicy(IceTransportPolicy) = 0;
	virtual Option* SetIceServersProtocol(IceServersProtocol) = 0;
	virtual Option* SetProxyOption(ProxyOption*) = 0;
	virtual ~Option() {};
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::MediaStreamのWrapper
/// </summary>
class MediaStream
{
public:
	virtual const char* get_Id() = 0;
	virtual void Dispose() = 0;
	virtual List<AudioTrack*>* GetAudioTracks() = 0;
	virtual List<VideoTrack*>* GetVideoTracks() = 0;
	virtual ~MediaStream() {};
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::MediaStreamConstraintsのWrapper
/// </summary>
class MediaStreamConstraints
{
public:

	virtual VideoCapturer* get_Capturer() = 0;
	virtual bool get_ShouldCreateAudioStream() = 0;
	virtual MediaStreamConstraints* SetVideoCapturer(VideoCapturer*) = 0;
	virtual MediaStreamConstraints* SetAudio(bool) = 0;
	virtual ~MediaStreamConstraints() {};
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::AudioDataCapturerのWrapper
/// </summary>
class AudioDataCapturer
{
public:
	virtual ~AudioDataCapturer() {};
	virtual void SetAudioDataCapturer(RequestPlayDataCallback callback) = 0;
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::VideoCapturerのWrapper
/// </summary>
class VideoCapturer
{
public:
	virtual CapturerType get_Type() = 0;
	virtual void Release() = 0;
	virtual ~VideoCapturer() {};
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::VideoDeviceCapturerのWrapper
/// </summary>
class VideoDeviceCapturer:public VideoCapturer
{
public:
	virtual const char* get_DeviceName() = 0;
	virtual int get_Width() = 0;
	virtual int get_Height() = 0;
	virtual int get_FrameRate() = 0;
	virtual ~VideoDeviceCapturer() {};
};

/// <summary>
/// 汎用キャプチャラー（バイト配列で画像を送信）
/// </summary>
class ByteArrayCapturer : public VideoCapturer
{
public:
	virtual int get_Width() = 0;
	virtual int get_Height() = 0;
	virtual void Render(const unsigned char* image) = 0;
	virtual ~ByteArrayCapturer() {};
};

/// <summary>
/// 汎用レンダラー（バイト配列で画像を受信）
/// </summary>
class ByteArrayRenderer
{
public:
	virtual void WritePixelData(unsigned char* buffer, int width, int height, VideoTrack* videoTrack) = 0;
	virtual ~ByteArrayRenderer() {};
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::CodecUtilのWrapper
/// </summary>
class CodecUtil
{
public:
	static bool IsH264Supported();

};

/// <summary>
/// com::ricoh::livestreaming::webrtc::VideoCapturerDeviceCapabilityのWrapper
/// </summary>
class VideoCapturerDeviceCapability
{
public:
	virtual int get_Width() = 0;
	virtual int get_Height() = 0;
	virtual int get_FrameRate() = 0;
	virtual ~VideoCapturerDeviceCapability() {};
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::DeviceInfoのWrapper
/// </summary>
class DeviceInfo
{
public:
	virtual const wchar_t* get_DeviceName() = 0;
	virtual const wchar_t* get_UniqueName() = 0;
	virtual ~DeviceInfo() {};
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::DeviceUtilのWrapper
/// </summary>
class DeviceUtil
{
public:
	static List<DeviceInfo*>* GetAudioInputDeviceList();
	static List<DeviceInfo*>* GetAudioOutputDeviceList();
	static List<DeviceInfo*>* GetVideoCapturerDeviceList();
	static List<VideoCapturerDeviceCapability*>* GetVideoCapturerDeviceCapabilities(const char*);

};

/// <summary>
/// com::ricoh::livestreaming::webrtc::RTCStatsのWrapper
/// </summary>
class RTCStats
{
public:
	virtual long long get_TimestampUs() = 0;
	virtual const char* get_Type() = 0;
	virtual const char* get_Id() = 0;
	virtual StringDictionary* get_Members() = 0;
	virtual ~RTCStats() {};
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::RTCStatsReportのWrapper
/// </summary>
class RTCStatsReport
{
public:
	virtual long long get_TimestampUs() = 0;
	virtual Dictionary<RTCStats*>* get_Stats() = 0;
	virtual ~RTCStatsReport() {};
};

/// <summary>
/// RTCStatsReportをログ出力する
/// </summary>
class RtcStatsWriter
{
public:
	virtual void LogAll(Dictionary<RTCStatsReport*>*) = 0;
	virtual void Log(const char*, RTCStatsReport*) = 0;
	virtual ~RtcStatsWriter() {};
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::MediaStreamTrackのWrapper
/// </summary>
class MediaStreamTrack
{
public:
	enum class TrackType
	{
		/// <summary>
		/// VIDEO
		/// </summary>
		Video,
		/// <summary>
		/// AUDIO
		/// </summary>
		Audio
	};

	virtual bool SetEnabled(bool) = 0;
	virtual void Dispose() = 0;
	virtual TrackType get_Type() = 0;
	virtual const char* get_Id() = 0;
	virtual ~MediaStreamTrack() {};
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::AudioTrackのWrapper
/// </summary>
class AudioTrack:public MediaStreamTrack
{
public:
	virtual void SetVolume(double) = 0;
};

/// <summary>
/// com::ricoh::livestreaming::webrtc::VideoTrackのWrapper
/// </summary>
class VideoTrack : public MediaStreamTrack
{
public:
	class IListener 
	{
	public:
		/// <summary>
		/// Called when frame size changed.
		/// </summary>
		/// <param name="id">Track ID</param>
		/// <param name="width">Frame width</param>
		/// <param name="height">Frame height</param>
		virtual void OnFrameSizeChanged(const char* id, int width, int height) = 0;
	
	};

	virtual void AddSink() = 0;
	virtual void RemoveSink() = 0;
	virtual bool GetFrameResolution(int&, int&) = 0;
	virtual void SetEventListener(IListener*) = 0;
};

/// <summary>
/// com::ricoh::livestreaming::SendingVideoOptionのWrapper
/// </summary>
class SendingVideoOption {
public:
	enum class VideoCodecType 
	{
		isNull = -999,
		Vp8 = 0,
		Vp9,
		H264,
	};

	enum class SendingPriority 
	{
		isNull = -999,
		Normal,
		High,
	};

	virtual SendingVideoOption::VideoCodecType get_Codec()=0;
	virtual SendingVideoOption::SendingPriority get_Priority()=0;
	virtual int get_MaxBitrateKbps()=0;
	virtual SendingVideoOption* SetCodec(VideoCodecType)=0;
	virtual SendingVideoOption* SetPriority(SendingPriority)=0;
	virtual SendingVideoOption* SetMaxBitrateKbps(int)=0;
	virtual ~SendingVideoOption() {};
};

/// <summary>
/// com::ricoh::livestreaming::unity::WindowProcedureHokのWrapper
/// </summary>
class WindowProcedureHook 
{
public:
	enum DeviceType
	{
		/// <summary>
		/// Video Capture device.
		/// </summary>
		VideoCapture,
		/// <summary>
		/// Audio device.
		/// </summary>
		Audio,
		/// <summary>
		/// Other devices.
		/// </summary>
		Unknown,
	};

	struct IListener 
	{
		virtual void OnDevicesChanged(DeviceType type) = 0;
	};
};

/// <summary>
/// com::ricoh::livestreaming::LibWebrtcLogOptionのWrapper
/// </summary>
class LibWebrtcLogOption
{
public:
	enum class Level
	{
		Verbose,
		Info,
	};

	virtual const wchar_t* get_Path() = 0;
	virtual unsigned int get_MaxTotalFileSize() = 0;
	virtual Level get_LogLevel() = 0;
	virtual ~LibWebrtcLogOption() {};
};

class ConnectionsStatus
{
public:
	virtual ConnectionsVideoStatus* get_ConnectionsVideoStatus() = 0;
	virtual ~ConnectionsStatus() {};
};

class ConnectionsVideoStatus
{
public:
	virtual bool get_ReceiverExistence() = 0;
	virtual ~ConnectionsVideoStatus() {};
};

class LSConnectingEvent {};

class LSOpenEvent
{
public:
	virtual const char* get_AccessTokenJson() = 0;
	virtual ConnectionsStatus* get_ConnectionsStatus() = 0;
};

class LSClosingEvent {};

class LSCloseEvent {};

class LSAddLocalTrackEvent
{
public:
	virtual MediaStreamTrack* get_MediaStreamTrack() = 0;
	virtual MediaStream* get_MediaStream() = 0;
};

class LSAddRemoteTrackEvent
{
public:
	virtual const char* get_ConnectionId() = 0;
	virtual MediaStreamTrack* get_MediaStreamTrack() = 0;
	virtual MediaStream* get_MediaStream() = 0;
	virtual StringDictionary* get_Metadata() = 0;
	virtual MuteType get_MuteType() = 0;
};

class LSAddRemoteConnectionEvent
{
public:
	virtual const char* get_ConnectionId() = 0;
	virtual StringDictionary* get_Metadata() = 0;
};

class LSRemoveRemoteConnectionEvent
{
public:
	virtual const char* get_ConnectionId() = 0;
	virtual List<MediaStreamTrack*>* get_MediaStreamTracks() = 0;
	virtual StringDictionary* get_Metadata() = 0;
};

class LSUpdateRemoteConnectionEvent
{
public:
	virtual const char* get_ConnectionId() = 0;
	virtual StringDictionary* get_Metadata() = 0;
};

class LSUpdateRemoteTrackEvent
{
public:
	virtual const char* get_ConnectionId() = 0;
	virtual MediaStreamTrack* get_MediaStreamTrack() = 0;
	virtual MediaStream* get_MediaStream() = 0;
	virtual StringDictionary* get_Metadata() = 0;
};

class LSUpdateMuteEvent
{
public:
	virtual const char* get_ConnectionId() = 0;
	virtual MediaStreamTrack* get_MediaStreamTrack() = 0;
	virtual MediaStream* get_MediaStream() = 0;
	virtual MuteType get_MuteType() = 0;
};

class LSChangeStabilityEvent
{
public:
	virtual const char* get_ConnectionId() = 0;
	virtual Stability get_Stability() = 0;
};

class LSUpdateConnectionsStatusEvent
{
public:
	virtual ConnectionsStatus* get_ConnectionsStatus() = 0;
};

/// <summary>
/// com::ricoh::livestreaming::IClientListenerのWrapper
/// </summary>
class IClientListener 
{
public:
	/// <summary>
	/// Called when the <see cref="Client"/> start to connect to the server.
	/// </summary>
	/// <param name="lsConnectingEvent"></param>
	virtual void OnConnecting(LSConnectingEvent* lsConnectingEvent) = 0;

	/// <summary>
	/// Called when the <see cref="Client"/> is connected to the server.
	/// </summary>
	/// <param name="lsOpenEvent"></param>
	virtual void OnOpen(LSOpenEvent* lsOpenEvent) = 0;

	/// <summary>
	/// Called when the <see cref="Client"/> start to disconnect from the server.
	/// </summary>
	/// <param name="lSClosingEvent"></param>
	virtual void OnClosing(LSClosingEvent* lSClosingEvent) = 0;

	/// <summary>
	/// Called when the <see cref="Client"/> is disconnected from the server.
	/// </summary>
	/// <param name="lSCloseEvent"></param>
	virtual void OnClosed(LSCloseEvent* lSCloseEvent) = 0;

	/// <summary>
	/// Called when new local track added.
	/// </summary>
	/// <param name="lsAddLocalTrackEvent"></param>
	virtual void OnAddLocalTrack(LSAddLocalTrackEvent* lsAddLocalTrackEvent) = 0;

	/// <summary>
	/// Called when new remote track added.
	/// </summary>
	/// <param name="lsAddRemoteTrackEvent"></param>
	virtual void OnAddRemoteTrack(LSAddRemoteTrackEvent* lsAddRemoteTrackEvent) = 0;

	/// <summary>
	/// Called when remote connection added.
	/// </summary>
	/// <param name="lsAddRemoteConnectionEvent"></param>
	virtual void OnAddRemoteConnection(LSAddRemoteConnectionEvent* lsAddRemoteConnectionEvent) = 0;

	/// <summary>
	/// Called when remote connection removed.
	/// </summary>
	/// <param name="lsRemoveRemoteConnectionEvent"></param>
	virtual void OnRemoveRemoteConnection(LSRemoveRemoteConnectionEvent* lsRemoveRemoteConnectionEvent) = 0;

	/// <summary>
	/// Called when an error occurs.
	/// </summary>
	/// <param name="errorEvent"><see cref="SDKErrorEvent"/></param>
	virtual void OnError(SDKErrorEvent* errorEvent) = 0;

	/// <summary>
	/// Called when update metadata of remote connection
	/// </summary>
	/// <param name="lsUpdateRemoteConnectionEvent"></param>
	virtual void OnUpdateRemoteConnection(LSUpdateRemoteConnectionEvent* lsUpdateRemoteConnectionEvent) = 0;

	/// <summary>
	/// Called when remote track updated.
	/// </summary>
	/// <param name="lsUpdateRemoteTrackEvent"></param>
	virtual void OnUpdateRemoteTrack(LSUpdateRemoteTrackEvent* lsUpdateRemoteTrackEvent) = 0;

	/// <summary>
	/// Called when remote track mute state updated.
	/// </summary>
	/// <param name="lsUpdateMuteEvent"></param>
	virtual void OnUpdateMute(LSUpdateMuteEvent* lsUpdateMuteEvent) = 0;

	/// <summary>
	/// Called when stability of the connection changed.
	/// </summary>
	/// <param name="lsChangeStabilityEvent"></param>
	virtual void OnChangeStability(LSChangeStabilityEvent* lsChangeStabilityEvent) = 0;

	/// <summary>
	/// Called when ConnectionsStatus has been updated.
	/// </summary>
	/// <param name="lSUpdateConnectionsStatusEvent"></param>
	virtual void OnUpdateConnectionsStatus(LSUpdateConnectionsStatusEvent* lSUpdateConnectionsStatusEvent) = 0;

	virtual ~IClientListener() {};
};