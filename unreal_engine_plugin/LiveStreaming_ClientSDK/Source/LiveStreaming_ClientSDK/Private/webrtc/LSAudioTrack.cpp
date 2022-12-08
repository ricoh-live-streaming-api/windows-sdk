// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSAudioTrack.h"

AudioTrack* ULSAudioTrack::Get() const
{
    return _audioTrack;
}

void ULSAudioTrack::Set(AudioTrack* audioTrack)
{
    _mediaStreamTrack = audioTrack;
    _audioTrack = audioTrack;
}

void ULSAudioTrack::SetVolume(double volume)
{
    if (_audioTrack)
    {
        _audioTrack->SetVolume(volume);
    }
}
