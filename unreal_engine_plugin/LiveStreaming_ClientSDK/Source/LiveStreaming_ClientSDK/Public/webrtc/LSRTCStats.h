// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSRTCStats.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSRTCStats : public UObject
{
    GENERATED_BODY()

public:
    RTCStats* Get() const;
    void Set(RTCStats* rtcStats);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSRTCStats")
    int64 GetTimestampUs() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSRTCStats")
    FString GetType() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSRTCStats")
    FString GetId() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSRTCStats")
    TMap<FString, FString> GetMembers() const;

private:
    RTCStats* _rtcStats = nullptr;
    TMap<FString, FString> _members;
};
