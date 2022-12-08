// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSErrorDetail.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSSDKErrorEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSSDKErrorEvent : public UObject
{
    GENERATED_BODY()

public:
    ULSSDKErrorEvent();
    SDKErrorEvent* Get() const;
    void Set(SDKErrorEvent* sdkErrorEvent);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ULSErrorDetail* GetDetail() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    FString ToReportString() const;

private:
    SDKErrorEvent* _sdkErrorEvent = nullptr;

    UPROPERTY()
    ULSErrorDetail* _lsErrorDetail = nullptr;
};
