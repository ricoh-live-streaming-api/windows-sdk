// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include <memory>
#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "LSVideoCapturer.h"
#include "LSVideoDeviceCapturer.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSVideoDeviceCapturer : public ULSVideoCapturer
{
    GENERATED_BODY()

public:
    ULSVideoDeviceCapturer();
    VideoDeviceCapturer* Get() const;

    UFUNCTION(BlueprintCallable, meta=(DisplayName = "Create Video Device Capturer"), Category = "RICOH Live Streaming Client SDK for Windows | LSVideoDeviceCapturer")
    ULSVideoDeviceCapturer* Create(const FString& deviceName, int width, int height, int framerate);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoDeviceCapturer")
    FString GetDeviceName() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoDeviceCapturer")
    int GetWidth() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoDeviceCapturer")
    int GetHeight() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoDeviceCapturer")
    int GetFrameRate() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSVideoDeviceCapturer")
    void Release();

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<VideoDeviceCapturer> _videoDeviceCapturer;
};
