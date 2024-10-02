// Copyright 2023 RICOH Company, Ltd. All rights reserved.

#include "LSUpdateConnectionsStatusEvent.h"
#include "LSUtility.h"

ULSUpdateConnectionsStatusEvent::ULSUpdateConnectionsStatusEvent()
{
    _connectionsStatus = NewObject<ULSConnectionsStatus>();
}

LSUpdateConnectionsStatusEvent* ULSUpdateConnectionsStatusEvent::Get() const
{
    return _lsUpdateConnectionsStatusEvent;
}

void ULSUpdateConnectionsStatusEvent::Set(LSUpdateConnectionsStatusEvent* lsUpdateConnectionsStatusEvent)
{
    if (lsUpdateConnectionsStatusEvent)
    {
        _lsUpdateConnectionsStatusEvent = lsUpdateConnectionsStatusEvent;
        _connectionsStatus->Set(_lsUpdateConnectionsStatusEvent->get_ConnectionsStatus());
    }
}

ULSConnectionsStatus* ULSUpdateConnectionsStatusEvent::GetConnectionsStatus() const
{
    return _connectionsStatus;
}