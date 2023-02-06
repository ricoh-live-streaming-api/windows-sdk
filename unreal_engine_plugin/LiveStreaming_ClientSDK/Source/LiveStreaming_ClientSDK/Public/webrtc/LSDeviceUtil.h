// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSDeviceInfo.h"
#include "LSVideoCapturerDeviceCapability.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LSDeviceUtil.generated.h"

UCLASS()
class LIVESTREAMING_CLIENTSDK_API ULSDeviceUtil : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = LiveStreaming_ClientSDK)
    static TArray<ULSDeviceInfo*> GetAudioInputDeviceList();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = LiveStreaming_ClientSDK)
    static TArray<ULSDeviceInfo*> GetAudioOutputDeviceList();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = LiveStreaming_ClientSDK)
    static TArray<ULSDeviceInfo*> GetVideoCapturerDeviceList();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = LiveStreaming_ClientSDK)
    static TArray<ULSVideoCapturerDeviceCapability*> GetVideoCapturerDeviceCapabilities(const FString& deviceName);

private:
    static FLiveStreaming_ClientSDKModule* GetPluginModule();
};
