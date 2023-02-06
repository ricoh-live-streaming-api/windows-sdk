// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSVideoTrack.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSByteArrayRenderer.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSByteArrayRenderer : public UObject
{
    GENERATED_BODY()

public:
    ULSByteArrayRenderer();
    ByteArrayRenderer* Get() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void WritePixelData(uint8& buffer, int width, int height, ULSVideoTrack* videoTrack);

    void WritePixelData(unsigned char* buffer, int width, int height, VideoTrack* videoTrack);

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<ByteArrayRenderer> _byteArrayRenderer;
};
