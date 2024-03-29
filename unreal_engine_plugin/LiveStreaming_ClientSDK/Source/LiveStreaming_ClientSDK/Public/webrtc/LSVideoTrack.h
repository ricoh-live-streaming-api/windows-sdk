// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "LSMediaStreamTrack.h"
#include "LSVideoTrack.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFrameSizeChangedDelegate, FString, trackId, int, width, int, height);

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSVideoTrack : public ULSMediaStreamTrack
{
    GENERATED_BODY()

public:
    VideoTrack* Get() const;
    void Set(VideoTrack* videoTrack);
    void FrameSizeChange(const FString& id, int width, int height);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoTrack")
    void AddSink();

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoTrack")
    void RemoveSink();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoTrack")
    bool GetFrameResolution(int& OutWidth, int& OutHeight);
 
    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoTrack")
    FOnFrameSizeChangedDelegate OnFrameSizeChangedDelegate;

private:
    class VideoTrackListener : public VideoTrack::IListener
    {
    public:
        VideoTrackListener(ULSVideoTrack* parent) : _parent(parent) {};

        void OnFrameSizeChanged(const char* id, int width, int height) override
        {
            _parent->FrameSizeChange(FString(id), width, height);
        };

    private:
        ULSVideoTrack* _parent;
    };

    VideoTrack* _videoTrack = nullptr;
    TUniquePtr<VideoTrackListener> _videoTrackListener;
};
