// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSAddLocalTrackEvent.h"

ULSAddLocalTrackEvent::ULSAddLocalTrackEvent()
{
    _mediaStreamTrack = NewObject<ULSMediaStreamTrack>();
    _mediaStream = NewObject<ULSMediaStream>();
}

LSAddLocalTrackEvent* ULSAddLocalTrackEvent::Get() const
{
    return _lsAddLocalTrackEvent;
}

void ULSAddLocalTrackEvent::Set(LSAddLocalTrackEvent* lsAddLocalTrackEvent)
{
    if (lsAddLocalTrackEvent)
    {
        _lsAddLocalTrackEvent = lsAddLocalTrackEvent;
        _mediaStreamTrack->Set(_lsAddLocalTrackEvent->get_MediaStreamTrack());
        _mediaStream->Set(_lsAddLocalTrackEvent->get_MediaStream());
    }
}

ULSMediaStreamTrack* ULSAddLocalTrackEvent::GetMediaStreamTrack() const
{
    return _mediaStreamTrack;
}

ULSMediaStream* ULSAddLocalTrackEvent::GetMediaStream() const
{
    return _mediaStream;
}
