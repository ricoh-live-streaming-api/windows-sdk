// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include <memory>
#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSEnumDefine.h"
#include "LSTrack.h"
#include "LSSendingOption.h"
#include "LSReceivingOption.h"
#include "LSProxyOption.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSOption.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSOption : public UObject
{
    GENERATED_BODY()

public:
    ULSOption();
    Option* Get() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    FString GetSignalingURL() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    TArray<ULSTrack*> GetLocalLSTracks() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    TMap<FString, FString> GetMetadata() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    bool GetEnableCpuOveruseDetection() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSSendingOption* GetSendingOption() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSReceivingOption* GetReceivingOption() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ELSIceTransportPolicy GetIceTransportPolicy() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ELSIceServersProtocol GetIceServersProtocol() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSProxyOption* GetProxyOption() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSOption* SetSignalingURL(const FString& signalingURL);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSOption* SetLocalLSTracks(const TArray<ULSTrack*>& localLSTracks);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSOption* SetMeta(const TMap<FString, FString>& meta);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSOption* SetEnableCpuOveruseDetection(bool bEnabled = true);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSOption* SetSendingOption(ULSSendingOption* sendingOption);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSOption* SetReceivingOption(ULSReceivingOption* receivingOption);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSOption* SetIceTransportPolicy(ELSIceTransportPolicy iceTransportPolicy);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSOption* SetIceServersProtocol(ELSIceServersProtocol iceServersProtocol);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSOption")
    ULSOption* SetProxyOption(ULSProxyOption* proxyOption);

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<Option> _option;

    UPROPERTY()
    ULSSendingOption* _sendingOption = nullptr;

    UPROPERTY()
    ULSReceivingOption* _receivingOption = nullptr;

    UPROPERTY()
    ULSProxyOption* _proxyOption = nullptr;
};
