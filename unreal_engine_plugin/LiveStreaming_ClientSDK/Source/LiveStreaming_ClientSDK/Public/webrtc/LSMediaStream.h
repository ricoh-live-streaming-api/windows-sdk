// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSAudioTrack.h"
#include "LSVideoTrack.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSMediaStream.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSMediaStream : public UObject
{
    GENERATED_BODY()

public:
    MediaStream* Get() const;
    void Set(MediaStream* mediaStream);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    FString GetId() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void Dispose();

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    TArray<ULSAudioTrack*> GetAudioTracks() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    TArray<ULSVideoTrack*> GetVideoTracks() const;

private:
    template<class TTarget, class TSource>
    TArray<TTarget*> ConvertTracks(List<TSource*>* sourceTracks);

    MediaStream* _mediaStream = nullptr;
    TArray<ULSAudioTrack*> _audioTracks;
    TArray<ULSVideoTrack*> _videoTracks;
};
