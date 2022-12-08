// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSUpdateMuteEvent.h"

LSUpdateMuteEvent* ULSUpdateMuteEvent::Get() const
{
    return _lsUpdateMuteEvent;
}

void ULSUpdateMuteEvent::Set(LSUpdateMuteEvent* lsUpdateMuteEvent)
{
    if (lsUpdateMuteEvent)
    {
        _lsUpdateMuteEvent = lsUpdateMuteEvent;
        ULSMediaStreamTrackEventBase::Set<LSUpdateMuteEvent>(_lsUpdateMuteEvent);
    }
}

ELSMuteType ULSUpdateMuteEvent::GetMuteType() const
{
    return (ELSMuteType)_lsUpdateMuteEvent->get_MuteType();
}

