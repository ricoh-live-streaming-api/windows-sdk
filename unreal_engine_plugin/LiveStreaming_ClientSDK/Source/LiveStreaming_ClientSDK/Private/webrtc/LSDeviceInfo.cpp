// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSDeviceInfo.h"

DeviceInfo* ULSDeviceInfo::Get() const
{
    return _deviceInfo;
}

void ULSDeviceInfo::Set(DeviceInfo* deviceInfo)
{
    _deviceInfo = deviceInfo;
}

FString ULSDeviceInfo::GetDeviceName() const
{
    return _deviceInfo ? FString(_deviceInfo->get_DeviceName()) : "";
}

FString ULSDeviceInfo::GetUniqueName() const
{
    return _deviceInfo ? FString(_deviceInfo->get_UniqueName()) : "";
}
