// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSDeviceUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSDeviceUtil() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSDeviceInfo_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSDeviceUtil();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSDeviceUtil_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoCapturerDeviceCapability_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSDeviceUtil::execGetVideoCapturerDeviceCapabilities)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULSVideoCapturerDeviceCapability*>*)Z_Param__Result=ULSDeviceUtil::GetVideoCapturerDeviceCapabilities(Z_Param_deviceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSDeviceUtil::execGetVideoCapturerDeviceList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULSDeviceInfo*>*)Z_Param__Result=ULSDeviceUtil::GetVideoCapturerDeviceList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSDeviceUtil::execGetAudioOutputDeviceList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULSDeviceInfo*>*)Z_Param__Result=ULSDeviceUtil::GetAudioOutputDeviceList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSDeviceUtil::execGetAudioInputDeviceList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULSDeviceInfo*>*)Z_Param__Result=ULSDeviceUtil::GetAudioInputDeviceList();
		P_NATIVE_END;
	}
	void ULSDeviceUtil::StaticRegisterNativesULSDeviceUtil()
	{
		UClass* Class = ULSDeviceUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioInputDeviceList", &ULSDeviceUtil::execGetAudioInputDeviceList },
			{ "GetAudioOutputDeviceList", &ULSDeviceUtil::execGetAudioOutputDeviceList },
			{ "GetVideoCapturerDeviceCapabilities", &ULSDeviceUtil::execGetVideoCapturerDeviceCapabilities },
			{ "GetVideoCapturerDeviceList", &ULSDeviceUtil::execGetVideoCapturerDeviceList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics
	{
		struct LSDeviceUtil_eventGetAudioInputDeviceList_Parms
		{
			TArray<ULSDeviceInfo*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULSDeviceInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSDeviceUtil_eventGetAudioInputDeviceList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSDeviceUtil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSDeviceUtil, nullptr, "GetAudioInputDeviceList", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::LSDeviceUtil_eventGetAudioInputDeviceList_Parms), Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics
	{
		struct LSDeviceUtil_eventGetAudioOutputDeviceList_Parms
		{
			TArray<ULSDeviceInfo*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULSDeviceInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSDeviceUtil_eventGetAudioOutputDeviceList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSDeviceUtil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSDeviceUtil, nullptr, "GetAudioOutputDeviceList", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::LSDeviceUtil_eventGetAudioOutputDeviceList_Parms), Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics
	{
		struct LSDeviceUtil_eventGetVideoCapturerDeviceCapabilities_Parms
		{
			FString deviceName;
			TArray<ULSVideoCapturerDeviceCapability*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::NewProp_deviceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSDeviceUtil_eventGetVideoCapturerDeviceCapabilities_Parms, deviceName), METADATA_PARAMS(Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::NewProp_deviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::NewProp_deviceName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULSVideoCapturerDeviceCapability_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSDeviceUtil_eventGetVideoCapturerDeviceCapabilities_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::NewProp_deviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSDeviceUtil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSDeviceUtil, nullptr, "GetVideoCapturerDeviceCapabilities", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::LSDeviceUtil_eventGetVideoCapturerDeviceCapabilities_Parms), Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics
	{
		struct LSDeviceUtil_eventGetVideoCapturerDeviceList_Parms
		{
			TArray<ULSDeviceInfo*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULSDeviceInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSDeviceUtil_eventGetVideoCapturerDeviceList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSDeviceUtil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSDeviceUtil, nullptr, "GetVideoCapturerDeviceList", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::LSDeviceUtil_eventGetVideoCapturerDeviceList_Parms), Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSDeviceUtil);
	UClass* Z_Construct_UClass_ULSDeviceUtil_NoRegister()
	{
		return ULSDeviceUtil::StaticClass();
	}
	struct Z_Construct_UClass_ULSDeviceUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSDeviceUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSDeviceUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSDeviceUtil_GetAudioInputDeviceList, "GetAudioInputDeviceList" }, // 4259182204
		{ &Z_Construct_UFunction_ULSDeviceUtil_GetAudioOutputDeviceList, "GetAudioOutputDeviceList" }, // 243983195
		{ &Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceCapabilities, "GetVideoCapturerDeviceCapabilities" }, // 2434329299
		{ &Z_Construct_UFunction_ULSDeviceUtil_GetVideoCapturerDeviceList, "GetVideoCapturerDeviceList" }, // 355219476
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSDeviceUtil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "webrtc/LSDeviceUtil.h" },
		{ "ModuleRelativePath", "Public/webrtc/LSDeviceUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSDeviceUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSDeviceUtil>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSDeviceUtil_Statics::ClassParams = {
		&ULSDeviceUtil::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULSDeviceUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSDeviceUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSDeviceUtil()
	{
		if (!Z_Registration_Info_UClass_ULSDeviceUtil.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSDeviceUtil.OuterSingleton, Z_Construct_UClass_ULSDeviceUtil_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSDeviceUtil.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSDeviceUtil>()
	{
		return ULSDeviceUtil::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSDeviceUtil);
	ULSDeviceUtil::~ULSDeviceUtil() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSDeviceUtil_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSDeviceUtil_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSDeviceUtil, ULSDeviceUtil::StaticClass, TEXT("ULSDeviceUtil"), &Z_Registration_Info_UClass_ULSDeviceUtil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSDeviceUtil), 718497112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSDeviceUtil_h_1200614211(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSDeviceUtil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSDeviceUtil_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
