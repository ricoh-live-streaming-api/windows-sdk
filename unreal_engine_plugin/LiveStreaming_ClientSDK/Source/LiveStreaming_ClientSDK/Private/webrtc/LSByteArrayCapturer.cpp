// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSByteArrayCapturer.h"

ULSByteArrayCapturer::ULSByteArrayCapturer()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
}

ByteArrayCapturer* ULSByteArrayCapturer::Get() const
{
    return _byteArrayCapturer.get();
}

ULSByteArrayCapturer* ULSByteArrayCapturer::Create(int width, int height)
{
    if (!_byteArrayCapturer)
    {
        _byteArrayCapturer.reset(_pluginModule->CreateByteArrayCapturer(width, height));
        _videoCapturer = _byteArrayCapturer.get();
    }
    return this;
}

int ULSByteArrayCapturer::GetWidth() const
{
    return _byteArrayCapturer ? _byteArrayCapturer->get_Width() : 0;
}

int ULSByteArrayCapturer::GetHeight() const
{
    return _byteArrayCapturer ? _byteArrayCapturer->get_Height() : 0;
}

void ULSByteArrayCapturer::Render(const uint8& image)
{
    if (_byteArrayCapturer)
    {
        _byteArrayCapturer->Render(&image);
    }
}

void ULSByteArrayCapturer::Render(const unsigned char* image)
{
    if (_byteArrayCapturer)
    {
        _byteArrayCapturer->Render(image);
    }
}

void ULSByteArrayCapturer::Release()
{
    if (_byteArrayCapturer)
    {
        _byteArrayCapturer->Release();
    }
}
