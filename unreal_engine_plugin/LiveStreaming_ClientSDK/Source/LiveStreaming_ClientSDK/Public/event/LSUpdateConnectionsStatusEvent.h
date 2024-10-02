// Copyright 2023 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "LSConnectionsStatus.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSUpdateConnectionsStatusEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSUpdateConnectionsStatusEvent : public UObject
{
    GENERATED_BODY()

public:
    ULSUpdateConnectionsStatusEvent();
    LSUpdateConnectionsStatusEvent* Get() const;
    void Set(LSUpdateConnectionsStatusEvent* lsUpdateConnectionsStatusEvent);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSUpdateConnectionsStatusEvent")
    ULSConnectionsStatus* GetConnectionsStatus() const;

private:
    LSUpdateConnectionsStatusEvent* _lsUpdateConnectionsStatusEvent = nullptr;

    UPROPERTY()
    ULSConnectionsStatus* _connectionsStatus = nullptr;
};
