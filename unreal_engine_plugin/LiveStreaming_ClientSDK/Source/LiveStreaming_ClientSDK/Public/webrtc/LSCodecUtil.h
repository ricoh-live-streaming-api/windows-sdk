// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSCodecUtil.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSCodecUtil : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "RICOH Live Streaming Client SDK for Windows | LSCodecUtil")
    static bool IsH264Supported();

private:
    static FLiveStreaming_ClientSDKModule* GetPluginModule();
};
