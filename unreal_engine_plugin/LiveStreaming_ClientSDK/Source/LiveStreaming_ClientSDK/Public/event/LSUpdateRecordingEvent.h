// Copyright 2024 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "LSRecordingStatus.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSUpdateRecordingEvent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSUpdateRecordingEvent : public UObject
{
    GENERATED_BODY()

public:
    ULSUpdateRecordingEvent();
    LSUpdateRecordingEvent* Get() const;
    void Set(LSUpdateRecordingEvent* lsUpdateRecordingEvent);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSUpdateRecordingEvent")
    ULSRecordingStatus* GetRecordingStatus() const;

private:
    LSUpdateRecordingEvent* _lsUpdateRecordingEvent = nullptr;

    UPROPERTY()
    ULSRecordingStatus* _recordingStatus = nullptr;
};
