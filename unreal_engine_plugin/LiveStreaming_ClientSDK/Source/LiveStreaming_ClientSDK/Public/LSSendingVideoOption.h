// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include <memory>
#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSSendingVideoOption.generated.h"

UENUM(BlueprintType)
enum class ELSVideoCodecType : uint8
{
    Vp8,
    Vp9,
    H264,
};

UENUM(BlueprintType)
enum class ELSSendingPriority : uint8
{
    Normal,
    High,
};

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSSendingVideoOption : public UObject
{
    GENERATED_BODY()

public:
    ULSSendingVideoOption();
    SendingVideoOption* Get() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSSendingVideoOption")
    ELSVideoCodecType GetCodec() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSSendingVideoOption")
    ELSSendingPriority GetPriority() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSSendingVideoOption")
    int GetMaxBitrateKbps() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSSendingVideoOption")
    ULSSendingVideoOption* SetCodec(ELSVideoCodecType videoCodecType);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSSendingVideoOption")
    ULSSendingVideoOption* SetPriority(ELSSendingPriority sendingPriority);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSSendingVideoOption")
    ULSSendingVideoOption* SetMaxBitrateKbps(int maxBitrateKbps);

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<SendingVideoOption> _sendingVideoOption;
};
