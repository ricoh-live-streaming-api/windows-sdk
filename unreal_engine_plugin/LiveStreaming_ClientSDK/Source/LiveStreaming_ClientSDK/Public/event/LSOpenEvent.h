// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "LSConnectionsStatus.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSOpenEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSOpenEvent : public UObject
{
    GENERATED_BODY()

public:
    ULSOpenEvent();
    LSOpenEvent* Get() const;
    void Set(LSOpenEvent* lsOpenEvent);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOpenEvent")
    FString GetAccessTokenJson() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOpenEvent")
    ULSConnectionsStatus* GetConnectionsStatus() const;

private:
    LSOpenEvent* _lsOpenEvent = nullptr;

    UPROPERTY()
    ULSConnectionsStatus* _connectionsStatus = nullptr;
};
