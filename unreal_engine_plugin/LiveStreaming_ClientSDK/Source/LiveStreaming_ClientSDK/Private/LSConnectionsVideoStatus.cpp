// Copyright 2023 RICOH Company, Ltd. All rights reserved.

#include "LSConnectionsVideoStatus.h"

ConnectionsVideoStatus* ULSConnectionsVideoStatus::Get() const
{
    return _connectionsVideoStatus;
}

void ULSConnectionsVideoStatus::Set(ConnectionsVideoStatus* connectionsVideoStatus)
{
    if (connectionsVideoStatus)
    {
        _connectionsVideoStatus = connectionsVideoStatus;
    }
}

bool ULSConnectionsVideoStatus::GetReceiverExistence() const
{
    return _connectionsVideoStatus->get_ReceiverExistence();
}