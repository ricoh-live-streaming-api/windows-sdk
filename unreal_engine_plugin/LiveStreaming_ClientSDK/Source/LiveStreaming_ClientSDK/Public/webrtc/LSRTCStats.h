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

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    int64 GetTimestampUs() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    FString GetType() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    FString GetId() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    TMap<FString, FString> GetMembers() const;

private:
    RTCStats* _rtcStats = nullptr;
    TMap<FString, FString> _members;
};
