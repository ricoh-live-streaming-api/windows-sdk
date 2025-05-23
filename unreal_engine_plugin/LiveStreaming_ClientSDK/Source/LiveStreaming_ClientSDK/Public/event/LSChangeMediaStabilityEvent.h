// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSEnumDefine.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSChangeMediaStabilityEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSChangeMediaStabilityEvent : public UObject
{
    GENERATED_BODY()

public:
    LSChangeMediaStabilityEvent* Get() const;
    void Set(LSChangeMediaStabilityEvent* lsChangeMediaStabilityEvent);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSChangeMediaStabilityEvent")
    FString GetConnectionId() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSChangeMediaStabilityEvent")
    ELSStability GetStability() const;

private:
    LSChangeMediaStabilityEvent* _lsChangeMediaStabilityEvent = nullptr;
};
