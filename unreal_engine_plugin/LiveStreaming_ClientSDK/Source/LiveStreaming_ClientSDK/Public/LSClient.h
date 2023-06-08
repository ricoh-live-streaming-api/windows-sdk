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
#include "LSSDKException.h"
#include "LSLibWebrtcLogOption.h"
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

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void Dispose();

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    ULSMediaStream* GetUserMedia(ULSMediaStreamConstraints* constrants, bool& bOutResult, FLSSDKException& OutSDKException);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void Connect(const FString& clientId, const FString& accessToken, ULSOption* option, bool& bOutResult, FLSSDKException& OutSDKException);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void Disconnect(bool& bOutResult, FLSSDKException& OutSDKException);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    ELSConnectionState GetState() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void UpdateMeta(const TMap<FString, FString>& meta, bool& bOutResult, FLSSDKException& OutSDKException);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void UpdateTrackMeta(ULSTrack* lsTrack, const TMap<FString, FString>& meta, bool& bOutResult, FLSSDKException& OutSDKException);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void ChangeMediaRequirements(const FString& connectionId, ELSVideoRequirement videoRequirement, bool& bOutResult, FLSSDKException& OutSDKException);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void ChangeVideoSendBitrate(int maxBitrateKbps, bool& bOutResult, FLSSDKException& OutSDKException);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void SetEventListener(ULSClientListener* listener);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    TMap<FString, ULSRTCStatsReport*> GetStats() const;

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void SetAudioInputDevice(const FString& deviceName);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void SetAudioOutputDevice(const FString& deviceName);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void ReplaceMediaStreamTrack(ULSTrack* lsTrack, ULSMediaStreamTrack* mediaStreamTrack, bool& bOutResult, FLSSDKException& OutSDKException);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void ChangeMute(ULSTrack* lsTrack, ELSMuteType muteType, bool& bOutResult, FLSSDKException& OutSDKException);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void ChangeVideoSendFramerate(double maxFramerate, bool& bOutResult, FLSSDKException& OutSDKException);

    UFUNCTION(BlueprintCallable, Category = "RICOH Live Streaming Client SDK for Windows | LSClient")
    void SetLibWebrtcLogOption(ULSLibWebrtcLogOption* option, bool& bOutResult, FLSSDKException& OutSDKException);

private:
    TUniquePtr<FLiveStreaming_ClientSDKModule> _pluginModule;
    std::unique_ptr<Client> _client;
};
