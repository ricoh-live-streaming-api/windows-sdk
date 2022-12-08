// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "CoreMinimal.h"
#include "LSMediaStreamTrack.h"
#include "LSAudioTrack.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSAudioTrack : public ULSMediaStreamTrack
{
    GENERATED_BODY()

public:
    AudioTrack* Get() const;
    void Set(AudioTrack* audioTrack);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void SetVolume(double volume);

private:
    AudioTrack* _audioTrack = nullptr;
};
