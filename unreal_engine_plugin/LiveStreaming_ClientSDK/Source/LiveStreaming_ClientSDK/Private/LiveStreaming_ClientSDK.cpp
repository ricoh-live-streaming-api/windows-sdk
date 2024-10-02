// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LiveStreaming_ClientSDK.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "../../ThirdParty/Include/AssemblyResolve.h"

#define LOCTEXT_NAMESPACE "FLiveStreaming_ClientSDKModule"

DEFINE_LOG_CATEGORY(LogLiveStreaming);

#define GET_FUNC(typeName, dllHandle, func, name, isError) \
	typeName func = (typeName)FPlatformProcess::GetDllExport(dllHandle, name); \
	if (func==nullptr) { UE_LOG(LogLiveStreaming, Warning, TEXT("failed to get function pointer of %s"), name); isError = true; }

#define SET_FUNC(typeName, func, isError) \
	func = (typeName)FPlatformProcess::GetDllExport(moduleClient, TEXT(#func)); \
	if (func==nullptr) { FString name(#func); UE_LOG(LogLiveStreaming, Warning, TEXT("failed to get function pointer of %s"), *name); isError = true; }

#define CLEAN_FUNC(obj) obj = NULL;

void FLiveStreaming_ClientSDKModule::StartupModule()
{
    // Get the base directory of this plugin
    FString baseDir = IPluginManager::Get().FindPlugin("LiveStreaming_ClientSDK")->GetBaseDir();

    // Add on the relative location of the third party dll and load it
    FString dllPath = FPaths::Combine(*baseDir, TEXT("Source/ThirdParty/Bin"));
#ifdef _WIN64
    dllPath = FPaths::Combine(dllPath, TEXT("Win64"));
#elif _WIN32
    dllPath = FPaths::Combine(dllPath, TEXT("Win32"));
#endif

    moduleAssemb = LoadDllFile(dllPath, TEXT("AssemblyResolve.dll"));
    if (!moduleAssemb)
    {
        UE_LOG(LogLiveStreaming, Error, TEXT("Failed to load module AssemblyResolve.dll"));
        return;
    }

    moduleClient = LoadDllFile(dllPath, TEXT("UnrealEngineClient.dll"));
    if (!moduleClient)
    {
        UE_LOG(LogLiveStreaming, Error, TEXT("Failed to load module UnrealEngineClient.dll"));
        return;
    }

    bool isError = false;
    GET_FUNC(InitializeClientModuleFunc, moduleClient, initializeClientModule, TEXT("InitializeClientModule"), isError);
    GET_FUNC(SetAssemblySearchDirectoryFunc, this->moduleAssemb, pSetSearch, TEXT("SetAssemblySearchDirectory"), isError);
    GET_FUNC(Logger::SetLogPropertyFunc, this->moduleClient, pSetLogPropertyFunc, TEXT("SetLogProperty"), isError);
    GET_FUNC(Logger::ConfigureFunc, this->moduleClient, pLogConfigureFunc, TEXT("LogConfigure"), isError);

    SET_FUNC(CreateMediaStreamConstraintsFunc, CreateMediaStreamConstraints, isError);
    SET_FUNC(CreateAudioDataCapturerFunc, CreateAudioDataCapturer, isError);
    SET_FUNC(CreateVideoDeviceCapturerFunc, CreateVideoDeviceCapturer, isError);
    SET_FUNC(CreateByteArrayCapturerFunc, CreateByteArrayCapturer, isError);
    SET_FUNC(CreateByteArrayRendererFunc, CreateByteArrayRenderer, isError);
    SET_FUNC(CreateLSTrackOptionFunc, CreateLSTrackOption, isError);
    SET_FUNC(CreateLSTrackFunc, CreateLSTrack, isError);
    SET_FUNC(CreateSendingVideoOptionFunc, CreateSendingVideoOption, isError);
    SET_FUNC(CreateOptionFunc, CreateOption, isError);
    SET_FUNC(CreateSendingOptionFunc, CreateSendingOption, isError);
    SET_FUNC(CreateReceivingOptionFunc, CreateReceivingOption, isError);
    SET_FUNC(CreateProxyOptionFunc, CreateProxyOption, isError);
    SET_FUNC(CreateLibWebrtcLogOptionFunc, CreateLibWebrtcLogOption, isError);
    SET_FUNC(CreateClientFunc, CreateClient, isError);
    SET_FUNC(CreateStringDictionaryFunc, CreateStringDictionary, isError);
    SET_FUNC(CreateStringListFunc, CreateStringList, isError);
    SET_FUNC(CodecUtil_IsH264SupportedFunc, CodecUtil_IsH264Supported, isError);

    SET_FUNC(DeviceUtil_GetDeviceFunc, DeviceUtil_GetAudioInputDeviceList, isError);
    SET_FUNC(DeviceUtil_GetDeviceFunc, DeviceUtil_GetAudioOutputDeviceList, isError);
    SET_FUNC(DeviceUtil_GetDeviceFunc, DeviceUtil_GetVideoCapturerDeviceList, isError);
    SET_FUNC(DeviceUtil_GetDeviceFunc, DeviceUtil_GetVideoCapturerDeviceList, isError);
    SET_FUNC(DeviceUtil_GetCapabilitiesFunc, DeviceUtil_GetVideoCapturerDeviceCapabilities, isError);

    SET_FUNC(Logger::LogWriteFunc, Debug, isError);
    SET_FUNC(Logger::LogWriteFunc, Info, isError);
    SET_FUNC(Logger::LogWriteFunc, Warn, isError);
    SET_FUNC(Logger::LogWriteFunc, Error, isError);

    if (isError)
    {
        UE_LOG(LogLiveStreaming, Error, TEXT("Failed to load funcions"));
        return;
    }

    pSetSearch(TCHAR_TO_ANSI(*dllPath));

    initializeClientModule();

    FString logDirPath = FPaths::ProjectLogDir();
    UE_LOG(LogLiveStreaming, Log, TEXT("LogDir=%s"), *logDirPath);
    pSetLogPropertyFunc("LogDir", TCHAR_TO_ANSI(*logDirPath));
    pSetLogPropertyFunc("LogName", "LiveStreamingClient");

    FString configPath = FPaths::Combine(dllPath, TEXT("Log4net.Config.xml"));
    UE_LOG(LogLiveStreaming, Log, TEXT("log config file=%s"), *configPath);
    pLogConfigureFunc(TCHAR_TO_ANSI(*configPath));

    UE_LOG(LogLiveStreaming, Log, TEXT("Dll loaded"));
}

void FLiveStreaming_ClientSDKModule::ShutdownModule()
{
    // Free the dll handle
    FPlatformProcess::FreeDllHandle(moduleAssemb);
    FPlatformProcess::FreeDllHandle(moduleClient);
    moduleAssemb = nullptr;
    moduleClient = nullptr;
}

void* FLiveStreaming_ClientSDKModule::LoadDllFile(FString dirPath, FString dllName)
{
    FString dllFilePath = FPaths::Combine(dirPath, dllName);
    UE_LOG(LogLiveStreaming, Log, TEXT("LoadModule Start filepath : %s"), *dllFilePath);
    return !dllFilePath.IsEmpty() ? FPlatformProcess::GetDllHandle(*dllFilePath) : nullptr;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FLiveStreaming_ClientSDKModule, LiveStreaming_ClientSDK)
