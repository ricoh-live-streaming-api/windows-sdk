// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSConnectingEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSConnectingEvent : public UObject
{
    GENERATED_BODY()

public:
    LSConnectingEvent* Get() const;
    void Set(LSConnectingEvent* lsConnectingEvent);

private:
    LSConnectingEvent* _lsConnectingEvent = nullptr;
};
