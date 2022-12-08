// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSClient.h"
#include "LSUtility.h"
#include "LSLogger.h"

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

ULSMediaStream* ULSClient::GetUserMedia(ULSMediaStreamConstraints* constrants)
{
    auto mediaStream = NewObject<ULSMediaStream>();
    try
    {
        mediaStream->Set(_client->GetUserMedia(constrants->Get()));
    }
    catch (SDKException& e)
    {
        ULSLogger::Error(TEXT("Failed to GetUserMedia.\n") + FString(e.ToReportString()));
    }
    return mediaStream;
}

void ULSClient::Connect(const FString& clientId, const FString& accessToken, ULSOption* option)
{
    if (_client)
    {
        try
        {
            _client->Connect(TCHAR_TO_ANSI(*clientId), TCHAR_TO_ANSI(*accessToken), option->Get());
        }
        catch (SDKException& e)
        {
            ULSLogger::Error(TEXT("Failed to Connect.\n") + FString(e.ToReportString()));
        }
        catch (std::exception e)
        {
            ULSLogger::Error(TEXT("Failed to Connect.\n") + FString(e.what()));
        }
    }
}

void ULSClient::Disconnect()
{
    if (_client)
    {
        _client->Disconnect();
    }
}

ELSConnectionState ULSClient::GetState() const
{
    return (ELSConnectionState)_client->GetState();
}

void ULSClient::UpdateMeta(const TMap<FString, FString>& meta)
{
    if (_client)
    {
        std::unique_ptr<StringDictionary> dic(_pluginModule->CreateStringDictionary());
        LSUtility::ConvertTMapToStrDic(meta, dic.get());
        _client->UpdateMeta(dic.get());
    }
}

void ULSClient::UpdateTrackMeta(ULSTrack* lsTrack, const TMap<FString, FString>& meta)
{
    if (_client)
    {
        std::unique_ptr<StringDictionary> dic(_pluginModule->CreateStringDictionary());
        LSUtility::ConvertTMapToStrDic(meta, dic.get());
        _client->UpdateTrackMeta(lsTrack->Get(), dic.get());
    }
}

void ULSClient::ChangeMediaRequirements(const FString& connectionId, ELSVideoRequirement videoRequirement)
{
    if (_client)
    {
        _client->ChangeMediaRequirements(TCHAR_TO_ANSI(*connectionId), (VideoRequirement)videoRequirement);
    }
}

void ULSClient::ChangeVideoSendBitrate(int maxBitrateKbps)
{
    if (_client)
    {
        _client->ChangeVideoSendBitrate(maxBitrateKbps);
    }
}

void ULSClient::SetEventListener(ULSClientListener* listener)
{
    if (_client)
    {
        _client->SetEventListener(listener->Get());
    }
}

TMap<FString, ULSRTCStatsReport*> ULSClient::GetStats() const
{
    auto stats = _client->GetStats();
    return LSUtility::ConvertDicToTMap<ULSRTCStatsReport, RTCStatsReport>(stats);
}

void ULSClient::SetAudioInputDevice(const FString& deviceName)
{
    if (_client)
    {
        _client->SetAudioInputDevice(*deviceName);
    }
}

void ULSClient::SetAudioOutputDevice(const FString& deviceName)
{
    if (_client)
    {
        _client->SetAudioOutputDevice(*deviceName);
    }
}

void ULSClient::ReplaceMediaStreamTrack(ULSTrack* lsTrack, ULSMediaStreamTrack* mediaStreamTrack)
{
    if (_client)
    {
        try
        {
            _client->ReplaceMediaStreamTrack(lsTrack->Get(), mediaStreamTrack->Get());
        }
        catch (SDKException& e)
        {
            ULSLogger::Error(TEXT("Failed to ReplaceMediaStreamTrack.\n") + FString(e.ToReportString()));
        }
        catch (std::exception e)
        {
            ULSLogger::Error(TEXT("Failed to ReplaceMediaStreamTrack.\n") + FString(e.what()));
        }
    }
}

void ULSClient::ChangeMute(ULSTrack* lsTrack, ELSMuteType muteType)
{
    if (_client)
    {
        _client->ChangeMute(lsTrack->Get(), (MuteType)muteType);
    }
}

void ULSClient::ChangeVideoSendFramerate(double maxFramerate)
{
    if (_client)
    {
        _client->ChangeVideoSendFramerate(maxFramerate);
    }
}
