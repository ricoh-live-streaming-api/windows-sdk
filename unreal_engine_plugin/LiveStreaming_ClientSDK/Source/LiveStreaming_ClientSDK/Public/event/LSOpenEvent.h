// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSOpenEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSOpenEvent : public UObject
{
    GENERATED_BODY()

public:
    LSOpenEvent* Get() const;
    void Set(LSOpenEvent* lsOpenEvent);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    FString GetAccessTokenJson() const;

private:
    LSOpenEvent* _lsOpenEvent = nullptr;
};
