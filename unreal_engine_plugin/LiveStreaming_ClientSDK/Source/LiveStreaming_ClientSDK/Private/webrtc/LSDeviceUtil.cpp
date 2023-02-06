// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSDeviceUtil.h"
#include "LSUtility.h"

TArray<ULSDeviceInfo*> ULSDeviceUtil::GetAudioInputDeviceList()
{
    auto deviceList = ULSDeviceUtil::GetPluginModule()->DeviceUtil_GetAudioInputDeviceList();
    return LSUtility::ConvertListToTArray<ULSDeviceInfo, DeviceInfo>(deviceList);
}

TArray<ULSDeviceInfo*> ULSDeviceUtil::GetAudioOutputDeviceList()
{
    auto deviceList = ULSDeviceUtil::GetPluginModule()->DeviceUtil_GetAudioOutputDeviceList();
    return LSUtility::ConvertListToTArray<ULSDeviceInfo, DeviceInfo>(deviceList);
}

TArray<ULSDeviceInfo*> ULSDeviceUtil::GetVideoCapturerDeviceList()
{
    auto deviceList = ULSDeviceUtil::GetPluginModule()->DeviceUtil_GetVideoCapturerDeviceList();
    return LSUtility::ConvertListToTArray<ULSDeviceInfo, DeviceInfo>(deviceList);
}

TArray<ULSVideoCapturerDeviceCapability*> ULSDeviceUtil::GetVideoCapturerDeviceCapabilities(const FString& deviceName)
{
    auto deviceList = ULSDeviceUtil::GetPluginModule()->DeviceUtil_GetVideoCapturerDeviceCapabilities(TCHAR_TO_UTF8(*deviceName));
    return LSUtility::ConvertListToTArray<ULSVideoCapturerDeviceCapability, VideoCapturerDeviceCapability>(deviceList);
}

FLiveStreaming_ClientSDKModule* ULSDeviceUtil::GetPluginModule()
{
    static FLiveStreaming_ClientSDKModule& pluginModule = FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME));
    return &pluginModule;
}
