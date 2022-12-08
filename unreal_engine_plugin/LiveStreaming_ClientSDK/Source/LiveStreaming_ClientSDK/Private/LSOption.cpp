// Copyright 2022 RICOH Company, Ltd. All rights reserved.


#include "LSOption.h"
#include "LSUtility.h"

ULSOption::ULSOption()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
    _option.reset(_pluginModule->CreateOption());
}

Option* ULSOption::Get() const
{
    return _option.get();
}

FString ULSOption::GetSignalingURL() const
{
    return  FString(_option->get_SignalingURL());
}

TArray<ULSTrack*> ULSOption::GetLocalLSTracks() const
{
    return LSUtility::ConvertListToTArray<ULSTrack, LSTrack>(_option->get_LocalLSTracks());
}

TMap<FString, FString> ULSOption::GetMetadata() const
{
    return LSUtility::ConvertStrDicToTMap(_option->get_Meta());
}

bool ULSOption::GetEnableCpuOveruseDetection() const
{
    return _option->get_EnableCpuOveruseDetection();
}

ULSSendingOption* ULSOption::GetSendingOption() const
{
    return _sendingOption;
}

ULSReceivingOption* ULSOption::GetReceivingOption() const
{
    return _receivingOption;
}

ELSIceTransportPolicy ULSOption::GetIceTransportPolicy() const
{
    return (ELSIceTransportPolicy)_option->get_IceTransportPolicy();
}

ELSIceServersProtocol ULSOption::GetIceServersProtocol() const
{
    return (ELSIceServersProtocol)_option->get_IceServersProtocol();
}

ULSOption* ULSOption::SetSignalingURL(const FString& signalingURL)
{
    _option->SetSignalingURL(TCHAR_TO_ANSI(*signalingURL));
    return this;
}

ULSOption* ULSOption::SetLocalLSTracks(const TArray<ULSTrack*>& localLSTracks)
{
    auto tracks = LSUtility::ConvertTArrayToList<LSTrack, ULSTrack>(localLSTracks);
    _option->SetLocalLSTracks(tracks);
    return this;
}

ULSOption* ULSOption::SetMeta(const TMap<FString, FString>& meta)
{
    std::unique_ptr<StringDictionary> dic(_pluginModule->CreateStringDictionary());
    LSUtility::ConvertTMapToStrDic(meta, dic.get());
    _option->SetMeta(dic.get());
    return this;
}

ULSOption* ULSOption::SetEnableCpuOveruseDetection(bool bEnabled)
{
    _option->SetEnableCpuOveruseDetection(bEnabled);
    return this;
}

ULSOption* ULSOption::SetSendingOption(ULSSendingOption* sendingOption)
{
    if (sendingOption)
    {
        _option->SetSendingOption(sendingOption->Get());
        _sendingOption = sendingOption;
    }
    return this;
}

ULSOption* ULSOption::SetReceivingOption(ULSReceivingOption* receivingOption)
{
    if (receivingOption)
    {
        _option->SetReceivingOption(receivingOption->Get());
        _receivingOption = receivingOption;
    }
    return this;
}

ULSOption* ULSOption::SetIceTransportPolicy(ELSIceTransportPolicy iceTransportPolicy)
{
    _option->SetIceTransportPolicy((IceTransportPolicy)iceTransportPolicy);
    return this;
}

ULSOption* ULSOption::SetIceServersProtocol(ELSIceServersProtocol iceServersProtocol)
{
    _option->SetIceServersProtocol((IceServersProtocol)iceServersProtocol);
    return this;
}