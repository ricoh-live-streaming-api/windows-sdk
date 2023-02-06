// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSCodecUtil.h"

bool ULSCodecUtil::IsH264Supported()
{
    return ULSCodecUtil::GetPluginModule()->CodecUtil_IsH264Supported();
}

FLiveStreaming_ClientSDKModule* ULSCodecUtil::GetPluginModule()
{
    static FLiveStreaming_ClientSDKModule& pluginModule = FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME));
    return &pluginModule;
}
