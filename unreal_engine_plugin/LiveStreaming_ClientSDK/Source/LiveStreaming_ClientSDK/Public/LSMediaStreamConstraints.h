// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include <memory>
#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSVideoCapturer.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSMediaStreamConstraints.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSMediaStreamConstraints : public UObject
{
    GENERATED_BODY()

public:
    ULSMediaStreamConstraints();
    MediaStreamConstraints* Get() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ULSVideoCapturer* GetCapturer() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    bool ShouldCreateAudioStream() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ULSMediaStreamConstraints* SetVideoCapturer(ULSVideoCapturer* videoCapturer);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ULSMediaStreamConstraints* SetAudio(bool bEnabled = true);

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<MediaStreamConstraints> _mediaStreamConstraints;

    UPROPERTY()
    ULSVideoCapturer* _videoCapturer = nullptr;
};
