// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSAddRemoteConnectionEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSAddRemoteConnectionEvent : public UObject
{
    GENERATED_BODY()

public:
    LSAddRemoteConnectionEvent* Get() const;
    void Set(LSAddRemoteConnectionEvent* lsAddRemoteConnectionEvent);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    FString GetConnectionId() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    TMap<FString, FString> GetMetadata() const;

private:
    LSAddRemoteConnectionEvent* _lsAddRemoteConnectionEvent = nullptr;
    TMap<FString, FString> _metadata;
};
