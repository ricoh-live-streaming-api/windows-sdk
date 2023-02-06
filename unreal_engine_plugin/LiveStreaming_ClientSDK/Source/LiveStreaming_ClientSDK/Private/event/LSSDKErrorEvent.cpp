// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSSDKErrorEvent.h"

ULSSDKErrorEvent::ULSSDKErrorEvent()
{
    _lsErrorDetail = NewObject<ULSErrorDetail>();
}

SDKErrorEvent* ULSSDKErrorEvent::Get() const
{
    return _sdkErrorEvent;
}

void ULSSDKErrorEvent::Set(SDKErrorEvent* sdkErrorEvent)
{
    if (sdkErrorEvent)
    {
        _sdkErrorEvent = sdkErrorEvent;
        _lsErrorDetail->Set(_sdkErrorEvent->get_Detail());
    }
}

ULSErrorDetail* ULSSDKErrorEvent::GetDetail() const
{
    return _lsErrorDetail;
}

FString ULSSDKErrorEvent::ToReportString() const
{
    return _sdkErrorEvent ? FString(_sdkErrorEvent->ToReportString()) : "";
}
