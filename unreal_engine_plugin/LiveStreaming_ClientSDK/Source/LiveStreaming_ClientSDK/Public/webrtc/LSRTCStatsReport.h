// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSRTCStats.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSRTCStatsReport.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSRTCStatsReport : public UObject
{
    GENERATED_BODY()

public:
    RTCStatsReport* Get() const;
    void Set(RTCStatsReport* rtcStatsReport);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    int64 GetTimestampUs() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    TMap<FString, ULSRTCStats*> GetStats() const;

private:
    RTCStatsReport* _rtcStatsReport = nullptr;
    TMap<FString, ULSRTCStats*> _stats;
};
