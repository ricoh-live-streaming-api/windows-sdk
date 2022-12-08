// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include <memory>
#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSEnumDefine.h"
#include "LSMediaStream.h"
#include "LSMediaStreamTrack.h"
#include "LSMediaStreamConstraints.h"
#include "LSTrack.h"
#include "LSRTCStatsReport.h"
#include "LSOption.h"
#include "LSClientListener.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSClient.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSClient : public UObject
{
    GENERATED_BODY()

public:
    ULSClient();
    Client* Get() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void Dispose();

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ULSMediaStream* GetUserMedia(ULSMediaStreamConstraints* constrants);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void Connect(const FString& clientId, const FString& accessToken, ULSOption* option);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void Disconnect();

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ELSConnectionState GetState() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void UpdateMeta(const TMap<FString, FString>& meta);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void UpdateTrackMeta(ULSTrack* lsTrack, const TMap<FString, FString>& meta);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void ChangeMediaRequirements(const FString& connectionId, ELSVideoRequirement videoRequirement);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void ChangeVideoSendBitrate(int maxBitrateKbps);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void SetEventListener(ULSClientListener* listener);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    TMap<FString, ULSRTCStatsReport*> GetStats() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void SetAudioInputDevice(const FString& deviceName);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void SetAudioOutputDevice(const FString& deviceName);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void ReplaceMediaStreamTrack(ULSTrack* lsTrack, ULSMediaStreamTrack* mediaStreamTrack);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void ChangeMute(ULSTrack* lsTrack, ELSMuteType muteType);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    void ChangeVideoSendFramerate(double maxFramerate);

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<Client> _client;
};
