// Copyright 2023 RICOH Company, Ltd. All rights reserved.

#include "LSProxyOption.h"

ULSProxyOption::ULSProxyOption()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
}

ProxyOption* ULSProxyOption::Get() const
{
    return _proxyOption.get();
}

ULSProxyOption* ULSProxyOption::Create(const FString& url)
{
    _proxyOption.reset(_pluginModule->CreateProxyOption(TCHAR_TO_ANSI(*url)));
    return this;
}

FString ULSProxyOption::GetURL() const
{
    return FString(_proxyOption->get_Url());
}
