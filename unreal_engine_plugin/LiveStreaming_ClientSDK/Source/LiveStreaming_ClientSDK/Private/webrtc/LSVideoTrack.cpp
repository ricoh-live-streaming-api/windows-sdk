// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSVideoTrack.h"
#include "Async/Async.h"

VideoTrack* ULSVideoTrack::Get() const
{
    return _videoTrack;
}

void ULSVideoTrack::Set(VideoTrack* videoTrack)
{
    if (videoTrack)
    {
        _mediaStreamTrack = videoTrack;
        _videoTrack = videoTrack;
        _videoTrackListener = MakeUnique<VideoTrackListener>(this);
        _videoTrack->SetEventListener(_videoTrackListener.Get());
    }
}

void ULSVideoTrack::FrameSizeChange(const FString& trackId, int width, int height)
{
    AsyncTask(ENamedThreads::GameThread,
        [this, trackId, width, height]()
        {
            OnFrameSizeChangedDelegate.Broadcast(FString(trackId), width, height);
        });
}

void ULSVideoTrack::AddSink()
{
    if (_videoTrack)
    {
        _videoTrack->AddSink();
    }
}

void ULSVideoTrack::RemoveSink()
{
    if (_videoTrack)
    {
        _videoTrack->RemoveSink();
    }
}

bool ULSVideoTrack::GetFrameResolution(int& OutWidth, int& OutHeight)
{
    return _videoTrack ? _videoTrack->GetFrameResolution(OutWidth, OutHeight) : false;
}
