// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSTrackOption.h"
#include "LSUtility.h"

ULSTrackOption::ULSTrackOption()
{
    _pluginModule = MakeUnique<FLiveStreaming_ClientSDKModule>(FModuleManager::LoadModuleChecked<FLiveStreaming_ClientSDKModule>(FName(LIVE_STREAMING_MODULE_NAME)));
    _lsTrackOption.reset(_pluginModule->CreateLSTrackOption());
}

LSTrackOption* ULSTrackOption::Get() const
{
    return _lsTrackOption.get();
}

TMap<FString, FString> ULSTrackOption::GetMetadata() const
{
    return _metadata;
}

ELSMuteType ULSTrackOption::GetMuteType() const
{
    return (ELSMuteType)_lsTrackOption->get_MuteType();
}

ULSTrackOption* ULSTrackOption::SetMeta(const TMap<FString, FString>& meta)
{
    std::unique_ptr<StringDictionary> dic(_pluginModule->CreateStringDictionary());
    LSUtility::ConvertTMapToStrDic(meta, dic.get());
    _lsTrackOption->SetMeta(dic.get());
    _metadata = meta;
    return this;
}

ULSTrackOption* ULSTrackOption::SetMuteType(ELSMuteType muteType)
{
    _lsTrackOption->SetMuteType((MuteType)muteType);
    return this;
}
