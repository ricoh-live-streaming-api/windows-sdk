// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSCodecUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSCodecUtil() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSCodecUtil();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSCodecUtil_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSCodecUtil::execIsH264Supported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULSCodecUtil::IsH264Supported();
		P_NATIVE_END;
	}
	void ULSCodecUtil::StaticRegisterNativesULSCodecUtil()
	{
		UClass* Class = ULSCodecUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsH264Supported", &ULSCodecUtil::execIsH264Supported },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics
	{
		struct LSCodecUtil_eventIsH264Supported_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LSCodecUtil_eventIsH264Supported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LSCodecUtil_eventIsH264Supported_Parms), &Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSCodecUtil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSCodecUtil, nullptr, "IsH264Supported", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::LSCodecUtil_eventIsH264Supported_Parms), Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSCodecUtil_IsH264Supported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSCodecUtil_IsH264Supported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSCodecUtil);
	UClass* Z_Construct_UClass_ULSCodecUtil_NoRegister()
	{
		return ULSCodecUtil::StaticClass();
	}
	struct Z_Construct_UClass_ULSCodecUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSCodecUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSCodecUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSCodecUtil_IsH264Supported, "IsH264Supported" }, // 2931765924
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSCodecUtil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "webrtc/LSCodecUtil.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSCodecUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSCodecUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSCodecUtil>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSCodecUtil_Statics::ClassParams = {
		&ULSCodecUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSCodecUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSCodecUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSCodecUtil()
	{
		if (!Z_Registration_Info_UClass_ULSCodecUtil.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSCodecUtil.OuterSingleton, Z_Construct_UClass_ULSCodecUtil_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSCodecUtil.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSCodecUtil>()
	{
		return ULSCodecUtil::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSCodecUtil);
	ULSCodecUtil::~ULSCodecUtil() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSCodecUtil_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSCodecUtil_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSCodecUtil, ULSCodecUtil::StaticClass, TEXT("ULSCodecUtil"), &Z_Registration_Info_UClass_ULSCodecUtil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSCodecUtil), 1247905680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSCodecUtil_h_1536561710(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSCodecUtil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSCodecUtil_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
