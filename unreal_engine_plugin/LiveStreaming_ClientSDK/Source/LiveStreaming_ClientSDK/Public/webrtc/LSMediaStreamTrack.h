// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSMediaStreamTrack.generated.h"

UENUM(BlueprintType)
enum class ELSTrackType : uint8
{
    Video,
    Audio
};

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSMediaStreamTrack : public UObject
{
    GENERATED_BODY()

public:
    MediaStreamTrack* Get() const;
    void Set(MediaStreamTrack* mediaStreamTrack);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSMediaStreamTrack")
    bool SetEnabled(bool bEnabled = true);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSMediaStreamTrack")
    void Dispose();

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSMediaStreamTrack")
    ELSTrackType GetType() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSMediaStreamTrack")
    FString GetId() const;

protected:
    MediaStreamTrack* _mediaStreamTrack = nullptr;
};
