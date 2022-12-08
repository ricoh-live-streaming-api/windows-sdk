// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSConnectingEvent.h"

LSConnectingEvent* ULSConnectingEvent::Get() const
{
    return _lsConnectingEvent;
}

void ULSConnectingEvent::Set(LSConnectingEvent* lsConnectingEvent)
{
    _lsConnectingEvent = lsConnectingEvent;
}
