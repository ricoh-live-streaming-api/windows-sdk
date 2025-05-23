// Copyright 2024 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "UObject/NoExportTypes.h"
#include "LSRecordingStatus.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSRecordingStatus : public UObject
{
    GENERATED_BODY()

public:
    RecordingStatus* Get() const;
    void Set(RecordingStatus* RecordingStatus);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSRecordingStatus")
    bool GetInRecording() const;

private:
    RecordingStatus* _recordingStatus = nullptr;
};
