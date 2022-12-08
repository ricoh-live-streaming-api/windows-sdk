// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/event/LSChangeStabilityEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSChangeStabilityEvent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSChangeStabilityEvent();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSChangeStabilityEvent_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSChangeStabilityEvent::execGetStability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSStability*)Z_Param__Result=P_THIS->GetStability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSChangeStabilityEvent::execGetConnectionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetConnectionId();
		P_NATIVE_END;
	}
	void ULSChangeStabilityEvent::StaticRegisterNativesULSChangeStabilityEvent()
	{
		UClass* Class = ULSChangeStabilityEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConnectionId", &ULSChangeStabilityEvent::execGetConnectionId },
			{ "GetStability", &ULSChangeStabilityEvent::execGetStability },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics
	{
		struct LSChangeStabilityEvent_eventGetConnectionId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSChangeStabilityEvent_eventGetConnectionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSChangeStabilityEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSChangeStabilityEvent, nullptr, "GetConnectionId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics::LSChangeStabilityEvent_eventGetConnectionId_Parms), Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics
	{
		struct LSChangeStabilityEvent_eventGetStability_Parms
		{
			ELSStability ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSChangeStabilityEvent_eventGetStability_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability, METADATA_PARAMS(nullptr, 0) }; // 1397567122
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSChangeStabilityEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSChangeStabilityEvent, nullptr, "GetStability", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::LSChangeStabilityEvent_eventGetStability_Parms), Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSChangeStabilityEvent);
	UClass* Z_Construct_UClass_ULSChangeStabilityEvent_NoRegister()
	{
		return ULSChangeStabilityEvent::StaticClass();
	}
	struct Z_Construct_UClass_ULSChangeStabilityEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSChangeStabilityEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSChangeStabilityEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSChangeStabilityEvent_GetConnectionId, "GetConnectionId" }, // 12843022
		{ &Z_Construct_UFunction_ULSChangeStabilityEvent_GetStability, "GetStability" }, // 3527276887
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSChangeStabilityEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "event/LSChangeStabilityEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/event/LSChangeStabilityEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSChangeStabilityEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSChangeStabilityEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSChangeStabilityEvent_Statics::ClassParams = {
		&ULSChangeStabilityEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSChangeStabilityEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSChangeStabilityEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSChangeStabilityEvent()
	{
		if (!Z_Registration_Info_UClass_ULSChangeStabilityEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSChangeStabilityEvent.OuterSingleton, Z_Construct_UClass_ULSChangeStabilityEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSChangeStabilityEvent.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSChangeStabilityEvent>()
	{
		return ULSChangeStabilityEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSChangeStabilityEvent);
	ULSChangeStabilityEvent::~ULSChangeStabilityEvent() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSChangeStabilityEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSChangeStabilityEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSChangeStabilityEvent, ULSChangeStabilityEvent::StaticClass, TEXT("ULSChangeStabilityEvent"), &Z_Registration_Info_UClass_ULSChangeStabilityEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSChangeStabilityEvent), 3449123177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSChangeStabilityEvent_h_3298309555(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSChangeStabilityEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSChangeStabilityEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
