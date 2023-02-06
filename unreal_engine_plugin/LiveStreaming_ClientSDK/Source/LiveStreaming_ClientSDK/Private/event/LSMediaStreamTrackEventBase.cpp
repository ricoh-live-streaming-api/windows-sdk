// Copyright 2022 RICOH Company, Ltd. All rights reserved.


#include "LSMediaStreamTrackEventBase.h"

ULSMediaStreamTrackEventBase::ULSMediaStreamTrackEventBase()
{
    _mediaStreamTrack = NewObject<ULSMediaStreamTrack>();
    _mediaStream = NewObject<ULSMediaStream>();
}

FString ULSMediaStreamTrackEventBase::GetConnectionId() const
{
    return _connectionId;
}

ULSMediaStreamTrack* ULSMediaStreamTrackEventBase::GetMediaStreamTrack() const
{
    return _mediaStreamTrack;
}

ULSMediaStream* ULSMediaStreamTrackEventBase::GetMediaStream() const
{
    return _mediaStream;
}

ULSVideoTrack* ULSMediaStreamTrackEventBase::GetVideoTrack() const
{
    ULSVideoTrack* videoTrack = nullptr;

    if (_mediaStreamTrack->GetType() == ELSTrackType::Video)
    {
        auto track = static_cast<VideoTrack*>(_mediaStreamTrack->Get());
        if (track)
        {
            videoTrack = NewObject<ULSVideoTrack>();
            videoTrack->Set(track);
        }
    }

    return videoTrack;
}

ULSAudioTrack* ULSMediaStreamTrackEventBase::GetAudioTrack() const
{
    ULSAudioTrack* audioTrack = nullptr;

    if (_mediaStreamTrack->GetType() == ELSTrackType::Audio)
    {
        auto track = static_cast<AudioTrack*>(_mediaStreamTrack->Get());
        if (track)
        {
            audioTrack = NewObject<ULSAudioTrack>();
            audioTrack->Set(track);
        }
    }

    return audioTrack;
}

