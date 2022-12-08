// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSVideoCapturerDeviceCapability.h"

VideoCapturerDeviceCapability* ULSVideoCapturerDeviceCapability::Get() const
{
    return _videoCapturerDeviceCapability;
}

void ULSVideoCapturerDeviceCapability::Set(VideoCapturerDeviceCapability* videoCapturerDeviceCapability)
{
    _videoCapturerDeviceCapability = videoCapturerDeviceCapability;
}

int ULSVideoCapturerDeviceCapability::GetWidth() const
{
    return _videoCapturerDeviceCapability ? _videoCapturerDeviceCapability->get_Width() : 0;
}

int ULSVideoCapturerDeviceCapability::GetHeight() const
{
    return _videoCapturerDeviceCapability ? _videoCapturerDeviceCapability->get_Height() : 0;
}

int ULSVideoCapturerDeviceCapability::GetFrameRate() const
{
    return _videoCapturerDeviceCapability ? _videoCapturerDeviceCapability->get_FrameRate() : 0;
}
