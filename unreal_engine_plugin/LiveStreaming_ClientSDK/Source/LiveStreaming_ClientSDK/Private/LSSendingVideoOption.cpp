// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSSendingVideoOption.h"

ULSSendingVideoOption::ULSSendingVideoOption()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
    _sendingVideoOption.reset(_pluginModule->CreateSendingVideoOption());
}

SendingVideoOption* ULSSendingVideoOption::Get() const
{
    return _sendingVideoOption.get();
}

ELSVideoCodecType ULSSendingVideoOption::GetCodec() const
{
    return (ELSVideoCodecType)_sendingVideoOption->get_Codec();
}

ELSSendingPriority ULSSendingVideoOption::GetPriority() const
{
    return (ELSSendingPriority)_sendingVideoOption->get_Priority();
}

int ULSSendingVideoOption::GetMaxBitrateKbps() const
{
    return _sendingVideoOption->get_MaxBitrateKbps();
}

ULSSendingVideoOption* ULSSendingVideoOption::SetCodec(ELSVideoCodecType videoCodecType)
{
    _sendingVideoOption->SetCodec((SendingVideoOption::VideoCodecType)videoCodecType);
    return this;
}

ULSSendingVideoOption* ULSSendingVideoOption::SetPriority(ELSSendingPriority sendingPriority)
{
    _sendingVideoOption->SetPriority((SendingVideoOption::SendingPriority)sendingPriority);
    return this;
}

ULSSendingVideoOption* ULSSendingVideoOption::SetMaxBitrateKbps(int maxBitrateKbps)
{
    _sendingVideoOption->SetMaxBitrateKbps(maxBitrateKbps);
    return this;
}
