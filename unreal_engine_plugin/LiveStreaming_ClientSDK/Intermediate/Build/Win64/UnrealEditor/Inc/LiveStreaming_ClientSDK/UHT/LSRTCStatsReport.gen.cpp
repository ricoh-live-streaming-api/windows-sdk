// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSRTCStatsReport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSRTCStatsReport() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSRTCStats_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSRTCStatsReport();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSRTCStatsReport_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSRTCStatsReport::execGetStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,ULSRTCStats*>*)Z_Param__Result=P_THIS->GetStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSRTCStatsReport::execGetTimestampUs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetTimestampUs();
		P_NATIVE_END;
	}
	void ULSRTCStatsReport::StaticRegisterNativesULSRTCStatsReport()
	{
		UClass* Class = ULSRTCStatsReport::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStats", &ULSRTCStatsReport::execGetStats },
			{ "GetTimestampUs", &ULSRTCStatsReport::execGetTimestampUs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics
	{
		struct LSRTCStatsReport_eventGetStats_Parms
		{
			TMap<FString,ULSRTCStats*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ULSRTCStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSRTCStatsReport_eventGetStats_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSRTCStatsReport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSRTCStatsReport, nullptr, "GetStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::LSRTCStatsReport_eventGetStats_Parms), Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSRTCStatsReport_GetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSRTCStatsReport_GetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics
	{
		struct LSRTCStatsReport_eventGetTimestampUs_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSRTCStatsReport_eventGetTimestampUs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSRTCStatsReport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSRTCStatsReport, nullptr, "GetTimestampUs", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics::LSRTCStatsReport_eventGetTimestampUs_Parms), Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSRTCStatsReport);
	UClass* Z_Construct_UClass_ULSRTCStatsReport_NoRegister()
	{
		return ULSRTCStatsReport::StaticClass();
	}
	struct Z_Construct_UClass_ULSRTCStatsReport_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSRTCStatsReport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSRTCStatsReport_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSRTCStatsReport_GetStats, "GetStats" }, // 2967543308
		{ &Z_Construct_UFunction_ULSRTCStatsReport_GetTimestampUs, "GetTimestampUs" }, // 1507559786
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSRTCStatsReport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "webrtc/LSRTCStatsReport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSRTCStatsReport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSRTCStatsReport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSRTCStatsReport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSRTCStatsReport_Statics::ClassParams = {
		&ULSRTCStatsReport::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSRTCStatsReport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSRTCStatsReport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSRTCStatsReport()
	{
		if (!Z_Registration_Info_UClass_ULSRTCStatsReport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSRTCStatsReport.OuterSingleton, Z_Construct_UClass_ULSRTCStatsReport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSRTCStatsReport.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSRTCStatsReport>()
	{
		return ULSRTCStatsReport::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSRTCStatsReport);
	ULSRTCStatsReport::~ULSRTCStatsReport() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSRTCStatsReport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSRTCStatsReport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSRTCStatsReport, ULSRTCStatsReport::StaticClass, TEXT("ULSRTCStatsReport"), &Z_Registration_Info_UClass_ULSRTCStatsReport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSRTCStatsReport), 891465478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSRTCStatsReport_h_1760599601(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSRTCStatsReport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSRTCStatsReport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
