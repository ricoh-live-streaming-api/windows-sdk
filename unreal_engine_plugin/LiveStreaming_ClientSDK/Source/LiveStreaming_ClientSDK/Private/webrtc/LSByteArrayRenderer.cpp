// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSByteArrayRenderer.h"

ULSByteArrayRenderer::ULSByteArrayRenderer()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
    _byteArrayRenderer.reset(_pluginModule->CreateByteArrayRenderer());
}

ByteArrayRenderer* ULSByteArrayRenderer::Get() const
{
    return _byteArrayRenderer.get();
}

void ULSByteArrayRenderer::WritePixelData(uint8& buffer, int width, int height, ULSVideoTrack* videoTrack)
{
    _byteArrayRenderer->WritePixelData(&buffer, width, height, videoTrack->Get());
}

void ULSByteArrayRenderer::WritePixelData(unsigned char* buffer, int width, int height, VideoTrack* videoTrack)
{
    _byteArrayRenderer->WritePixelData(buffer, width, height, videoTrack);
}
