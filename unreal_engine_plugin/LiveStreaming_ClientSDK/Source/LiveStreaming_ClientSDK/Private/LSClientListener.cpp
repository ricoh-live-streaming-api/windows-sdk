// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSClientListener.h"

ULSClientListener::ULSClientListener()
{
    _clientListener = MakeUnique<ClientListenerImpl>(this);
}

IClientListener* ULSClientListener::Get()
{
    return _clientListener.Get();
}

void ULSClientListener::OnConnecting(LSConnectingEvent* lsConnectingEvent)
{
    BroadcastEvent<FConnectingEventDelegate, ULSConnectingEvent, LSConnectingEvent>(ConnectingEventDelegate, lsConnectingEvent);
}

void ULSClientListener::OnOpen(LSOpenEvent* lsOpenEvent)
{
    BroadcastEvent<FOpenEventDelegate, ULSOpenEvent, LSOpenEvent>(OpenEventDelegate, lsOpenEvent);
}

void ULSClientListener::OnClosing(LSClosingEvent* lSClosingEvent)
{
    BroadcastEvent<FClosingEventDelegate, ULSClosingEvent, LSClosingEvent>(ClosingEventDelegate, lSClosingEvent);
}

void ULSClientListener::OnClosed(LSCloseEvent* lSCloseEvent)
{
    BroadcastEvent<FCloseEventDelegate, ULSCloseEvent, LSCloseEvent>(CloseEventDelegate, lSCloseEvent);
}

void ULSClientListener::OnAddLocalTrack(LSAddLocalTrackEvent* lsAddLocalTrackEvent)
{
    BroadcastEvent<FAddLocalTrackEventDelegate, ULSAddLocalTrackEvent, LSAddLocalTrackEvent>(AddLocalTrackEventDelegate, lsAddLocalTrackEvent);
}

void ULSClientListener::OnAddRemoteTrack(LSAddRemoteTrackEvent* lsAddRemoteTrackEvent)
{
    BroadcastEvent<FAddRemoteTrackEventDelegate, ULSAddRemoteTrackEvent, LSAddRemoteTrackEvent>(AddRemoteTrackEventDelegate, lsAddRemoteTrackEvent);
}

void ULSClientListener::OnAddRemoteConnection(LSAddRemoteConnectionEvent* lsAddRemoteConnectionEvent)
{
    BroadcastEvent<FAddRemoteConnectionEventDelegate, ULSAddRemoteConnectionEvent, LSAddRemoteConnectionEvent>(AddRemoteConnectionEventDelegate, lsAddRemoteConnectionEvent);
}

void ULSClientListener::OnRemoveRemoteConnection(LSRemoveRemoteConnectionEvent* lsRemoveRemoteConnectionEvent)
{
    BroadcastEvent<FRemoveRemoteConnectionEventDelegate, ULSRemoveRemoteConnectionEvent, LSRemoveRemoteConnectionEvent>(RemoveRemoteConnectionEventDelegate, lsRemoveRemoteConnectionEvent);
}

void ULSClientListener::OnError(SDKErrorEvent* errorEvent)
{
    BroadcastEvent<FSDKErrorEventDelegate, ULSSDKErrorEvent, SDKErrorEvent>(SDKErrorEventDelegate, errorEvent);
}

void ULSClientListener::OnUpdateRemoteConnection(LSUpdateRemoteConnectionEvent* lsUpdateRemoteConnectionEvent)
{
    BroadcastEvent<FUpdateRemoteConnectionEventDelegate, ULSUpdateRemoteConnectionEvent, LSUpdateRemoteConnectionEvent>(UpdateRemoteConnectionEventDelegate, lsUpdateRemoteConnectionEvent);
}

void ULSClientListener::OnUpdateRemoteTrack(LSUpdateRemoteTrackEvent* lsUpdateRemoteTrackEvent)
{
    BroadcastEvent<FUpdateRemoteTrackEventDelegate, ULSUpdateRemoteTrackEvent, LSUpdateRemoteTrackEvent>(UpdateRemoteTrackEventDelegate, lsUpdateRemoteTrackEvent);
}

void ULSClientListener::OnUpdateMute(LSUpdateMuteEvent* lsUpdateMuteEvent)
{
    BroadcastEvent<FUpdateMuteEventDelegate, ULSUpdateMuteEvent, LSUpdateMuteEvent>(UpdateMuteEventDelegate, lsUpdateMuteEvent);
}

void ULSClientListener::OnChangeMediaStability(LSChangeMediaStabilityEvent* lsChangeMediaStabilityEvent)
{
    BroadcastEvent<FChangeMediaStabilityEventDelegate, ULSChangeMediaStabilityEvent, LSChangeMediaStabilityEvent>(ChangeMediaStabilityEventDelegate, lsChangeMediaStabilityEvent);
}

void ULSClientListener::OnUpdateConnectionsStatus(LSUpdateConnectionsStatusEvent* lsUpdateConnectionsStatusEvent)
{
    BroadcastEvent<FUpdateConnectionsStatusEventDelegate, ULSUpdateConnectionsStatusEvent, LSUpdateConnectionsStatusEvent>(UpdateConnectionsStatusEventDelegate, lsUpdateConnectionsStatusEvent);
}

void ULSClientListener::OnUpdateRecording(LSUpdateRecordingEvent* lsUpdateRecordingEvent)
{
    BroadcastEvent<FUpdateRecordingEventDelegate, ULSUpdateRecordingEvent, LSUpdateRecordingEvent>(UpdateRecordingEventDelegate, lsUpdateRecordingEvent);
}

void ULSClientListener::OnMediaOpen(LSMediaOpenEvent* lsMediaOpenEvent)
{
    BroadcastEvent<FMediaOpenEventDelegate, ULSMediaOpenEvent, LSMediaOpenEvent>(MediaOpenEventDelegate, lsMediaOpenEvent);
}
