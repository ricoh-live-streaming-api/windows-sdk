// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/event/LSAddRemoteTrackEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSAddRemoteTrackEvent() {}
// Cross Module References
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSAddRemoteTrackEvent();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSAddRemoteTrackEvent_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrackEventBase();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSAddRemoteTrackEvent::execGetMuteType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSMuteType*)Z_Param__Result=P_THIS->GetMuteType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSAddRemoteTrackEvent::execGetMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetMetadata();
		P_NATIVE_END;
	}
	void ULSAddRemoteTrackEvent::StaticRegisterNativesULSAddRemoteTrackEvent()
	{
		UClass* Class = ULSAddRemoteTrackEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMetadata", &ULSAddRemoteTrackEvent::execGetMetadata },
			{ "GetMuteType", &ULSAddRemoteTrackEvent::execGetMuteType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics
	{
		struct LSAddRemoteTrackEvent_eventGetMetadata_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSAddRemoteTrackEvent_eventGetMetadata_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSAddRemoteTrackEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSAddRemoteTrackEvent, nullptr, "GetMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::LSAddRemoteTrackEvent_eventGetMetadata_Parms), Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics
	{
		struct LSAddRemoteTrackEvent_eventGetMuteType_Parms
		{
			ELSMuteType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSAddRemoteTrackEvent_eventGetMuteType_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType, METADATA_PARAMS(nullptr, 0) }; // 2148500874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSAddRemoteTrackEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSAddRemoteTrackEvent, nullptr, "GetMuteType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::LSAddRemoteTrackEvent_eventGetMuteType_Parms), Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSAddRemoteTrackEvent);
	UClass* Z_Construct_UClass_ULSAddRemoteTrackEvent_NoRegister()
	{
		return ULSAddRemoteTrackEvent::StaticClass();
	}
	struct Z_Construct_UClass_ULSAddRemoteTrackEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSAddRemoteTrackEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULSMediaStreamTrackEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSAddRemoteTrackEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMetadata, "GetMetadata" }, // 734696257
		{ &Z_Construct_UFunction_ULSAddRemoteTrackEvent_GetMuteType, "GetMuteType" }, // 2738134079
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSAddRemoteTrackEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "event/LSAddRemoteTrackEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/event/LSAddRemoteTrackEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSAddRemoteTrackEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSAddRemoteTrackEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSAddRemoteTrackEvent_Statics::ClassParams = {
		&ULSAddRemoteTrackEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSAddRemoteTrackEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSAddRemoteTrackEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSAddRemoteTrackEvent()
	{
		if (!Z_Registration_Info_UClass_ULSAddRemoteTrackEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSAddRemoteTrackEvent.OuterSingleton, Z_Construct_UClass_ULSAddRemoteTrackEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSAddRemoteTrackEvent.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSAddRemoteTrackEvent>()
	{
		return ULSAddRemoteTrackEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSAddRemoteTrackEvent);
	ULSAddRemoteTrackEvent::~ULSAddRemoteTrackEvent() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSAddRemoteTrackEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSAddRemoteTrackEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSAddRemoteTrackEvent, ULSAddRemoteTrackEvent::StaticClass, TEXT("ULSAddRemoteTrackEvent"), &Z_Registration_Info_UClass_ULSAddRemoteTrackEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSAddRemoteTrackEvent), 1249213885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSAddRemoteTrackEvent_h_1679402550(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSAddRemoteTrackEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSAddRemoteTrackEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
