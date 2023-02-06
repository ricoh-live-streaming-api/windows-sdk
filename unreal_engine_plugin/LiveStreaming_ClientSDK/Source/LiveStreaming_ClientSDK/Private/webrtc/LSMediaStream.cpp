// Copyright 2022 RICOH Company, Ltd. All rights reserved.


#include "LSMediaStream.h"

MediaStream* ULSMediaStream::Get() const
{
    return _mediaStream;
}

void ULSMediaStream::Set(MediaStream* mediaStream)
{
    _mediaStream = mediaStream;
    _audioTracks.Empty();
    _videoTracks.Empty();

    if (_mediaStream)
    {
        _audioTracks = ConvertTracks<ULSAudioTrack, AudioTrack>(_mediaStream->GetAudioTracks());
        _videoTracks = ConvertTracks<ULSVideoTrack, VideoTrack>(_mediaStream->GetVideoTracks());
    }
}

FString ULSMediaStream::GetId() const
{
    return _mediaStream ? FString(_mediaStream->get_Id()) : "";
}

void ULSMediaStream::Dispose()
{
    if (_mediaStream)
    {
        _mediaStream->Dispose();
    }
}

TArray<ULSAudioTrack*> ULSMediaStream::GetAudioTracks() const
{
    return _audioTracks;
}

TArray<ULSVideoTrack*> ULSMediaStream::GetVideoTracks() const
{
    return _videoTracks;
}

template<class TTarget, class TSource>
TArray<TTarget*> ULSMediaStream::ConvertTracks(List<TSource*>* sourceTracks)
{
    TArray<TTarget*> targetTracks;

    for (int i = 0; i < sourceTracks->Count(); i++)
    {
        TTarget* track = NewObject<TTarget>();
        track->Set(sourceTracks->Get(i));
        targetTracks.Add(track);
    }

    return targetTracks;
}
