// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSLibWebrtcLogOption.h"

ULSLibWebrtcLogOption::ULSLibWebrtcLogOption()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
}

LibWebrtcLogOption* ULSLibWebrtcLogOption::Get() const
{
    return _LibWebrtcLogOption.get();
}

ULSLibWebrtcLogOption* ULSLibWebrtcLogOption::Create(const FString& path, int maxTotalFileSize, ELSLevel logLevel)
{
    _LibWebrtcLogOption.reset(_pluginModule->CreateLibWebrtcLogOption(*path, maxTotalFileSize, (LibWebrtcLogOption::Level)logLevel));
    return this;
}

FString ULSLibWebrtcLogOption::GetPath() const
{
    return FString(_LibWebrtcLogOption->get_Path());
}

int ULSLibWebrtcLogOption::GetMaxTotalFileSize() const
{
    return _LibWebrtcLogOption->get_MaxTotalFileSize();
}

ELSLevel ULSLibWebrtcLogOption::GetLogLevel() const
{
    return (ELSLevel)_LibWebrtcLogOption->get_LogLevel();
}
