// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/event/LSUpdateMuteEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSUpdateMuteEvent() {}
// Cross Module References
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrackEventBase();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSUpdateMuteEvent();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSUpdateMuteEvent_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSUpdateMuteEvent::execGetMuteType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSMuteType*)Z_Param__Result=P_THIS->GetMuteType();
		P_NATIVE_END;
	}
	void ULSUpdateMuteEvent::StaticRegisterNativesULSUpdateMuteEvent()
	{
		UClass* Class = ULSUpdateMuteEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMuteType", &ULSUpdateMuteEvent::execGetMuteType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics
	{
		struct LSUpdateMuteEvent_eventGetMuteType_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSUpdateMuteEvent_eventGetMuteType_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType, METADATA_PARAMS(nullptr, 0) }; // 2148500874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSUpdateMuteEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSUpdateMuteEvent, nullptr, "GetMuteType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::LSUpdateMuteEvent_eventGetMuteType_Parms), Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSUpdateMuteEvent);
	UClass* Z_Construct_UClass_ULSUpdateMuteEvent_NoRegister()
	{
		return ULSUpdateMuteEvent::StaticClass();
	}
	struct Z_Construct_UClass_ULSUpdateMuteEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSUpdateMuteEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULSMediaStreamTrackEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSUpdateMuteEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSUpdateMuteEvent_GetMuteType, "GetMuteType" }, // 92314259
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSUpdateMuteEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "event/LSUpdateMuteEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/event/LSUpdateMuteEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSUpdateMuteEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSUpdateMuteEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSUpdateMuteEvent_Statics::ClassParams = {
		&ULSUpdateMuteEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSUpdateMuteEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSUpdateMuteEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSUpdateMuteEvent()
	{
		if (!Z_Registration_Info_UClass_ULSUpdateMuteEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSUpdateMuteEvent.OuterSingleton, Z_Construct_UClass_ULSUpdateMuteEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSUpdateMuteEvent.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSUpdateMuteEvent>()
	{
		return ULSUpdateMuteEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSUpdateMuteEvent);
	ULSUpdateMuteEvent::~ULSUpdateMuteEvent() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSUpdateMuteEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSUpdateMuteEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSUpdateMuteEvent, ULSUpdateMuteEvent::StaticClass, TEXT("ULSUpdateMuteEvent"), &Z_Registration_Info_UClass_ULSUpdateMuteEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSUpdateMuteEvent), 14756868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSUpdateMuteEvent_h_985072523(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSUpdateMuteEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSUpdateMuteEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
