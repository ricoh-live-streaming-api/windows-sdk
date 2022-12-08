// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSClosingEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSClosingEvent : public UObject
{
    GENERATED_BODY()

public:
    LSClosingEvent* Get() const;
    void Set(LSClosingEvent* lsClosingEvent);

private:
    LSClosingEvent* _lsClosingEvent = nullptr;
};
