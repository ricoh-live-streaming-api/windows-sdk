// Copyright 2023 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSConnectionsVideoStatus.h"
#include "UObject/NoExportTypes.h"
#include "LSConnectionsStatus.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSConnectionsStatus : public UObject
{
    GENERATED_BODY()

public:
    ULSConnectionsStatus();
    ConnectionsStatus* Get() const;
    void Set(ConnectionsStatus* connectionsStatus);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSConnectionsStatus")
    ULSConnectionsVideoStatus* GetConnectionsVideoStatus() const;

private:
    ConnectionsStatus* _connectionsStatus = nullptr;

    UPROPERTY()
    ULSConnectionsVideoStatus* _connectionsVideoStatus = nullptr;
};
