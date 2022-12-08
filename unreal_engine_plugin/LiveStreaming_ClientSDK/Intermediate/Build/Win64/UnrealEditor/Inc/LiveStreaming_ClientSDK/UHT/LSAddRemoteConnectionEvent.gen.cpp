// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/event/LSAddRemoteConnectionEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSAddRemoteConnectionEvent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSAddRemoteConnectionEvent();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSAddRemoteConnectionEvent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSAddRemoteConnectionEvent::execGetMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSAddRemoteConnectionEvent::execGetConnectionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetConnectionId();
		P_NATIVE_END;
	}
	void ULSAddRemoteConnectionEvent::StaticRegisterNativesULSAddRemoteConnectionEvent()
	{
		UClass* Class = ULSAddRemoteConnectionEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConnectionId", &ULSAddRemoteConnectionEvent::execGetConnectionId },
			{ "GetMetadata", &ULSAddRemoteConnectionEvent::execGetMetadata },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics
	{
		struct LSAddRemoteConnectionEvent_eventGetConnectionId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSAddRemoteConnectionEvent_eventGetConnectionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSAddRemoteConnectionEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSAddRemoteConnectionEvent, nullptr, "GetConnectionId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics::LSAddRemoteConnectionEvent_eventGetConnectionId_Parms), Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics
	{
		struct LSAddRemoteConnectionEvent_eventGetMetadata_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSAddRemoteConnectionEvent_eventGetMetadata_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSAddRemoteConnectionEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSAddRemoteConnectionEvent, nullptr, "GetMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::LSAddRemoteConnectionEvent_eventGetMetadata_Parms), Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSAddRemoteConnectionEvent);
	UClass* Z_Construct_UClass_ULSAddRemoteConnectionEvent_NoRegister()
	{
		return ULSAddRemoteConnectionEvent::StaticClass();
	}
	struct Z_Construct_UClass_ULSAddRemoteConnectionEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSAddRemoteConnectionEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSAddRemoteConnectionEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetConnectionId, "GetConnectionId" }, // 976758523
		{ &Z_Construct_UFunction_ULSAddRemoteConnectionEvent_GetMetadata, "GetMetadata" }, // 3017372177
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSAddRemoteConnectionEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "event/LSAddRemoteConnectionEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/event/LSAddRemoteConnectionEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSAddRemoteConnectionEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSAddRemoteConnectionEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSAddRemoteConnectionEvent_Statics::ClassParams = {
		&ULSAddRemoteConnectionEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSAddRemoteConnectionEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSAddRemoteConnectionEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSAddRemoteConnectionEvent()
	{
		if (!Z_Registration_Info_UClass_ULSAddRemoteConnectionEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSAddRemoteConnectionEvent.OuterSingleton, Z_Construct_UClass_ULSAddRemoteConnectionEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSAddRemoteConnectionEvent.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSAddRemoteConnectionEvent>()
	{
		return ULSAddRemoteConnectionEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSAddRemoteConnectionEvent);
	ULSAddRemoteConnectionEvent::~ULSAddRemoteConnectionEvent() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSAddRemoteConnectionEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSAddRemoteConnectionEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSAddRemoteConnectionEvent, ULSAddRemoteConnectionEvent::StaticClass, TEXT("ULSAddRemoteConnectionEvent"), &Z_Registration_Info_UClass_ULSAddRemoteConnectionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSAddRemoteConnectionEvent), 1608541138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSAddRemoteConnectionEvent_h_1506184363(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSAddRemoteConnectionEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSAddRemoteConnectionEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
