// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/event/LSRemoveRemoteConnectionEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSRemoveRemoteConnectionEvent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSRemoveRemoteConnectionEvent();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSRemoveRemoteConnectionEvent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSRemoveRemoteConnectionEvent::execGetMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSRemoveRemoteConnectionEvent::execGetMediaStreamTracks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULSMediaStreamTrack*>*)Z_Param__Result=P_THIS->GetMediaStreamTracks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSRemoveRemoteConnectionEvent::execGetConnectionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetConnectionId();
		P_NATIVE_END;
	}
	void ULSRemoveRemoteConnectionEvent::StaticRegisterNativesULSRemoveRemoteConnectionEvent()
	{
		UClass* Class = ULSRemoveRemoteConnectionEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConnectionId", &ULSRemoveRemoteConnectionEvent::execGetConnectionId },
			{ "GetMediaStreamTracks", &ULSRemoveRemoteConnectionEvent::execGetMediaStreamTracks },
			{ "GetMetadata", &ULSRemoveRemoteConnectionEvent::execGetMetadata },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics
	{
		struct LSRemoveRemoteConnectionEvent_eventGetConnectionId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSRemoveRemoteConnectionEvent_eventGetConnectionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSRemoveRemoteConnectionEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSRemoveRemoteConnectionEvent, nullptr, "GetConnectionId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics::LSRemoveRemoteConnectionEvent_eventGetConnectionId_Parms), Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics
	{
		struct LSRemoveRemoteConnectionEvent_eventGetMediaStreamTracks_Parms
		{
			TArray<ULSMediaStreamTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULSMediaStreamTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSRemoveRemoteConnectionEvent_eventGetMediaStreamTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSRemoveRemoteConnectionEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSRemoveRemoteConnectionEvent, nullptr, "GetMediaStreamTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::LSRemoveRemoteConnectionEvent_eventGetMediaStreamTracks_Parms), Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics
	{
		struct LSRemoveRemoteConnectionEvent_eventGetMetadata_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSRemoveRemoteConnectionEvent_eventGetMetadata_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSRemoveRemoteConnectionEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSRemoveRemoteConnectionEvent, nullptr, "GetMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::LSRemoveRemoteConnectionEvent_eventGetMetadata_Parms), Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSRemoveRemoteConnectionEvent);
	UClass* Z_Construct_UClass_ULSRemoveRemoteConnectionEvent_NoRegister()
	{
		return ULSRemoveRemoteConnectionEvent::StaticClass();
	}
	struct Z_Construct_UClass_ULSRemoveRemoteConnectionEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSRemoveRemoteConnectionEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSRemoveRemoteConnectionEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetConnectionId, "GetConnectionId" }, // 4038167423
		{ &Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMediaStreamTracks, "GetMediaStreamTracks" }, // 3056646969
		{ &Z_Construct_UFunction_ULSRemoveRemoteConnectionEvent_GetMetadata, "GetMetadata" }, // 4039747058
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSRemoveRemoteConnectionEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "event/LSRemoveRemoteConnectionEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/event/LSRemoveRemoteConnectionEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSRemoveRemoteConnectionEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSRemoveRemoteConnectionEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSRemoveRemoteConnectionEvent_Statics::ClassParams = {
		&ULSRemoveRemoteConnectionEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSRemoveRemoteConnectionEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSRemoveRemoteConnectionEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSRemoveRemoteConnectionEvent()
	{
		if (!Z_Registration_Info_UClass_ULSRemoveRemoteConnectionEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSRemoveRemoteConnectionEvent.OuterSingleton, Z_Construct_UClass_ULSRemoveRemoteConnectionEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSRemoveRemoteConnectionEvent.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSRemoveRemoteConnectionEvent>()
	{
		return ULSRemoveRemoteConnectionEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSRemoveRemoteConnectionEvent);
	ULSRemoveRemoteConnectionEvent::~ULSRemoveRemoteConnectionEvent() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSRemoveRemoteConnectionEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSRemoveRemoteConnectionEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSRemoveRemoteConnectionEvent, ULSRemoveRemoteConnectionEvent::StaticClass, TEXT("ULSRemoveRemoteConnectionEvent"), &Z_Registration_Info_UClass_ULSRemoveRemoteConnectionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSRemoveRemoteConnectionEvent), 257582602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSRemoveRemoteConnectionEvent_h_3077170473(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSRemoveRemoteConnectionEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSRemoveRemoteConnectionEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
