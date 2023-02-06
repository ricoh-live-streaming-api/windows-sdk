// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSMediaStreamConstraints.h"

ULSMediaStreamConstraints::ULSMediaStreamConstraints()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
    _mediaStreamConstraints.reset(_pluginModule->CreateMediaStreamConstraints());
}

MediaStreamConstraints* ULSMediaStreamConstraints::Get() const
{
    return _mediaStreamConstraints.get();
}

ULSVideoCapturer* ULSMediaStreamConstraints::GetCapturer() const
{
    return _videoCapturer;
}

bool ULSMediaStreamConstraints::ShouldCreateAudioStream() const
{
    return _mediaStreamConstraints->get_ShouldCreateAudioStream();
}

ULSMediaStreamConstraints* ULSMediaStreamConstraints::SetVideoCapturer(ULSVideoCapturer* videoCapturer)
{
    _videoCapturer = videoCapturer;
    auto capturer = _videoCapturer->Get();
    _videoCapturer->Set(capturer);
    _mediaStreamConstraints->SetVideoCapturer(capturer);
    return this;
}

ULSMediaStreamConstraints* ULSMediaStreamConstraints::SetAudio(bool bEnabled)
{
    _mediaStreamConstraints->SetAudio(bEnabled);
    return this;
}
