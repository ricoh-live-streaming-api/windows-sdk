// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSConnectingEvent.h"
#include "LSOpenEvent.h"
#include "LSClosingEvent.h"
#include "LSCloseEvent.h"
#include "LSAddLocalTrackEvent.h"
#include "LSAddRemoteTrackEvent.h"
#include "LSAddRemoteConnectionEvent.h"
#include "LSRemoveRemoteConnectionEvent.h"
#include "LSSDKErrorEvent.h"
#include "LSUpdateRemoteConnectionEvent.h"
#include "LSUpdateRemoteTrackEvent.h"
#include "LSUpdateMuteEvent.h"
#include "LSChangeStabilityEvent.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSClientListener.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConnectingEventDelegate, ULSConnectingEvent*, lsConnectingEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOpenEventDelegate, ULSOpenEvent*, lsOpenEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClosingEventDelegate, ULSClosingEvent*, lsClosingEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCloseEventDelegate, ULSCloseEvent*, lsCloseEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddLocalTrackEventDelegate, ULSAddLocalTrackEvent*, lsAddLocalTrackEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddRemoteTrackEventDelegate, ULSAddRemoteTrackEvent*, lsAddRemoteTrackEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddRemoteConnectionEventDelegate, ULSAddRemoteConnectionEvent*, lsAddRemoteConnectionEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRemoveRemoteConnectionEventDelegate, ULSRemoveRemoteConnectionEvent*, lsRemoveRemoteConnectionEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDKErrorEventDelegate, ULSSDKErrorEvent*, lssdkErrorEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateRemoteConnectionEventDelegate, ULSUpdateRemoteConnectionEvent*, lsUpdateRemoteConnectionEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateRemoteTrackEventDelegate, ULSUpdateRemoteTrackEvent*, lsUpdateRemoteTrackEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateMuteEventDelegate, ULSUpdateMuteEvent*, lsUpdateMuteEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeStabilityEventDelegate, ULSChangeStabilityEvent*, lsChangeStabilityEvent);

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSClientListener : public UObject
{
    GENERATED_BODY()

public:
    ULSClientListener();
    IClientListener* Get();

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FConnectingEventDelegate ConnectingEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FOpenEventDelegate OpenEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FClosingEventDelegate ClosingEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FCloseEventDelegate CloseEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FAddLocalTrackEventDelegate AddLocalTrackEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FAddRemoteTrackEventDelegate AddRemoteTrackEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FAddRemoteConnectionEventDelegate AddRemoteConnectionEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FRemoveRemoteConnectionEventDelegate RemoveRemoteConnectionEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FSDKErrorEventDelegate SDKErrorEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FUpdateRemoteConnectionEventDelegate UpdateRemoteConnectionEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FUpdateRemoteTrackEventDelegate UpdateRemoteTrackEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FUpdateMuteEventDelegate UpdateMuteEventDelegate;

    UPROPERTY(BlueprintAssignable, Category = "RICOH Live Streaming Client SDK for Windows | LSClientListener")
    FChangeStabilityEventDelegate ChangeStabilityEventDelegate;

protected:
    virtual void OnConnecting(LSConnectingEvent* lsConnectingEvent);
    virtual void OnOpen(LSOpenEvent* lsOpenEvent);
    virtual void OnClosing(LSClosingEvent* lSClosingEvent);
    virtual void OnClosed(LSCloseEvent* lSCloseEvent);
    virtual void OnAddLocalTrack(LSAddLocalTrackEvent* lsAddLocalTrackEvent);
    virtual void OnAddRemoteTrack(LSAddRemoteTrackEvent* lsAddRemoteTrackEvent);
    virtual void OnAddRemoteConnection(LSAddRemoteConnectionEvent* lsAddRemoteConnectionEvent);
    virtual void OnRemoveRemoteConnection(LSRemoveRemoteConnectionEvent* lsRemoveRemoteConnectionEvent);
    virtual void OnError(SDKErrorEvent* errorEvent);
    virtual void OnUpdateRemoteConnection(LSUpdateRemoteConnectionEvent* lsUpdateRemoteConnectionEvent);
    virtual void OnUpdateRemoteTrack(LSUpdateRemoteTrackEvent* lsUpdateRemoteTrackEvent);
    virtual void OnUpdateMute(LSUpdateMuteEvent* lsUpdateMuteEvent);
    virtual void OnChangeStability(LSChangeStabilityEvent* lsChangeStabilityEvent);

private:
    class ClientListenerImpl : public IClientListener
    {
    public:
        ClientListenerImpl(ULSClientListener* parent) : _parent(parent) {};
        virtual void OnConnecting(LSConnectingEvent* lsConnectingEvent) override { _parent->OnConnecting(lsConnectingEvent); };
        virtual void OnOpen(LSOpenEvent* lsOpenEvent) override { _parent->OnOpen(lsOpenEvent); };
        virtual void OnClosing(LSClosingEvent* lSClosingEvent) override { _parent->OnClosing(lSClosingEvent); };
        virtual void OnClosed(LSCloseEvent* lSCloseEvent) override { _parent->OnClosed(lSCloseEvent); };
        virtual void OnAddLocalTrack(LSAddLocalTrackEvent* lsAddLocalTrackEvent) override { _parent->OnAddLocalTrack(lsAddLocalTrackEvent); };
        virtual void OnAddRemoteTrack(LSAddRemoteTrackEvent* lsAddRemoteTrackEvent) override { _parent->OnAddRemoteTrack(lsAddRemoteTrackEvent); };
        virtual void OnAddRemoteConnection(LSAddRemoteConnectionEvent* lsAddRemoteConnectionEvent) override { _parent->OnAddRemoteConnection(lsAddRemoteConnectionEvent); };
        virtual void OnRemoveRemoteConnection(LSRemoveRemoteConnectionEvent* lsRemoveRemoteConnectionEvent) override { _parent->OnRemoveRemoteConnection(lsRemoveRemoteConnectionEvent); };
        virtual void OnError(SDKErrorEvent* errorEvent) override { _parent->OnError(errorEvent); };
        virtual void OnUpdateRemoteConnection(LSUpdateRemoteConnectionEvent* lsUpdateRemoteConnectionEvent) override { _parent->OnUpdateRemoteConnection(lsUpdateRemoteConnectionEvent); };
        virtual void OnUpdateRemoteTrack(LSUpdateRemoteTrackEvent* lsUpdateRemoteTrackEvent) override { _parent->OnUpdateRemoteTrack(lsUpdateRemoteTrackEvent); };
        virtual void OnUpdateMute(LSUpdateMuteEvent* lsUpdateMuteEvent) override { _parent->OnUpdateMute(lsUpdateMuteEvent); };
        virtual void OnChangeStability(LSChangeStabilityEvent* lsChangeStabilityEvent) override { _parent->OnChangeStability(lsChangeStabilityEvent); };

    private:
        ULSClientListener* _parent;
    };

    template<class TDelegate, class TEvent, class TParam>
    void BroadcastEvent(TDelegate delegateName, TParam* param)
    {
        auto lsEvent = NewObject<TEvent>();
        lsEvent->Set(param);

        AsyncTask(ENamedThreads::GameThread,
            [delegateName, lsEvent]()
            {
                delegateName.Broadcast(lsEvent);
            });
    }

    TUniquePtr<ClientListenerImpl> _clientListener;
};
