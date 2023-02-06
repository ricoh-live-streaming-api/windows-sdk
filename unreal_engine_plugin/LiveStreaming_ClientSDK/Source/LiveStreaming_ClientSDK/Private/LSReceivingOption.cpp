// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSReceivingOption.h"

ULSReceivingOption::ULSReceivingOption()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
    _receivingOption.reset(_pluginModule->CreateReceivingOption(true));
}

ReceivingOption* ULSReceivingOption::Get() const
{
    return _receivingOption.get();
}

void ULSReceivingOption::Create(bool bEnabled)
{
    _receivingOption.reset(_pluginModule->CreateReceivingOption(bEnabled));
}

bool ULSReceivingOption::GetEnabled() const
{
    return _receivingOption ? _receivingOption->get_Enabled() : false;
}
