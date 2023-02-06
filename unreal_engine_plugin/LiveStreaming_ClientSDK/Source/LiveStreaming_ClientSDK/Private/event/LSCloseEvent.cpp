// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSCloseEvent.h"

LSCloseEvent* ULSCloseEvent::Get() const
{
    return _lsCloseEvent;
}

void ULSCloseEvent::Set(LSCloseEvent* lsCloseEvent)
{
    _lsCloseEvent = lsCloseEvent;
}
