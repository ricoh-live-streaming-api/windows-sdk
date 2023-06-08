// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSVideoCapturerDeviceCapability.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSVideoCapturerDeviceCapability : public UObject
{
    GENERATED_BODY()

public:
    VideoCapturerDeviceCapability* Get() const;
    void Set(VideoCapturerDeviceCapability* videoCapturerDeviceCapability);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoCapturerDeviceCapability")
    int GetWidth() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoCapturerDeviceCapability")
    int GetHeight() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoCapturerDeviceCapability")
    int GetFrameRate() const;

private:
    VideoCapturerDeviceCapability* _videoCapturerDeviceCapability = nullptr;
};
