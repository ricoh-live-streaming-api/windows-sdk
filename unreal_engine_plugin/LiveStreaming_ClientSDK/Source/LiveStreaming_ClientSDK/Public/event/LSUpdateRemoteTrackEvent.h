// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LSMediaStreamTrackEventBase.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSUpdateRemoteTrackEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSUpdateRemoteTrackEvent : public ULSMediaStreamTrackEventBase
{
    GENERATED_BODY()

public:
    LSUpdateRemoteTrackEvent* Get() const;
    void Set(LSUpdateRemoteTrackEvent* lsUpdateRemoteTrackEvent);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSUpdateRemoteTrackEvent")
    TMap<FString, FString> GetMetadata() const;

private:
    LSUpdateRemoteTrackEvent* _lsUpdateRemoteTrackEvent = nullptr;
    TMap<FString, FString> _metadata;
};
