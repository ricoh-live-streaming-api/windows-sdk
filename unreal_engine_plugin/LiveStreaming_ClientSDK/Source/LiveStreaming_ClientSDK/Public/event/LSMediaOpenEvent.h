// Copyright 2024 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSMediaOpenEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class ULSMediaOpenEvent : public UObject
{
    GENERATED_BODY()

public:
    LSMediaOpenEvent* Get() const;
    void Set(LSMediaOpenEvent* lsMediaOpenEvent);

private:
    LSMediaOpenEvent* _lsMediaOpenEvent = nullptr;
};
