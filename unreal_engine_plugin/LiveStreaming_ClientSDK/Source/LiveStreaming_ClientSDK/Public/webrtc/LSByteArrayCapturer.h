// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include <memory>
#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "LSVideoCapturer.h"
#include "LSByteArrayCapturer.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSByteArrayCapturer : public ULSVideoCapturer
{
    GENERATED_BODY()

public:
    ULSByteArrayCapturer();
    ByteArrayCapturer* Get() const;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Byte Array Capturer"), Category = LiveStreaming_ClientSDK)
    ULSByteArrayCapturer* Create(int width, int height);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    int GetWidth() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    int GetHeight() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void Render(const uint8& image);

    void Render(const unsigned char* image);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void Release();

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<ByteArrayCapturer> _byteArrayCapturer;
};
