// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include <memory>
#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSEnumDefine.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSTrackOption.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSTrackOption : public UObject
{
    GENERATED_BODY()

public:
    ULSTrackOption();
    LSTrackOption* Get() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    TMap<FString, FString> GetMetadata() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ELSMuteType GetMuteType() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ULSTrackOption* SetMeta(const TMap<FString, FString>& meta);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ULSTrackOption* SetMuteType(ELSMuteType muteType);

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<LSTrackOption> _lsTrackOption;
    TMap<FString, FString> _metadata;
};
