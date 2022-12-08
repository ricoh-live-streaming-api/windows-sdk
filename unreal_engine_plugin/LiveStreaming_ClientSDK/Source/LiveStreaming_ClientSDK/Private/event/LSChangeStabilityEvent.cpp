// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSChangeStabilityEvent.h"

LSChangeStabilityEvent* ULSChangeStabilityEvent::Get() const
{
    return _lsChangeStabilityEvent;
}

void ULSChangeStabilityEvent::Set(LSChangeStabilityEvent* lsChangeStabilityEvent)
{
    _lsChangeStabilityEvent = lsChangeStabilityEvent;
}

FString ULSChangeStabilityEvent::GetConnectionId() const
{
    return _lsChangeStabilityEvent ? FString(_lsChangeStabilityEvent->get_ConnectionId()) : "";
}

ELSStability ULSChangeStabilityEvent::GetStability() const
{
    return (ELSStability)_lsChangeStabilityEvent->get_Stability();
}
