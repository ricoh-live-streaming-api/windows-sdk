// Copyright 2023 RICOH Company, Ltd. All rights reserved.

#include "LSConnectionsStatus.h"

ULSConnectionsStatus::ULSConnectionsStatus()
{
    _connectionsVideoStatus = NewObject<ULSConnectionsVideoStatus>();
}

ConnectionsStatus* ULSConnectionsStatus::Get() const
{
    return _connectionsStatus;
}

void ULSConnectionsStatus::Set(ConnectionsStatus* connectionsStatus)
{
    if (connectionsStatus)
    {
        _connectionsStatus = connectionsStatus;
        _connectionsVideoStatus->Set(_connectionsStatus->get_ConnectionsVideoStatus());
    }
}

ULSConnectionsVideoStatus* ULSConnectionsStatus::GetConnectionsVideoStatus() const
{
    return _connectionsVideoStatus;
}
