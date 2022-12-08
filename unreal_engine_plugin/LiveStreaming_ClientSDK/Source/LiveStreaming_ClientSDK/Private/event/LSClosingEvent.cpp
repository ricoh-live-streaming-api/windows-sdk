// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSClosingEvent.h"

LSClosingEvent* ULSClosingEvent::Get() const
{
    return _lsClosingEvent;
}

void ULSClosingEvent::Set(LSClosingEvent* lsClosingEvent)
{
    _lsClosingEvent = lsClosingEvent;
}
