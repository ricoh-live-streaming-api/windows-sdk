// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSDeviceInfo.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSDeviceInfo : public UObject
{
    GENERATED_BODY()

public:
    DeviceInfo* Get() const;
    void Set(DeviceInfo* deviceInfo);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSDeviceInfo")
    FString GetDeviceName() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSDeviceInfo")
    FString GetUniqueName() const;

private:
    DeviceInfo* _deviceInfo = nullptr;
};
