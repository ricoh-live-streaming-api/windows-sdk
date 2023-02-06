// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSRTCStatsReport.h"
#include "LSUtility.h"

RTCStatsReport* ULSRTCStatsReport::Get() const
{
    return _rtcStatsReport;
}

void ULSRTCStatsReport::Set(RTCStatsReport* rtcStatsReport)
{
    _rtcStatsReport = rtcStatsReport;
    _stats.Empty();

    if (_rtcStatsReport)
    {
        auto stats = _rtcStatsReport->get_Stats();
        _stats = LSUtility::ConvertDicToTMap<ULSRTCStats, RTCStats>(stats);
    }
}

int64 ULSRTCStatsReport::GetTimestampUs() const
{
    return _rtcStatsReport ? (int64)_rtcStatsReport->get_TimestampUs() : 0;
}

TMap<FString, ULSRTCStats*> ULSRTCStatsReport::GetStats() const
{
    return _stats;
}
