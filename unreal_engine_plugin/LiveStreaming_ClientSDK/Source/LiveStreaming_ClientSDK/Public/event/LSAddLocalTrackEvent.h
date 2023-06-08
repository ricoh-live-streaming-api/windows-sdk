// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "LSMediaStream.h"
#include "LSMediaStreamTrack.h"
#include "UObject/NoExportTypes.h"
#include "LSAddLocalTrackEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSAddLocalTrackEvent : public UObject
{
    GENERATED_BODY()

public:
    ULSAddLocalTrackEvent();
    LSAddLocalTrackEvent* Get() const;
    void Set(LSAddLocalTrackEvent* lsAddLocalTrackEvent);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSAddLocalTrackEvent")
    ULSMediaStreamTrack* GetMediaStreamTrack() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSAddLocalTrackEvent")
    ULSMediaStream* GetMediaStream() const;

private:
    LSAddLocalTrackEvent* _lsAddLocalTrackEvent = nullptr;

    UPROPERTY()
    ULSMediaStreamTrack* _mediaStreamTrack = nullptr;

    UPROPERTY()
    ULSMediaStream* _mediaStream = nullptr;
};
