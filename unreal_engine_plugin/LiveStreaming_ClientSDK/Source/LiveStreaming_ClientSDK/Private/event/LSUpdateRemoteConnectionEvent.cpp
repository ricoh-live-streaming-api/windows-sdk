// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSUpdateRemoteConnectionEvent.h"
#include "LSUtility.h"

LSUpdateRemoteConnectionEvent* ULSUpdateRemoteConnectionEvent::Get() const
{
    return _lsUpdateRemoteConnectionEvent;
}

void ULSUpdateRemoteConnectionEvent::Set(LSUpdateRemoteConnectionEvent* lsUpdateRemoteConnectionEvent)
{
    if (lsUpdateRemoteConnectionEvent)
    {
        _lsUpdateRemoteConnectionEvent = lsUpdateRemoteConnectionEvent;
        _metadata = LSUtility::ConvertStrDicToTMap(_lsUpdateRemoteConnectionEvent->get_Metadata());
    }
}

FString ULSUpdateRemoteConnectionEvent::GetConnectionId() const
{
    return _lsUpdateRemoteConnectionEvent ? FString(_lsUpdateRemoteConnectionEvent->get_ConnectionId()) : "";
}

TMap<FString, FString> ULSUpdateRemoteConnectionEvent::GetMetadata() const
{
    return _metadata;
}
