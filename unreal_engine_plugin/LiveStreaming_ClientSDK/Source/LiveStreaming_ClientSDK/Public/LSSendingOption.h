// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include <memory>
#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "LSSendingVideoOption.h"
#include "UObject/NoExportTypes.h"
#include "LSSendingOption.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSSendingOption : public UObject
{
    GENERATED_BODY()

public:
    ULSSendingOption();
    SendingOption* Get() const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Sending Option"), Category = "RICOH Live Streaming Client SDK for Windows | LSSendingOption")
    ULSSendingOption* Create(ULSSendingVideoOption* sendingVideoOption, bool bEnabled = true);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSSendingOption")
    ULSSendingVideoOption* GetVideo() const;

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<SendingOption> _sendingOption;

    UPROPERTY()
    ULSSendingVideoOption* _sendingVideoOption = nullptr;
};
