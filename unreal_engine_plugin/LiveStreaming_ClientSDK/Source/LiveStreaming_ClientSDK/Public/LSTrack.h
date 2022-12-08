// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include <memory>
#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSEnumDefine.h"
#include "LSVideoTrack.h"
#include "LSTrackOption.h"
#include "LSMediaStream.h"
#include "LSMediaStreamTrack.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSTrack.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSTrack : public UObject
{
    GENERATED_BODY()

public:
    ULSTrack();
    LSTrack* Get() const;
    void Set(LSTrack* lsTrack);

    UFUNCTION(BlueprintCallable, meta=(DisplayName = "Create LSTrack", AutoCreateRefTerm = "trackOption"), Category = LiveStreaming_ClientSDK)
    ULSTrack* Create(ULSMediaStreamTrack* mediaStreamTrack, ULSMediaStream* mediaStream, ULSTrackOption* trackOption);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ULSMediaStreamTrack* GetMediaStreamTrack() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ULSMediaStream* GetMediaStream() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    TMap<FString, FString> GetMetadata() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ELSMuteType GetMuteType() const;

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<LSTrack> _lsTrack;

    UPROPERTY()
    ULSMediaStreamTrack* _mediaStreamTrack = nullptr;

    UPROPERTY()
    ULSMediaStream* _mediaStream = nullptr;

    TMap<FString, FString> _metadata;
};
