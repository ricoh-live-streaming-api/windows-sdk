// Copyright 2024 RICOH Company, Ltd. All rights reserved.

#include "LSMediaOpenEvent.h"

LSMediaOpenEvent* ULSMediaOpenEvent::Get() const
{
    return _lsMediaOpenEvent;
}

void ULSMediaOpenEvent::Set(LSMediaOpenEvent* lsMediaOpenEvent)
{
    _lsMediaOpenEvent = lsMediaOpenEvent;
}
