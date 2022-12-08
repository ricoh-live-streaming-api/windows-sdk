// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSTrack.h"
#include "LSUtility.h"

ULSTrack::ULSTrack()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
    _mediaStreamTrack = NewObject<ULSMediaStreamTrack>();
    _mediaStream = NewObject<ULSMediaStream>();
}

LSTrack* ULSTrack::Get() const
{
    return _lsTrack.get();
}

void ULSTrack::Set(LSTrack* lsTrack)
{
    if (lsTrack)
    {
        _lsTrack.reset(lsTrack);
        _mediaStreamTrack->Set(_lsTrack->get_MediaStreamTrack());
        _mediaStream->Set(_lsTrack->get_MediaStream());
        _metadata = LSUtility::ConvertStrDicToTMap(_lsTrack->get_Metadata());
    }
}

ULSTrack* ULSTrack::Create(ULSMediaStreamTrack* mediaStreamTrack, ULSMediaStream* mediaStream, ULSTrackOption* trackOption)
{
    if (!_lsTrack)
    {
        _lsTrack.reset(_pluginModule->CreateLSTrack(mediaStreamTrack->Get(), mediaStream->Get(), trackOption->Get()));
        _mediaStreamTrack = mediaStreamTrack;
        _mediaStream = mediaStream;
        _metadata = trackOption->GetMetadata();
    }
    return this;
}

ULSMediaStreamTrack* ULSTrack::GetMediaStreamTrack() const
{
    return _mediaStreamTrack;
}

ULSMediaStream* ULSTrack::GetMediaStream() const
{
    return _mediaStream;
}

TMap<FString, FString> ULSTrack::GetMetadata() const
{
    return _metadata;
}

ELSMuteType ULSTrack::GetMuteType() const
{
    return (ELSMuteType)_lsTrack->get_MuteType();
}
