// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSLogger.h"

void ULSLogger::Debug(FString message)
{
    UE_LOG(LogLiveStreaming, Log, TEXT("[Debug]%s"), *message);
    ULSLogger::GetPluginModule()->Debug(TCHAR_TO_ANSI(*message));
}

void ULSLogger::Info(FString message)
{
    UE_LOG(LogLiveStreaming, Log, TEXT("[Info]%s"), *message);
    ULSLogger::GetPluginModule()->Info(TCHAR_TO_ANSI(*message));
}

void ULSLogger::Warn(FString message)
{
    UE_LOG(LogLiveStreaming, Log, TEXT("[Warn]%s"), *message);
    ULSLogger::GetPluginModule()->Warn(TCHAR_TO_ANSI(*message));
}

void ULSLogger::Error(FString message)
{
    UE_LOG(LogLiveStreaming, Log, TEXT("[Error]%s"), *message);
    ULSLogger::GetPluginModule()->Error(TCHAR_TO_ANSI(*message));
}

FLiveStreaming_ClientSDKModule* ULSLogger::GetPluginModule()
{
    static FLiveStreaming_ClientSDKModule& pluginModule = FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME));
    return &pluginModule;
}
