// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSAddRemoteTrackEvent.h"
#include "LSUtility.h"

LSAddRemoteTrackEvent* ULSAddRemoteTrackEvent::Get() const
{
    return _lsAddRemoteTrackEvent;
}

void ULSAddRemoteTrackEvent::Set(LSAddRemoteTrackEvent* lsAddRemoteTrackEvent)
{
    if (lsAddRemoteTrackEvent)
    {
        _lsAddRemoteTrackEvent = lsAddRemoteTrackEvent;
        _metadata = LSUtility::ConvertStrDicToTMap(_lsAddRemoteTrackEvent->get_Metadata());
        ULSMediaStreamTrackEventBase::Set<LSAddRemoteTrackEvent>(_lsAddRemoteTrackEvent);
    }
}

TMap<FString, FString> ULSAddRemoteTrackEvent::GetMetadata() const
{
    return _metadata;
}

ELSMuteType ULSAddRemoteTrackEvent::GetMuteType() const
{
    return (ELSMuteType)_lsAddRemoteTrackEvent->get_MuteType();
}
