// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSClient.h"
#include "LSUtility.h"

ULSClient::ULSClient()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
    _client.reset(_pluginModule->CreateClient());
}

Client* ULSClient::Get() const
{
    return _client.get();
}

void ULSClient::Dispose()
{
    if (_client)
    {
        _client->Dispose();
        _client.reset();
    }
}

ULSMediaStream* ULSClient::GetUserMedia(ULSMediaStreamConstraints* constrants, bool& bOutResult, FLSSDKException& OutSDKException)
{
    checkf(_client, TEXT("Client is disposed."));
    ULSMediaStream* mediaStream = nullptr;
    bOutResult = false;

    try
    {
        mediaStream = NewObject<ULSMediaStream>();
        mediaStream->Set(_client->GetUserMedia(constrants->Get()));
        bOutResult = true;
    }
    catch (SDKException& e)
    {
        OutSDKException = { e };
    }
    catch (std::exception& e)
    {
        OutSDKException = { e };
    }

    return mediaStream;
}

void ULSClient::Connect(const FString& clientId, const FString& accessToken, ULSOption* option, bool& bOutResult, FLSSDKException& OutSDKException)
{
    checkf(_client, TEXT("Client is disposed."));
    bOutResult = false;

    try
    {
        _client->Connect(TCHAR_TO_ANSI(*clientId), TCHAR_TO_ANSI(*accessToken), option->Get());
        bOutResult = true;
    }
    catch (SDKException& e)
    {
        OutSDKException = { e };
    }
    catch (std::exception& e)
    {
        OutSDKException = { e };
    }
}

void ULSClient::Disconnect(bool& bOutResult, FLSSDKException& OutSDKException)
{
    checkf(_client, TEXT("Client is disposed."));
    bOutResult = false;

    try
    {
        _client->Disconnect();
        bOutResult = true;
    }
    catch (SDKException& e)
    {
        OutSDKException = { e };
    }
    catch (std::exception& e)
    {
        OutSDKException = { e };
    }
}

ELSConnectionState ULSClient::GetState() const
{
    checkf(_client, TEXT("Client is disposed."));
    return (ELSConnectionState)_client->GetState();
}

void ULSClient::UpdateMeta(const TMap<FString, FString>& meta, bool& bOutResult, FLSSDKException& OutSDKException)
{
    checkf(_client, TEXT("Client is disposed."));
    bOutResult = false;

    try
    {
        std::unique_ptr<StringDictionary> dic(_pluginModule->CreateStringDictionary());
        LSUtility::ConvertTMapToStrDic(meta, dic.get());
        _client->UpdateMeta(dic.get());
        bOutResult = true;
    }
    catch (SDKException& e)
    {
        OutSDKException = { e };
    }
    catch (std::exception& e)
    {
        OutSDKException = { e };
    }
}

void ULSClient::UpdateTrackMeta(ULSTrack* lsTrack, const TMap<FString, FString>& meta, bool& bOutResult, FLSSDKException& OutSDKException)
{
    checkf(_client, TEXT("Client is disposed."));
    bOutResult = false;

    try
    {
        std::unique_ptr<StringDictionary> dic(_pluginModule->CreateStringDictionary());
        LSUtility::ConvertTMapToStrDic(meta, dic.get());
        _client->UpdateTrackMeta(lsTrack->Get(), dic.get());
        bOutResult = true;
    }
    catch (SDKException& e)
    {
        OutSDKException = { e };
    }
    catch (std::exception& e)
    {
        OutSDKException = { e };
    }
}

void ULSClient::ChangeMediaRequirements(const FString& connectionId, ELSVideoRequirement videoRequirement, bool& bOutResult, FLSSDKException& OutSDKException)
{
    checkf(_client, TEXT("Client is disposed."));
    bOutResult = false;

    try
    {
        _client->ChangeMediaRequirements(TCHAR_TO_ANSI(*connectionId), (VideoRequirement)videoRequirement);
        bOutResult = true;
    }
    catch (SDKException& e)
    {
        OutSDKException = { e };
    }
    catch (std::exception& e)
    {
        OutSDKException = { e };
    }
}

void ULSClient::ChangeVideoSendBitrate(int maxBitrateKbps, bool& bOutResult, FLSSDKException& OutSDKException)
{
    checkf(_client, TEXT("Client is disposed."));
    bOutResult = false;

    try
    {
        _client->ChangeVideoSendBitrate(maxBitrateKbps);
        bOutResult = true;
    }
    catch (SDKException& e)
    {
        OutSDKException = { e };
    }
    catch (std::exception& e)
    {
        OutSDKException = { e };
    }
}

void ULSClient::SetEventListener(ULSClientListener* listener)
{
    checkf(_client, TEXT("Client is disposed."));
    _client->SetEventListener(listener->Get());
}

TMap<FString, ULSRTCStatsReport*> ULSClient::GetStats() const
{
    checkf(_client, TEXT("Client is disposed."));
    auto stats = _client->GetStats();
    return LSUtility::ConvertDicToTMap<ULSRTCStatsReport, RTCStatsReport>(stats);
}

void ULSClient::SetAudioInputDevice(const FString& deviceName)
{
    checkf(_client, TEXT("Client is disposed."));
    _client->SetAudioInputDevice(*deviceName);
}

void ULSClient::SetAudioOutputDevice(const FString& deviceName)
{
    checkf(_client, TEXT("Client is disposed."));
    _client->SetAudioOutputDevice(*deviceName);
}

void ULSClient::ReplaceMediaStreamTrack(ULSTrack* lsTrack, ULSMediaStreamTrack* mediaStreamTrack, bool& bOutResult, FLSSDKException& OutSDKException)
{
    checkf(_client, TEXT("Client is disposed."));
    bOutResult = false;

    try
    {
        _client->ReplaceMediaStreamTrack(lsTrack->Get(), mediaStreamTrack->Get());
        bOutResult = true;
    }
    catch (SDKException& e)
    {
        OutSDKException = { e };
    }
    catch (std::exception& e)
    {
        OutSDKException = { e };
    }
}

void ULSClient::ChangeMute(ULSTrack* lsTrack, ELSMuteType muteType, bool& bOutResult, FLSSDKException& OutSDKException)
{
    checkf(_client, TEXT("Client is disposed."));
    bOutResult = false;

    try
    {
        _client->ChangeMute(lsTrack->Get(), (MuteType)muteType);
        bOutResult = true;
    }
    catch (SDKException& e)
    {
        OutSDKException = { e };
    }
    catch (std::exception& e)
    {
        OutSDKException = { e };
    }
}

void ULSClient::ChangeVideoSendFramerate(double maxFramerate, bool& bOutResult, FLSSDKException& OutSDKException)
{
    checkf(_client, TEXT("Client is disposed."));
    bOutResult = false;

    try
    {
        _client->ChangeVideoSendFramerate(maxFramerate);
        bOutResult = true;
    }
    catch (SDKException& e)
    {
        OutSDKException = { e };
    }
    catch (std::exception& e)
    {
        OutSDKException = { e };
    }
}

void ULSClient::SetLibWebrtcLogOption(ULSLibWebrtcLogOption* option, bool& bOutResult, FLSSDKException& OutSDKException)
{
    checkf(_client, TEXT("Client is disposed."));
    bOutResult = false;

    try
    {
        _client->SetLibWebrtcLogOption(option->Get());
        bOutResult = true;
    }
    catch (SDKException& e)
    {
        OutSDKException = { e };
    }
    catch (std::exception& e)
    {
        OutSDKException = { e };
    }
}
