// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSRTCStats.h"
#include "LSUtility.h"

RTCStats* ULSRTCStats::Get() const
{
    return _rtcStats;
}

void ULSRTCStats::Set(RTCStats* rtcStats)
{
    _rtcStats = rtcStats;
    _members.Empty();

    if (_rtcStats)
    {
        _members = LSUtility::ConvertStrDicToTMap(_rtcStats->get_Members());
    }
}

int64 ULSRTCStats::GetTimestampUs() const
{
    return _rtcStats ? (int64)_rtcStats->get_TimestampUs() : 0;
}

FString ULSRTCStats::GetType() const
{
    return _rtcStats ? FString(_rtcStats->get_Type()) : "";
}

FString ULSRTCStats::GetId() const
{
    return _rtcStats ? FString(_rtcStats->get_Id()) : "";
}

TMap<FString, FString> ULSRTCStats::GetMembers() const
{
    return _members;
}

