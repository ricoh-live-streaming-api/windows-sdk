// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSMediaStreamTrack.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSRemoveRemoteConnectionEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSRemoveRemoteConnectionEvent : public UObject
{
    GENERATED_BODY()

public:
    LSRemoveRemoteConnectionEvent* Get() const;
    void Set(LSRemoveRemoteConnectionEvent* lsRemoveRemoteConnectionEvent);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    FString GetConnectionId() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    TArray<ULSMediaStreamTrack*> GetMediaStreamTracks() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    TMap<FString, FString> GetMetadata() const;

private:
    LSRemoveRemoteConnectionEvent* _lsRemoveRemoteConnectionEvent = nullptr;
    TArray<ULSMediaStreamTrack*> _mediaStreamTracks;
    TMap<FString, FString> _metadata;
};
