// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSEnumDefine.h"
#include "LSMediaStream.h"
#include "LSMediaStreamTrack.h"
#include "LSVideoTrack.h"
#include "LSAudioTrack.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSMediaStreamTrackEventBase.generated.h"

UCLASS()
class LIVESTREAMING_CLIENTSDK_API ULSMediaStreamTrackEventBase : public UObject
{
    GENERATED_BODY()

public:
    ULSMediaStreamTrackEventBase();

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    virtual FString GetConnectionId() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    virtual ULSMediaStreamTrack* GetMediaStreamTrack() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    virtual ULSMediaStream* GetMediaStream() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    virtual ULSVideoTrack* GetVideoTrack() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    virtual ULSAudioTrack* GetAudioTrack() const;

protected:
    FString _connectionId = "";

    UPROPERTY()
    ULSMediaStreamTrack* _mediaStreamTrack = nullptr;

    UPROPERTY()
    ULSMediaStream* _mediaStream = nullptr;

protected:
    template<class TEvent>
    void Set(TEvent* mediaStreamTrackEvent)
    {
        if (mediaStreamTrackEvent)
        {
            _connectionId = FString(mediaStreamTrackEvent->get_ConnectionId());
            _mediaStreamTrack->Set(mediaStreamTrackEvent->get_MediaStreamTrack());
            _mediaStream->Set(mediaStreamTrackEvent->get_MediaStream());
        }
    }
};
