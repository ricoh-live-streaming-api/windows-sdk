// Copyright 2023 RICOH Company, Ltd. All rights reserved.

#pragma once

#include <memory>
#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSProxyOption.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSProxyOption : public UObject
{
    GENERATED_BODY()

public:
    ULSProxyOption();
    ProxyOption* Get() const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Proxy Option"), Category = "RICOH Live Streaming Client SDK for Windows | LSProxyOption")
    ULSProxyOption* Create(const FString& url);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSProxyOption")
    FString GetURL() const;

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<ProxyOption> _proxyOption;
};
