// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include <memory>
#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSReceivingOption.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSReceivingOption : public UObject
{
    GENERATED_BODY()

public:
    ULSReceivingOption();
    ReceivingOption* Get() const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Receiving Option"), Category = "RICOH Live Streaming Client SDK for Windows | LSReceivingOption")
    ULSReceivingOption* Create(bool bEnabled = true);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSReceivingOption")
    bool GetEnabled() const;

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<ReceivingOption> _receivingOption;
};
