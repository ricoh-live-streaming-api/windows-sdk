// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "../../ThirdParty/Include/Interfaces.h"
#include "../../ThirdParty/Include/CollectionsImpl.h"

DECLARE_LOG_CATEGORY_EXTERN(LogLiveStreaming, Log, All);

class FLiveStreaming_ClientSDKModule : public IModuleInterface
{
public:
    // IModuleInterface implementation 
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    CreateMediaStreamConstraintsFunc CreateMediaStreamConstraints;
    CreateAudioDataCapturerFunc CreateAudioDataCapturer;
    CreateVideoDeviceCapturerFunc CreateVideoDeviceCapturer;
    CreateByteArrayCapturerFunc CreateByteArrayCapturer;
    CreateByteArrayRendererFunc CreateByteArrayRenderer;
    CreateLSTrackOptionFunc CreateLSTrackOption;
    CreateLSTrackFunc CreateLSTrack;
    CreateSendingVideoOptionFunc CreateSendingVideoOption;
    CreateOptionFunc CreateOption;
    CreateSendingOptionFunc CreateSendingOption;
    CreateReceivingOptionFunc CreateReceivingOption;
    CreateProxyOptionFunc CreateProxyOption;
    CreateLibWebrtcLogOptionFunc CreateLibWebrtcLogOption;
    CreateClientFunc CreateClient;
    CreateStringDictionaryFunc CreateStringDictionary;
    CreateStringListFunc CreateStringList;
    CodecUtil_IsH264SupportedFunc CodecUtil_IsH264Supported;
    DeviceUtil_GetDeviceFunc DeviceUtil_GetAudioInputDeviceList;
    DeviceUtil_GetDeviceFunc DeviceUtil_GetAudioOutputDeviceList;
    DeviceUtil_GetDeviceFunc DeviceUtil_GetVideoCapturerDeviceList;
    DeviceUtil_GetCapabilitiesFunc DeviceUtil_GetVideoCapturerDeviceCapabilities;
    CreateRtcStatsWriterFunc CreateRtcStatsWriter;

    Logger::LogWriteFunc Debug;
    Logger::LogWriteFunc Info;
    Logger::LogWriteFunc Warn;
    Logger::LogWriteFunc Error;

private:
    void* moduleClient;
    void* moduleAssemb;

    void* LoadDllFile(FString dirPath, FString dllName);
};
