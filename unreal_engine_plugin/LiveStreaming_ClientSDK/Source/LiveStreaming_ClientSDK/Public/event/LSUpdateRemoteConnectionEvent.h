// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSUpdateRemoteConnectionEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSUpdateRemoteConnectionEvent : public UObject
{
    GENERATED_BODY()

public:
    LSUpdateRemoteConnectionEvent* Get() const;
    void Set(LSUpdateRemoteConnectionEvent* lsUpdateRemoteConnectionEvent);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSUpdateRemoteConnectionEvent")
    FString GetConnectionId() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSUpdateRemoteConnectionEvent")
    TMap<FString, FString> GetMetadata() const;

private:
    LSUpdateRemoteConnectionEvent* _lsUpdateRemoteConnectionEvent = nullptr;
    TMap<FString, FString> _metadata;
};
