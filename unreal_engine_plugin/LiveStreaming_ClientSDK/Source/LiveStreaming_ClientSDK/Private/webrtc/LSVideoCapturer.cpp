// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSVideoCapturer.h"

VideoCapturer* ULSVideoCapturer::Get() const
{
    return _videoCapturer;
}

void ULSVideoCapturer::Set(VideoCapturer* videoCapturer)
{
    _videoCapturer = videoCapturer;
}

ELSCapturerType ULSVideoCapturer::GetType() const
{
    return (ELSCapturerType)_videoCapturer->get_Type();
}
