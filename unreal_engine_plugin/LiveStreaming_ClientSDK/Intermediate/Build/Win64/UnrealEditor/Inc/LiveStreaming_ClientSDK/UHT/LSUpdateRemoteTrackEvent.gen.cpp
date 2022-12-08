// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/event/LSUpdateRemoteTrackEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSUpdateRemoteTrackEvent() {}
// Cross Module References
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrackEventBase();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSUpdateRemoteTrackEvent();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSUpdateRemoteTrackEvent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSUpdateRemoteTrackEvent::execGetMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetMetadata();
		P_NATIVE_END;
	}
	void ULSUpdateRemoteTrackEvent::StaticRegisterNativesULSUpdateRemoteTrackEvent()
	{
		UClass* Class = ULSUpdateRemoteTrackEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMetadata", &ULSUpdateRemoteTrackEvent::execGetMetadata },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics
	{
		struct LSUpdateRemoteTrackEvent_eventGetMetadata_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSUpdateRemoteTrackEvent_eventGetMetadata_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSUpdateRemoteTrackEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSUpdateRemoteTrackEvent, nullptr, "GetMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::LSUpdateRemoteTrackEvent_eventGetMetadata_Parms), Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSUpdateRemoteTrackEvent);
	UClass* Z_Construct_UClass_ULSUpdateRemoteTrackEvent_NoRegister()
	{
		return ULSUpdateRemoteTrackEvent::StaticClass();
	}
	struct Z_Construct_UClass_ULSUpdateRemoteTrackEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSUpdateRemoteTrackEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULSMediaStreamTrackEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSUpdateRemoteTrackEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSUpdateRemoteTrackEvent_GetMetadata, "GetMetadata" }, // 937712260
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSUpdateRemoteTrackEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "event/LSUpdateRemoteTrackEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/event/LSUpdateRemoteTrackEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSUpdateRemoteTrackEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSUpdateRemoteTrackEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSUpdateRemoteTrackEvent_Statics::ClassParams = {
		&ULSUpdateRemoteTrackEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSUpdateRemoteTrackEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSUpdateRemoteTrackEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSUpdateRemoteTrackEvent()
	{
		if (!Z_Registration_Info_UClass_ULSUpdateRemoteTrackEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSUpdateRemoteTrackEvent.OuterSingleton, Z_Construct_UClass_ULSUpdateRemoteTrackEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSUpdateRemoteTrackEvent.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSUpdateRemoteTrackEvent>()
	{
		return ULSUpdateRemoteTrackEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSUpdateRemoteTrackEvent);
	ULSUpdateRemoteTrackEvent::~ULSUpdateRemoteTrackEvent() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSUpdateRemoteTrackEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSUpdateRemoteTrackEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSUpdateRemoteTrackEvent, ULSUpdateRemoteTrackEvent::StaticClass, TEXT("ULSUpdateRemoteTrackEvent"), &Z_Registration_Info_UClass_ULSUpdateRemoteTrackEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSUpdateRemoteTrackEvent), 195151694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSUpdateRemoteTrackEvent_h_984877509(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSUpdateRemoteTrackEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSUpdateRemoteTrackEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
