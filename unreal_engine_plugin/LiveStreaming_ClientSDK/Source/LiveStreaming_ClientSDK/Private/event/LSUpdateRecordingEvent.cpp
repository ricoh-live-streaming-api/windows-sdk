// Copyright 2024 RICOH Company, Ltd. All rights reserved.

#include "LSUpdateRecordingEvent.h"
#include "LSUtility.h"

ULSUpdateRecordingEvent::ULSUpdateRecordingEvent()
{
    _recordingStatus = NewObject<ULSRecordingStatus>();
}

LSUpdateRecordingEvent* ULSUpdateRecordingEvent::Get() const
{
    return _lsUpdateRecordingEvent;
}

void ULSUpdateRecordingEvent::Set(LSUpdateRecordingEvent* lsUpdateRecordingEvent)
{
    if (lsUpdateRecordingEvent)
    {
        _lsUpdateRecordingEvent = lsUpdateRecordingEvent;
        _recordingStatus->Set(_lsUpdateRecordingEvent->get_RecordingStatus());
    }
}

ULSRecordingStatus* ULSUpdateRecordingEvent::GetRecordingStatus() const
{
    return _recordingStatus;
}