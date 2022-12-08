// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSCloseEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSCloseEvent : public UObject
{
    GENERATED_BODY()

public:
    LSCloseEvent* Get() const;
    void Set(LSCloseEvent* lsCloseEvent);

private:
    LSCloseEvent* _lsCloseEvent = nullptr;
};
