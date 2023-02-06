// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSUpdateRemoteTrackEvent.h"
#include "LSUtility.h"

LSUpdateRemoteTrackEvent* ULSUpdateRemoteTrackEvent::Get() const
{
    return _lsUpdateRemoteTrackEvent;
}

void ULSUpdateRemoteTrackEvent::Set(LSUpdateRemoteTrackEvent* lsUpdateRemoteTrackEvent)
{
    if (lsUpdateRemoteTrackEvent)
    {
        _lsUpdateRemoteTrackEvent = lsUpdateRemoteTrackEvent;
        _metadata = LSUtility::ConvertStrDicToTMap(_lsUpdateRemoteTrackEvent->get_Metadata());
        ULSMediaStreamTrackEventBase::Set<LSUpdateRemoteTrackEvent>(_lsUpdateRemoteTrackEvent);
    }
}

TMap<FString, FString> ULSUpdateRemoteTrackEvent::GetMetadata() const
{
    return _metadata;
}
