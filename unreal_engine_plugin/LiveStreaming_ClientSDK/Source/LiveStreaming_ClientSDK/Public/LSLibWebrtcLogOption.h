// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSLibWebrtcLogOption.generated.h"

UENUM(BlueprintType)
enum class ELSLevel : uint8
{
    Verbose,
    Info,
};

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSLibWebrtcLogOption : public UObject
{
    GENERATED_BODY()

public:
    ULSLibWebrtcLogOption();
    LibWebrtcLogOption* Get() const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create LibWebrtc Log Option"), Category = "RICOH Live Streaming Client SDK for Windows | LSLibWebrtcLogOption")
    ULSLibWebrtcLogOption* Create(const FString& path, int maxTotalFileSize = 4, ELSLevel logLevel = ELSLevel::Verbose);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSLibWebrtcLogOption")
    FString GetPath() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSLibWebrtcLogOption")
    int GetMaxTotalFileSize() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSLibWebrtcLogOption")
    ELSLevel GetLogLevel() const;

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<LibWebrtcLogOption> _LibWebrtcLogOption;
};
