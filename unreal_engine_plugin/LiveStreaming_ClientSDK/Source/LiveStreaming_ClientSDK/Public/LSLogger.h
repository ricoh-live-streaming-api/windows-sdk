// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSLogger.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSLogger : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "LogDebug"), Category = LiveStreaming_ClientSDK)
    static void Debug(FString message);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "LogInfo"), Category = LiveStreaming_ClientSDK)
    static void Info(FString message);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "LogWarn"), Category = LiveStreaming_ClientSDK)
    static void Warn(FString message);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "LogError"), Category = LiveStreaming_ClientSDK)
    static void Error(FString message);

private:
    static FLiveStreaming_ClientSDKModule* GetPluginModule();
};
