// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSEnumDefine.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSChangeStabilityEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSChangeStabilityEvent : public UObject
{
    GENERATED_BODY()

public:
    LSChangeStabilityEvent* Get() const;
    void Set(LSChangeStabilityEvent* lsChangeStabilityEvent);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSChangeStabilityEvent")
    FString GetConnectionId() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSChangeStabilityEvent")
    ELSStability GetStability() const;

private:
    LSChangeStabilityEvent* _lsChangeStabilityEvent = nullptr;
};
