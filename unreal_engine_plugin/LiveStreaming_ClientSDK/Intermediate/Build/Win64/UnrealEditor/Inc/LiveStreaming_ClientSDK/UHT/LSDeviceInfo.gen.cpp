// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSDeviceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSDeviceInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSDeviceInfo();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSDeviceInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSDeviceInfo::execGetUniqueName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUniqueName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSDeviceInfo::execGetDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDeviceName();
		P_NATIVE_END;
	}
	void ULSDeviceInfo::StaticRegisterNativesULSDeviceInfo()
	{
		UClass* Class = ULSDeviceInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDeviceName", &ULSDeviceInfo::execGetDeviceName },
			{ "GetUniqueName", &ULSDeviceInfo::execGetUniqueName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics
	{
		struct LSDeviceInfo_eventGetDeviceName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSDeviceInfo_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSDeviceInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSDeviceInfo, nullptr, "GetDeviceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics::LSDeviceInfo_eventGetDeviceName_Parms), Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics
	{
		struct LSDeviceInfo_eventGetUniqueName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSDeviceInfo_eventGetUniqueName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSDeviceInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSDeviceInfo, nullptr, "GetUniqueName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics::LSDeviceInfo_eventGetUniqueName_Parms), Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSDeviceInfo);
	UClass* Z_Construct_UClass_ULSDeviceInfo_NoRegister()
	{
		return ULSDeviceInfo::StaticClass();
	}
	struct Z_Construct_UClass_ULSDeviceInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSDeviceInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSDeviceInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSDeviceInfo_GetDeviceName, "GetDeviceName" }, // 3098403216
		{ &Z_Construct_UFunction_ULSDeviceInfo_GetUniqueName, "GetUniqueName" }, // 2548913077
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSDeviceInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "webrtc/LSDeviceInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSDeviceInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSDeviceInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSDeviceInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSDeviceInfo_Statics::ClassParams = {
		&ULSDeviceInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSDeviceInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSDeviceInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSDeviceInfo()
	{
		if (!Z_Registration_Info_UClass_ULSDeviceInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSDeviceInfo.OuterSingleton, Z_Construct_UClass_ULSDeviceInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSDeviceInfo.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSDeviceInfo>()
	{
		return ULSDeviceInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSDeviceInfo);
	ULSDeviceInfo::~ULSDeviceInfo() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSDeviceInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSDeviceInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSDeviceInfo, ULSDeviceInfo::StaticClass, TEXT("ULSDeviceInfo"), &Z_Registration_Info_UClass_ULSDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSDeviceInfo), 3919488380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSDeviceInfo_h_4052552756(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSDeviceInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSDeviceInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
