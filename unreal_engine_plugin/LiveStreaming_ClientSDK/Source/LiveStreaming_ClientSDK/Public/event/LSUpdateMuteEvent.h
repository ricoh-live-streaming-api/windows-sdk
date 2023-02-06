// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LSMediaStreamTrackEventBase.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSUpdateMuteEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSUpdateMuteEvent : public ULSMediaStreamTrackEventBase
{
    GENERATED_BODY()

public:
    LSUpdateMuteEvent* Get() const;
    void Set(LSUpdateMuteEvent* lsUpdateMuteEvent);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ELSMuteType GetMuteType() const;

private:
    LSUpdateMuteEvent* _lsUpdateMuteEvent = nullptr;
};
