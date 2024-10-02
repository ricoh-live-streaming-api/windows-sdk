// Copyright 2023 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "UObject/NoExportTypes.h"
#include "LSConnectionsVideoStatus.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSConnectionsVideoStatus : public UObject
{
    GENERATED_BODY()

public:
    ConnectionsVideoStatus* Get() const;
    void Set(ConnectionsVideoStatus* connectionsVideoStatus);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSConnectionsVideoStatus")
    bool GetReceiverExistence() const;

private:
    ConnectionsVideoStatus* _connectionsVideoStatus = nullptr;
};
