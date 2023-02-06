// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSRemoveRemoteConnectionEvent.h"
#include "LSUtility.h"

LSRemoveRemoteConnectionEvent* ULSRemoveRemoteConnectionEvent::Get() const
{
    return _lsRemoveRemoteConnectionEvent;
}

void ULSRemoveRemoteConnectionEvent::Set(LSRemoveRemoteConnectionEvent* lsRemoveRemoteConnectionEvent)
{
    if (lsRemoveRemoteConnectionEvent)
    {
        _lsRemoveRemoteConnectionEvent = lsRemoveRemoteConnectionEvent;
        _mediaStreamTracks = LSUtility::ConvertListToTArray<ULSMediaStreamTrack, MediaStreamTrack>(_lsRemoveRemoteConnectionEvent->get_MediaStreamTracks());
        _metadata = LSUtility::ConvertStrDicToTMap(_lsRemoveRemoteConnectionEvent->get_Metadata());
    }
}

FString ULSRemoveRemoteConnectionEvent::GetConnectionId() const
{
    return _lsRemoveRemoteConnectionEvent ? FString(_lsRemoveRemoteConnectionEvent->get_ConnectionId()) : "";
}

TArray<ULSMediaStreamTrack*> ULSRemoveRemoteConnectionEvent::GetMediaStreamTracks() const
{
    return _mediaStreamTracks;
}

TMap<FString, FString> ULSRemoveRemoteConnectionEvent::GetMetadata() const
{
    return _metadata;
}
