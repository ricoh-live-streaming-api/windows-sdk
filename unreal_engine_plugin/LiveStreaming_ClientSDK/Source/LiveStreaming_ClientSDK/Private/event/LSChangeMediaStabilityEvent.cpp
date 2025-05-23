// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSChangeMediaStabilityEvent.h"

LSChangeMediaStabilityEvent* ULSChangeMediaStabilityEvent::Get() const
{
    return _lsChangeMediaStabilityEvent;
}

void ULSChangeMediaStabilityEvent::Set(LSChangeMediaStabilityEvent* lsChangeMediaStabilityEvent)
{
    _lsChangeMediaStabilityEvent = lsChangeMediaStabilityEvent;
}

FString ULSChangeMediaStabilityEvent::GetConnectionId() const
{
    return _lsChangeMediaStabilityEvent ? FString(_lsChangeMediaStabilityEvent->get_ConnectionId()) : "";
}

ELSStability ULSChangeMediaStabilityEvent::GetStability() const
{
    return (ELSStability)_lsChangeMediaStabilityEvent->get_Stability();
}
