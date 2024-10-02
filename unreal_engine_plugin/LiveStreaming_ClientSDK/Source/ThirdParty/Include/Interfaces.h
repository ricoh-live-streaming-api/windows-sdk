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
	/// MediaStreamConstraints��Wrapper�N���X��Create����֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::MediaStreamConstraints</remarks>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC MediaStreamConstraints* CreateMediaStreamConstraints();
	/// <summary>
	/// MediaStreamConstraints�̊֐��|�C���^�[�^
	/// </summary>
	typedef MediaStreamConstraints* (*CreateMediaStreamConstraintsFunc)();

	/// <summary>
	/// AudioDataCapturer��Create�֐�
	/// </summary>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC AudioDataCapturer* CreateAudioDataCapturer();
	/// <summary>
	/// AudioDataCapturer�̊֐��|�C���^�[�^
	/// </summary>
	typedef AudioDataCapturer* (*CreateAudioDataCapturerFunc)();

	/// <summary>
	/// VideoDeviceCapturer��Create�֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::VideoDeviceCapturer</remarks>
	/// <param name="devicename">���O</param>
	/// <param name="width">�L���v�`���[�摜�̕�</param>
	/// <param name="height">�L���v�`���[�摜�̍���</param>
	/// <param name="framerate">�t���[�����[�g</param>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC VideoDeviceCapturer* CreateVideoDeviceCapturer(const char* devicename, int width, int height, int framerate);
	/// <summary>
	/// VideoDeviceCapturer�̊֐��|�C���^�[�^
	/// </summary>
	typedef VideoDeviceCapturer* (*CreateVideoDeviceCapturerFunc)(const char*, int, int, int);

	/// <summary>
	/// ByteArrayCapturer��Create�֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::ByteArrayCapturer</remarks>
	/// <param name="width">�L���v�`���[�摜�̕�</param>
	/// <param name="height">�L���v�`���[�摜�̍���</param>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC ByteArrayCapturer* CreateByteArrayCapturer(int width, int height);
	/// <summary>
	/// ByteArrayCapturer�̊֐��|�C���^�[�^
	/// </summary>
	typedef ByteArrayCapturer* (*CreateByteArrayCapturerFunc)(int, int);

	/// <summary>
	/// ByteArrayRenderer��Create�֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::ByteArrayRenderer</remarks>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC ByteArrayRenderer* CreateByteArrayRenderer();
	/// <summary>
	/// ByteArrayRenderer�̊֐��|�C���^�[�^
	/// </summary>
	typedef ByteArrayRenderer* (*CreateByteArrayRendererFunc)();

	/// <summary>
	/// LSTrackOption��Create�֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::LSTrackOption</remarks>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC LSTrackOption* CreateLSTrackOption();
	/// <summary>
	/// LSTrackOption�̊֐��|�C���^�[�^
	/// </summary>
	typedef LSTrackOption* (*CreateLSTrackOptionFunc)();

	/// <summary>
	/// LSTrack��Create�֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::LSTrack</remarks>
	/// <param name="mediaStreamTrack">MediaStreamTrack</param>
	/// <param name="stream">MediaStream</param>
	/// <param name="option">LSTrackOption</param>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC LSTrack* CreateLSTrack(MediaStreamTrack* mediaStreamTrack, MediaStream* stream, LSTrackOption* option);
	/// <summary>
	/// LSTrack�̊֐��|�C���^�[�^
	/// </summary>
	typedef LSTrack* (*CreateLSTrackFunc)(MediaStreamTrack*, MediaStream*, LSTrackOption*);

	/// <summary>
	/// SendingVideoOption��Create�֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::SendingVideoOption</remarks>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC SendingVideoOption* CreateSendingVideoOption();
	/// <summary>
	/// SendingVideoOption�̊֐��|�C���^�[�^
	/// </summary>
	typedef SendingVideoOption* (*CreateSendingVideoOptionFunc)();

	/// <summary>
	/// Option��Create�֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::Option</remarks>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC Option* CreateOption();
	/// <summary>
	/// Option�̊֐��|�C���^�[�^
	/// </summary>
	typedef Option* (*CreateOptionFunc)();

	/// <summary>
	/// SendingVideoOption��Create�֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::SendingVideoOption</remarks>
	/// <param name="sendingVideoOption">SendingVideoOption</param>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC SendingOption* CreateSendingOption(SendingVideoOption* sendingVideoOption,bool enabled);
	/// <summary>
	/// SendingOption�̊֐��|�C���^�[�^
	/// </summary>
	typedef SendingOption* (*CreateSendingOptionFunc)(SendingVideoOption* ,bool);

	/// <summary>
	/// ReceivingOption��Create�֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::ReceivingOption</remarks>
	/// <param name="enable">��M���s����</param>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC ReceivingOption* CreateReceivingOption(bool enable);
	/// <summary>
	/// ReceivingOption�̊֐��|�C���^�[�^
	/// </summary>
	typedef ReceivingOption* (*CreateReceivingOptionFunc)(bool);

	/// <summary>
	/// ProxyOption��Create�֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::ProxyOption</remarks>
	/// <param name="url">Proxy�T�[�o�[��URL</param>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC ProxyOption* CreateProxyOption(const char* url);
	/// <summary>
	/// ProxyOption�̊֐��|�C���^�[�^
	/// </summary>
	typedef ProxyOption* (*CreateProxyOptionFunc)(const char*);

	/// <summary>
	/// Client��Create�֐�
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::Create</remarks>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC Client* CreateClient();
	/// <summary>
	/// Client�̊֐��|�C���^�[�^
	/// </summary>
	typedef Client* (*CreateClientFunc)();

	/// <summary>
	/// StringDictionary��Create�֐�
	/// </summary>
	/// <remarks>System::Collections::Generic::Dictionary��Sring���g�p�����֐�</remarks>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC StringDictionary* CreateStringDictionary();
	/// <summary>
	/// StringDictionary�̊֐��|�C���^�[�^
	/// </summary>
	typedef StringDictionary* (*CreateStringDictionaryFunc)();

	/// <summary>
	/// StringList��Create�֐�
	/// </summary>
	/// <remarks>System::Collections::Generic::List��Sring���g�p�����֐�</remarks>
	/// <returns>Wrapper�N���X�̃C���X�^���X</returns>
	DECLSPEC StringList* CreateStringList();
	/// <summary>
	/// StringList�̊֐��|�C���^�[�^
	/// </summary>
	typedef StringList* (*CreateStringListFunc)();

	/// <summary>
	/// CodecUtil��IsH264Supported�Ăяo��
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::CodecUtil::IsH264Supported</remarks>
	/// <returns>IsH264Supported�̖߂�l</returns>
	DECLSPEC bool CodecUtil_IsH264Supported();
	/// <summary>
	/// CodecUtil_IsH264Supported�̊֐��|�C���^�[�^
	/// </summary>
	typedef bool (*CodecUtil_IsH264SupportedFunc)();

	/// <summary>
	/// DeviceUtil��GetAudioInputDeviceList�Ăяo��
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::DeviceUtil::GetAudioInputDeviceList</remarks>
	/// <returns>GetAudioInputDeviceList�̖߂�l</returns>
	DECLSPEC List<DeviceInfo*>* DeviceUtil_GetAudioInputDeviceList();
	/// <summary>
	/// DeviceUtil��GetAudioOutputDeviceList�Ăяo��
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::DeviceUtil::GetAudioOutputDeviceList</remarks>
	/// <returns>GetAudioOutputDeviceList�̖߂�l</returns>
	DECLSPEC List<DeviceInfo*>* DeviceUtil_GetAudioOutputDeviceList();
	/// <summary>
	/// DeviceUtil��GetVideoCapturerDeviceList�Ăяo��
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::DeviceUtil::GetVideoCapturerDeviceList</remarks>
	/// <returns>GetVideoCapturerDeviceList�̖߂�l</returns>
	DECLSPEC List<DeviceInfo*>* DeviceUtil_GetVideoCapturerDeviceList();
	/// <summary>
	/// DeviceUtil�̊֐��|�C���^�[�^
	/// </summary>
	typedef List<DeviceInfo*>* (*DeviceUtil_GetDeviceFunc)();

	/// <summary>
	///  DeviceUtil��GetVideoCapturerDeviceCapabilities�Ăяo��
	/// </summary>
	/// <remarks>com::ricoh::livestreaming::webrtc::DeviceUtil::GetVideoCapturerDeviceCapabilities</remarks>
	/// <param name="deviceName">�f�o�C�X��</param>
	/// <returns>GetVideoCapturerDeviceCapabilities�̖߂�l</returns>
	DECLSPEC List<VideoCapturerDeviceCapability*>* DeviceUtil_GetVideoCapturerDeviceCapabilities(const char* deviceName);
	/// <summary>
	/// DeviceUtil_GetVideoCapturerDeviceCapabilities�̊֐��|�C���^�[�^
	/// </summary>
	typedef List<VideoCapturerDeviceCapability*>* (*DeviceUtil_GetCapabilitiesFunc)(const char*);

	/// <summary>
	/// RtcStatsWriter�̎��̂𐶐�
	/// </summary>
	/// <param name="path">���O�t�@�C���p�X</param>
	/// <param name="targetTypeNames">�o�͑Ώۂ̃^�C�v�����X�g</param>
	/// <returns>RtcStatsWriter�̎���</returns>
	DECLSPEC RtcStatsWriter* CreateRtcStatsWriter(const char* path, ReadOnlyList<const char*>* targetTypeNames);
	/// <summary>
	/// RtcStatsWriter�̎��̂𐶐�����֐��|�C���^�^
	/// </summary>
	typedef RtcStatsWriter* (*CreateRtcStatsWriterFunc)(const char* path, ReadOnlyList<const char*>* targetTypeNames);

	/// <summary>
	/// LibWebrtcLogOption�̎��̂𐶐�
	/// </summary>
	/// <returns>LibWebrtcLogOption�̎���</returns>
	DECLSPEC LibWebrtcLogOption* CreateLibWebrtcLogOption(const wchar_t* path, unsigned int maxTotalFileSize, LibWebrtcLogOption::Level logLevel);
	/// <summary>
	/// LibWebrtcLogOption�̎��̂𐶐�����֐��|�C���^�^
	/// </summary>
	typedef LibWebrtcLogOption* (*CreateLibWebrtcLogOptionFunc)(const wchar_t* path, unsigned int maxTotalFileSize, LibWebrtcLogOption::Level logLevel);

	/// <summary>
	/// .net��Dispatcher�@�\��񋟂���iLoadLibrary����NameSpane�͌����Ȃ��̂Œ��Ӂj
	/// </summary>
	namespace Dispatcher 
	{
		/// <summary>
		/// Action��񓯊��ɏ������܂�
		/// </summary>
		DECLSPEC void BeginInvoke(Action* action, Priority priority);
		DECLSPEC void BeginNormal(Action* action);

		/// <summary>
		/// Action�𓯊��I�ɏ������܂�
		/// </summary>
		DECLSPEC void Invoke(Action* action, Priority priority);
		DECLSPEC void InvokeNormal(Action* action);

		/// <summary>
		/// BeginInvoke�y��BeginNormal�̊֐��|�C���^�[�^
		/// </summary>
		typedef void (*DispatcherInvokeFunc)(Action* action, Priority priority);
		/// <summary>
		/// Invoke�y��InvokeNormal�̊֐��|�C���^�[�^
		/// </summary>
		typedef void (*DispatcherNormalInvokeFunc)(Action* action);
	}

	/// <summary>
	/// Log4net�̃��O�@�\��񋟂���iLoadLibrary����NameSpane�͌����Ȃ��̂Œ��Ӂj
	/// </summary>
	namespace Logger
	{
		
		DECLSPEC void LogConfigure(const char* configXmlPath);
		/// <summary>
		/// LogConfigure�̊֐��|�C���^�[�^
		/// </summary>
		typedef void (*ConfigureFunc)(const char* configXmlPath);

		DECLSPEC void SetLogProperty(const char* propName, const char* propValue);
		/// <summary>
		/// SetLogProperty�̊֐��|�C���^�[�^
		/// </summary>
		typedef void (*SetLogPropertyFunc)(const char* propName, const char* propValue);

		DECLSPEC void Debug(const char* message);
		DECLSPEC void Info(const char* message);
		DECLSPEC void Warn(const char* message);
		DECLSPEC void Error(const char* message);
		/// <summary>
		/// Debug,Info,Warn,Error�̊֐��|�C���^�[�^
		/// </summary>
		typedef void (*LogWriteFunc)(const char* message);
	}

#ifdef __cplusplus
}
#endif