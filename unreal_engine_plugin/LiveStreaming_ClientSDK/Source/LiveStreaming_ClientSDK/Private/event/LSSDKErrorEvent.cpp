// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSSDKErrorEvent.h"

ULSSDKErrorEvent::ULSSDKErrorEvent()
{
    _errorDetail = NewObject<ULSErrorDetail>();
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
        _errorDetail->Set(_sdkErrorEvent->get_Detail());
    }
}

ULSErrorDetail* ULSSDKErrorEvent::GetDetail() const
{
    return _errorDetail;
}

FString ULSSDKErrorEvent::ToReportString() const
{
    checkf(_sdkErrorEvent, TEXT("SDKErrorEvent is null."));
    return FString(_sdkErrorEvent->ToReportString());
}
