// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSVideoDeviceCapturer.h"

ULSVideoDeviceCapturer::ULSVideoDeviceCapturer()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
}

VideoDeviceCapturer* ULSVideoDeviceCapturer::Get() const
{
    return _videoDeviceCapturer.get();
}

ULSVideoDeviceCapturer* ULSVideoDeviceCapturer::Create(const FString& deviceName, int width, int height, int framerate)
{
    if (!_videoDeviceCapturer)
    {
        _videoDeviceCapturer.reset(_pluginModule->CreateVideoDeviceCapturer(TCHAR_TO_UTF8(*deviceName), width, height, framerate));
        _videoCapturer = _videoDeviceCapturer.get();
    }
    return this;
}

FString ULSVideoDeviceCapturer::GetDeviceName() const
{
    return _videoDeviceCapturer ? FString(_videoDeviceCapturer->get_DeviceName()) : "";
}

int ULSVideoDeviceCapturer::GetWidth() const
{
    return _videoDeviceCapturer ? _videoDeviceCapturer->get_Width() : 0;
}

int ULSVideoDeviceCapturer::GetHeight() const
{
    return _videoDeviceCapturer ? _videoDeviceCapturer->get_Height() : 0;
}

int ULSVideoDeviceCapturer::GetFrameRate() const
{
    return _videoDeviceCapturer ? _videoDeviceCapturer->get_FrameRate() : 0;
}

void ULSVideoDeviceCapturer::Release()
{
    if (_videoDeviceCapturer)
    {
        _videoDeviceCapturer->Release();
    }
}
