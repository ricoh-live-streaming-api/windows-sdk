// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once
#include "ClassDefine.h"
#include "Collections.h"
#include "Dispatcher.h"

#ifdef UECLIENT_EXPORTS
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C"
{
#endif
	DECLSPEC void InitializeClientModule();

	typedef void (*InitializeClientModuleFunc)();

	/// <summary>
	/// MediaStreamConstraintsのWrapperクラスをCreateする関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::MediaStreamConstraints</remarks>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC MediaStreamConstraints* CreateMediaStreamConstraints();
	/// <summary>
	/// MediaStreamConstraintsの関数ポインター型
	/// </summary>
	typedef MediaStreamConstraints* (*CreateMediaStreamConstraintsFunc)();

	/// <summary>
	/// AudioDataCapturerのCreate関数
	/// </summary>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC AudioDataCapturer* CreateAudioDataCapturer();
	/// <summary>
	/// AudioDataCapturerの関数ポインター型
	/// </summary>
	typedef AudioDataCapturer* (*CreateAudioDataCapturerFunc)();

	/// <summary>
	/// VideoDeviceCapturerのCreate関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::VideoDeviceCapturer</remarks>
	/// <param name="devicename">名前</param>
	/// <param name="width">キャプチャー画像の幅</param>
	/// <param name="height">キャプチャー画像の高さ</param>
	/// <param name="framerate">フレームレート</param>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC VideoDeviceCapturer* CreateVideoDeviceCapturer(const char* devicename, int width, int height, int framerate);
	/// <summary>
	/// VideoDeviceCapturerの関数ポインター型
	/// </summary>
	typedef VideoDeviceCapturer* (*CreateVideoDeviceCapturerFunc)(const char*, int, int, int);

	/// <summary>
	/// ByteArrayCapturerのCreate関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::ByteArrayCapturer</remarks>
	/// <param name="width">キャプチャー画像の幅</param>
	/// <param name="height">キャプチャー画像の高さ</param>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC ByteArrayCapturer* CreateByteArrayCapturer(int width, int height);
	/// <summary>
	/// ByteArrayCapturerの関数ポインター型
	/// </summary>
	typedef ByteArrayCapturer* (*CreateByteArrayCapturerFunc)(int, int);

	/// <summary>
	/// ByteArrayRendererのCreate関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::ByteArrayRenderer</remarks>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC ByteArrayRenderer* CreateByteArrayRenderer();
	/// <summary>
	/// ByteArrayRendererの関数ポインター型
	/// </summary>
	typedef ByteArrayRenderer* (*CreateByteArrayRendererFunc)();

	/// <summary>
	/// LSTrackOptionのCreate関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::LSTrackOption</remarks>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC LSTrackOption* CreateLSTrackOption();
	/// <summary>
	/// LSTrackOptionの関数ポインター型
	/// </summary>
	typedef LSTrackOption* (*CreateLSTrackOptionFunc)();

	/// <summary>
	/// LSTrackのCreate関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::LSTrack</remarks>
	/// <param name="mediaStreamTrack">MediaStreamTrack</param>
	/// <param name="stream">MediaStream</param>
	/// <param name="option">LSTrackOption</param>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC LSTrack* CreateLSTrack(MediaStreamTrack* mediaStreamTrack, MediaStream* stream, LSTrackOption* option);
	/// <summary>
	/// LSTrackの関数ポインター型
	/// </summary>
	typedef LSTrack* (*CreateLSTrackFunc)(MediaStreamTrack*, MediaStream*, LSTrackOption*);

	/// <summary>
	/// SendingVideoOptionのCreate関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::SendingVideoOption</remarks>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC SendingVideoOption* CreateSendingVideoOption();
	/// <summary>
	/// SendingVideoOptionの関数ポインター型
	/// </summary>
	typedef SendingVideoOption* (*CreateSendingVideoOptionFunc)();

	/// <summary>
	/// OptionのCreate関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::Option</remarks>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC Option* CreateOption();
	/// <summary>
	/// Optionの関数ポインター型
	/// </summary>
	typedef Option* (*CreateOptionFunc)();

	/// <summary>
	/// SendingVideoOptionのCreate関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::SendingVideoOption</remarks>
	/// <param name="sendingVideoOption">SendingVideoOption</param>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC SendingOption* CreateSendingOption(SendingVideoOption* sendingVideoOption,bool enabled);
	/// <summary>
	/// SendingOptionの関数ポインター型
	/// </summary>
	typedef SendingOption* (*CreateSendingOptionFunc)(SendingVideoOption* ,bool);

	/// <summary>
	/// ReceivingOptionのCreate関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::ReceivingOption</remarks>
	/// <param name="enable">受信を行うか</param>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC ReceivingOption* CreateReceivingOption(bool enable);
	/// <summary>
	/// ReceivingOptionの関数ポインター型
	/// </summary>
	typedef ReceivingOption* (*CreateReceivingOptionFunc)(bool);

	/// <summary>
	/// ProxyOptionのCreate関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::ProxyOption</remarks>
	/// <param name="url">ProxyサーバーのURL</param>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC ProxyOption* CreateProxyOption(const char* url);
	/// <summary>
	/// ProxyOptionの関数ポインター型
	/// </summary>
	typedef ProxyOption* (*CreateProxyOptionFunc)(const char*);

	/// <summary>
	/// ClientのCreate関数
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::Create</remarks>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC Client* CreateClient();
	/// <summary>
	/// Clientの関数ポインター型
	/// </summary>
	typedef Client* (*CreateClientFunc)();

	/// <summary>
	/// StringDictionaryのCreate関数
	/// </summary>
	/// <remarks>System::Collections::Generic::DictionaryのSringを使用した関数</remarks>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC StringDictionary* CreateStringDictionary();
	/// <summary>
	/// StringDictionaryの関数ポインター型
	/// </summary>
	typedef StringDictionary* (*CreateStringDictionaryFunc)();

	/// <summary>
	/// StringListのCreate関数
	/// </summary>
	/// <remarks>System::Collections::Generic::ListのSringを使用した関数</remarks>
	/// <returns>Wrapperクラスのインスタンス</returns>
	DECLSPEC StringList* CreateStringList();
	/// <summary>
	/// StringListの関数ポインター型
	/// </summary>
	typedef StringList* (*CreateStringListFunc)();

	/// <summary>
	/// CodecUtilのIsH264Supported呼び出し
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::CodecUtil::IsH264Supported</remarks>
	/// <returns>IsH264Supportedの戻り値</returns>
	DECLSPEC bool CodecUtil_IsH264Supported();
	/// <summary>
	/// CodecUtil_IsH264Supportedの関数ポインター型
	/// </summary>
	typedef bool (*CodecUtil_IsH264SupportedFunc)();

	/// <summary>
	/// DeviceUtilのGetAudioInputDeviceList呼び出し
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::DeviceUtil::GetAudioInputDeviceList</remarks>
	/// <returns>GetAudioInputDeviceListの戻り値</returns>
	DECLSPEC List<DeviceInfo*>* DeviceUtil_GetAudioInputDeviceList();
	/// <summary>
	/// DeviceUtilのGetAudioOutputDeviceList呼び出し
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::DeviceUtil::GetAudioOutputDeviceList</remarks>
	/// <returns>GetAudioOutputDeviceListの戻り値</returns>
	DECLSPEC List<DeviceInfo*>* DeviceUtil_GetAudioOutputDeviceList();
	/// <summary>
	/// DeviceUtilのGetVideoCapturerDeviceList呼び出し
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::DeviceUtil::GetVideoCapturerDeviceList</remarks>
	/// <returns>GetVideoCapturerDeviceListの戻り値</returns>
	DECLSPEC List<DeviceInfo*>* DeviceUtil_GetVideoCapturerDeviceList();
	/// <summary>
	/// DeviceUtilの関数ポインター型
	/// </summary>
	typedef List<DeviceInfo*>* (*DeviceUtil_GetDeviceFunc)();

	/// <summary>
	///  DeviceUtilのGetVideoCapturerDeviceCapabilities呼び出し
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::DeviceUtil::GetVideoCapturerDeviceCapabilities</remarks>
	/// <param name="deviceName">デバイス名</param>
	/// <returns>GetVideoCapturerDeviceCapabilitiesの戻り値</returns>
	DECLSPEC List<VideoCapturerDeviceCapability*>* DeviceUtil_GetVideoCapturerDeviceCapabilities(const char* deviceName);
	/// <summary>
	/// DeviceUtil_GetVideoCapturerDeviceCapabilitiesの関数ポインター型
	/// </summary>
	typedef List<VideoCapturerDeviceCapability*>* (*DeviceUtil_GetCapabilitiesFunc)(const char*);

	/// <summary>
	/// RtcStatsWriterの実体を生成
	/// </summary>
	/// <param name="path">ログファイルパス</param>
	/// <param name="targetTypeNames">出力対象のタイプ名リスト</param>
	/// <returns>RtcStatsWriterの実体</returns>
	DECLSPEC RtcStatsWriter* CreateRtcStatsWriter(const char* path, ReadOnlyList<const char*>* targetTypeNames);
	/// <summary>
	/// RtcStatsWriterの実体を生成する関数ポインタ型
	/// </summary>
	typedef RtcStatsWriter* (*CreateRtcStatsWriterFunc)(const char* path, ReadOnlyList<const char*>* targetTypeNames);

	/// <summary>
	/// LibWebrtcLogOptionの実体を生成
	/// </summary>
	/// <returns>LibWebrtcLogOptionの実体</returns>
	DECLSPEC LibWebrtcLogOption* CreateLibWebrtcLogOption(const wchar_t* path, unsigned int maxTotalFileSize, LibWebrtcLogOption::Level logLevel);
	/// <summary>
	/// LibWebrtcLogOptionの実体を生成する関数ポインタ型
	/// </summary>
	typedef LibWebrtcLogOption* (*CreateLibWebrtcLogOptionFunc)(const wchar_t* path, unsigned int maxTotalFileSize, LibWebrtcLogOption::Level logLevel);

	/// <summary>
	/// .netのDispatcher機能を提供する（LoadLibrary時にNameSpaneは効かないので注意）
	/// </summary>
	namespace Dispatcher 
	{
		/// <summary>
		/// Actionを非同期に処理します
		/// </summary>
		DECLSPEC void BeginInvoke(Action* action, Priority priority);
		DECLSPEC void BeginNormal(Action* action);

		/// <summary>
		/// Actionを同期的に処理します
		/// </summary>
		DECLSPEC void Invoke(Action* action, Priority priority);
		DECLSPEC void InvokeNormal(Action* action);

		/// <summary>
		/// BeginInvoke及びBeginNormalの関数ポインター型
		/// </summary>
		typedef void (*DispatcherInvokeFunc)(Action* action, Priority priority);
		/// <summary>
		/// Invoke及びInvokeNormalの関数ポインター型
		/// </summary>
		typedef void (*DispatcherNormalInvokeFunc)(Action* action);
	}

	/// <summary>
	/// Log4netのログ機能を提供する（LoadLibrary時にNameSpaneは効かないので注意）
	/// </summary>
	namespace Logger
	{
		
		DECLSPEC void LogConfigure(const char* configXmlPath);
		/// <summary>
		/// LogConfigureの関数ポインター型
		/// </summary>
		typedef void (*ConfigureFunc)(const char* configXmlPath);

		DECLSPEC void SetLogProperty(const char* propName, const char* propValue);
		/// <summary>
		/// SetLogPropertyの関数ポインター型
		/// </summary>
		typedef void (*SetLogPropertyFunc)(const char* propName, const char* propValue);

		DECLSPEC void Debug(const char* message);
		DECLSPEC void Info(const char* message);
		DECLSPEC void Warn(const char* message);
		DECLSPEC void Error(const char* message);
		/// <summary>
		/// Debug,Info,Warn,Errorの関数ポインター型
		/// </summary>
		typedef void (*LogWriteFunc)(const char* message);
	}

#ifdef __cplusplus
}
#endif