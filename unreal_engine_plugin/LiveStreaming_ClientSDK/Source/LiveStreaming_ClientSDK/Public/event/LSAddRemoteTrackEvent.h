// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LSMediaStreamTrackEventBase.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSAddRemoteTrackEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSAddRemoteTrackEvent : public ULSMediaStreamTrackEventBase
{
    GENERATED_BODY()

public:
    LSAddRemoteTrackEvent* Get() const;
    void Set(LSAddRemoteTrackEvent* lsAddRemoteTrackEvent);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSAddRemoteTrackEvent")
    TMap<FString, FString> GetMetadata() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSAddRemoteTrackEvent")
    ELSMuteType GetMuteType() const;

private:
    LSAddRemoteTrackEvent* _lsAddRemoteTrackEvent = nullptr;
    TMap<FString, FString> _metadata;
};
