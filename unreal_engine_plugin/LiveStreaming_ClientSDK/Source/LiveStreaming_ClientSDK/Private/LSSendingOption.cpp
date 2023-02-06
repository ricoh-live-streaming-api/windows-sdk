// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSSendingOption.h"

ULSSendingOption::ULSSendingOption()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
}

SendingOption* ULSSendingOption::Get() const
{
    return _sendingOption.get();
}

ULSSendingOption* ULSSendingOption::Create(ULSSendingVideoOption* sendingVideoOption, bool bEnabled)
{
    if (!_sendingVideoOption)
    {
        _sendingOption.reset(_pluginModule->CreateSendingOption(sendingVideoOption->Get(), bEnabled));
        _sendingVideoOption = sendingVideoOption;
    }
    return this;
}

ULSSendingVideoOption* ULSSendingOption::GetVideo() const
{
    return _sendingVideoOption;
}
