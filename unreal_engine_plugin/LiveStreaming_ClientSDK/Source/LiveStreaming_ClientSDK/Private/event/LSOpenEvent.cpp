// Copyright 2022 RICOH Company, Ltd. All rights reserved.


#include "LSOpenEvent.h"

ULSOpenEvent::ULSOpenEvent()
{
    _connectionsStatus = NewObject<ULSConnectionsStatus>();
}

LSOpenEvent* ULSOpenEvent::Get() const
{
    return _lsOpenEvent;
}

void ULSOpenEvent::Set(LSOpenEvent* lsOpenEvent)
{
    if (lsOpenEvent)
    {
        _lsOpenEvent = lsOpenEvent;
        _connectionsStatus->Set(_lsOpenEvent->get_ConnectionsStatus());
    }
}

FString ULSOpenEvent::GetAccessTokenJson() const
{
    return _lsOpenEvent ? FString(_lsOpenEvent->get_AccessTokenJson()) : "";
}

ULSConnectionsStatus* ULSOpenEvent::GetConnectionsStatus() const
{
    return _connectionsStatus;
}