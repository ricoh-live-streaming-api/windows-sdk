// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSEnumDefine.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSVideoCapturer.generated.h"

UENUM(BlueprintType)
enum class ELSCapturerType : uint8
{
    /// <summary>
    /// Capture video from device.
    /// </summary>
    Device,
    /// <summary>
    /// Capture video from unity camera.
    /// </summary>
    UnityCamera,
    /// <summary>
    /// Create video frame from byte array.
    /// </summary>
    ByteArray
};

UCLASS(Abstract)
class LIVESTREAMING_CLIENTSDK_API ULSVideoCapturer : public UObject
{
    GENERATED_BODY()

public:
    VideoCapturer* Get() const;
    void Set(VideoCapturer* videoCapturer);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ELSCapturerType GetType() const;

    void Release() PURE_VIRTUAL(ULSVideoCapturer::Release, );

protected:
    VideoCapturer* _videoCapturer = nullptr;
};
