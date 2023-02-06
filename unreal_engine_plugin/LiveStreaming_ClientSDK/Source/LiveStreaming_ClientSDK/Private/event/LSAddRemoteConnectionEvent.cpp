// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSAddRemoteConnectionEvent.h"
#include "LSUtility.h"

LSAddRemoteConnectionEvent* ULSAddRemoteConnectionEvent::Get() const
{
    return _lsAddRemoteConnectionEvent;
}

void ULSAddRemoteConnectionEvent::Set(LSAddRemoteConnectionEvent* lsAddRemoteConnectionEvent)
{
    if (lsAddRemoteConnectionEvent)
    {
        _lsAddRemoteConnectionEvent = lsAddRemoteConnectionEvent;
        _metadata = LSUtility::ConvertStrDicToTMap(_lsAddRemoteConnectionEvent->get_Metadata());
    }
}

FString ULSAddRemoteConnectionEvent::GetConnectionId() const
{
    return _lsAddRemoteConnectionEvent ? FString(_lsAddRemoteConnectionEvent->get_ConnectionId()) : "";
}

TMap<FString, FString> ULSAddRemoteConnectionEvent::GetMetadata() const
{
    return _metadata;
}
