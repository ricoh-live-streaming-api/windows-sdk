// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSMediaStreamTrack.h"

MediaStreamTrack* ULSMediaStreamTrack::Get() const
{
    return _mediaStreamTrack;
}

void ULSMediaStreamTrack::Set(MediaStreamTrack* mediaStreamTrack)
{
    _mediaStreamTrack = mediaStreamTrack;
}

bool ULSMediaStreamTrack::SetEnabled(bool bEnabled)
{
    return _mediaStreamTrack ? _mediaStreamTrack->SetEnabled(bEnabled) : false;
}

void ULSMediaStreamTrack::Dispose()
{
    if (_mediaStreamTrack)
    {
        _mediaStreamTrack->Dispose();
    }
}

ELSTrackType ULSMediaStreamTrack::GetType() const
{
    return (ELSTrackType)_mediaStreamTrack->get_Type();
}

FString ULSMediaStreamTrack::GetId() const
{
    return _mediaStreamTrack ? FString(_mediaStreamTrack->get_Id()) : "";
}
