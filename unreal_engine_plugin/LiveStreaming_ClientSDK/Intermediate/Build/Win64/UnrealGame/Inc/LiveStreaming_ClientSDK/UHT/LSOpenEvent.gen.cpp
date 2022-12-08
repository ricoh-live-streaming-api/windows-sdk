// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/event/LSOpenEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSOpenEvent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSOpenEvent();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSOpenEvent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSOpenEvent::execGetAccessTokenJson)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccessTokenJson();
		P_NATIVE_END;
	}
	void ULSOpenEvent::StaticRegisterNativesULSOpenEvent()
	{
		UClass* Class = ULSOpenEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccessTokenJson", &ULSOpenEvent::execGetAccessTokenJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics
	{
		struct LSOpenEvent_eventGetAccessTokenJson_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOpenEvent_eventGetAccessTokenJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSOpenEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOpenEvent, nullptr, "GetAccessTokenJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics::LSOpenEvent_eventGetAccessTokenJson_Parms), Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSOpenEvent);
	UClass* Z_Construct_UClass_ULSOpenEvent_NoRegister()
	{
		return ULSOpenEvent::StaticClass();
	}
	struct Z_Construct_UClass_ULSOpenEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSOpenEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSOpenEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSOpenEvent_GetAccessTokenJson, "GetAccessTokenJson" }, // 2248828840
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSOpenEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "event/LSOpenEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/event/LSOpenEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSOpenEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSOpenEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSOpenEvent_Statics::ClassParams = {
		&ULSOpenEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSOpenEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSOpenEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSOpenEvent()
	{
		if (!Z_Registration_Info_UClass_ULSOpenEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSOpenEvent.OuterSingleton, Z_Construct_UClass_ULSOpenEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSOpenEvent.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSOpenEvent>()
	{
		return ULSOpenEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSOpenEvent);
	ULSOpenEvent::~ULSOpenEvent() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSOpenEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSOpenEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSOpenEvent, ULSOpenEvent::StaticClass, TEXT("ULSOpenEvent"), &Z_Registration_Info_UClass_ULSOpenEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSOpenEvent), 1274853100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSOpenEvent_h_3598308140(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSOpenEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSOpenEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
