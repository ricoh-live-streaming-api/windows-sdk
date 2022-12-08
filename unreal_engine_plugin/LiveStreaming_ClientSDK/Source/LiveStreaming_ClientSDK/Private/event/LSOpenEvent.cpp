// Copyright 2022 RICOH Company, Ltd. All rights reserved.


#include "LSOpenEvent.h"

LSOpenEvent* ULSOpenEvent::Get() const
{
    return _lsOpenEvent;
}

void ULSOpenEvent::Set(LSOpenEvent* lsOpenEvent)
{
    _lsOpenEvent = lsOpenEvent;
}

FString ULSOpenEvent::GetAccessTokenJson() const
{
    return _lsOpenEvent ? FString(_lsOpenEvent->get_AccessTokenJson()) : "";
}
