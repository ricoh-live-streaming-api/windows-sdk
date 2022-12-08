// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/event/LSSDKErrorEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSSDKErrorEvent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSErrorDetail_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSSDKErrorEvent();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSSDKErrorEvent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSSDKErrorEvent::execToReportString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToReportString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSSDKErrorEvent::execGetDetail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSErrorDetail**)Z_Param__Result=P_THIS->GetDetail();
		P_NATIVE_END;
	}
	void ULSSDKErrorEvent::StaticRegisterNativesULSSDKErrorEvent()
	{
		UClass* Class = ULSSDKErrorEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDetail", &ULSSDKErrorEvent::execGetDetail },
			{ "ToReportString", &ULSSDKErrorEvent::execToReportString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics
	{
		struct LSSDKErrorEvent_eventGetDetail_Parms
		{
			ULSErrorDetail* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSDKErrorEvent_eventGetDetail_Parms, ReturnValue), Z_Construct_UClass_ULSErrorDetail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSSDKErrorEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSSDKErrorEvent, nullptr, "GetDetail", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics::LSSDKErrorEvent_eventGetDetail_Parms), Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics
	{
		struct LSSDKErrorEvent_eventToReportString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSDKErrorEvent_eventToReportString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSSDKErrorEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSSDKErrorEvent, nullptr, "ToReportString", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics::LSSDKErrorEvent_eventToReportString_Parms), Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSSDKErrorEvent);
	UClass* Z_Construct_UClass_ULSSDKErrorEvent_NoRegister()
	{
		return ULSSDKErrorEvent::StaticClass();
	}
	struct Z_Construct_UClass_ULSSDKErrorEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__lsErrorDetail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__lsErrorDetail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSSDKErrorEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSSDKErrorEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSSDKErrorEvent_GetDetail, "GetDetail" }, // 3534081238
		{ &Z_Construct_UFunction_ULSSDKErrorEvent_ToReportString, "ToReportString" }, // 524435513
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSSDKErrorEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "event/LSSDKErrorEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/event/LSSDKErrorEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSSDKErrorEvent_Statics::NewProp__lsErrorDetail_MetaData[] = {
		{ "ModuleRelativePath", "Public/event/LSSDKErrorEvent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULSSDKErrorEvent_Statics::NewProp__lsErrorDetail = { "_lsErrorDetail", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSSDKErrorEvent, _lsErrorDetail), Z_Construct_UClass_ULSErrorDetail_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULSSDKErrorEvent_Statics::NewProp__lsErrorDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSSDKErrorEvent_Statics::NewProp__lsErrorDetail_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULSSDKErrorEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSSDKErrorEvent_Statics::NewProp__lsErrorDetail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSSDKErrorEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSSDKErrorEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSSDKErrorEvent_Statics::ClassParams = {
		&ULSSDKErrorEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULSSDKErrorEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULSSDKErrorEvent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULSSDKErrorEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSSDKErrorEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSSDKErrorEvent()
	{
		if (!Z_Registration_Info_UClass_ULSSDKErrorEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSSDKErrorEvent.OuterSingleton, Z_Construct_UClass_ULSSDKErrorEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSSDKErrorEvent.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSSDKErrorEvent>()
	{
		return ULSSDKErrorEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSSDKErrorEvent);
	ULSSDKErrorEvent::~ULSSDKErrorEvent() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSSDKErrorEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSSDKErrorEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSSDKErrorEvent, ULSSDKErrorEvent::StaticClass, TEXT("ULSSDKErrorEvent"), &Z_Registration_Info_UClass_ULSSDKErrorEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSSDKErrorEvent), 3865646255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSSDKErrorEvent_h_1507935189(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSSDKErrorEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSSDKErrorEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
