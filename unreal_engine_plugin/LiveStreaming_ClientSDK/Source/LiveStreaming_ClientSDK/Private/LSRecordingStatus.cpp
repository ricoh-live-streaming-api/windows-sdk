// Copyright 2024 RICOH Company, Ltd. All rights reserved.

#include "LSRecordingStatus.h"

RecordingStatus* ULSRecordingStatus::Get() const
{
    return _recordingStatus;
}

void ULSRecordingStatus::Set(RecordingStatus* recordingStatus)
{
    if (recordingStatus)
    {
        _recordingStatus = recordingStatus;
    }
}

bool ULSRecordingStatus::GetInRecording() const
{
    return _recordingStatus->get_InRecording();
}
