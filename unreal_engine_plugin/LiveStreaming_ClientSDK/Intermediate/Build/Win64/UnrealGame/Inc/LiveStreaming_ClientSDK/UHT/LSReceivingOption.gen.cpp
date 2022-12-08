// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/LSReceivingOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSReceivingOption() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSReceivingOption();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSReceivingOption_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSReceivingOption::execGetEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSReceivingOption::execCreate)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Create(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void ULSReceivingOption::StaticRegisterNativesULSReceivingOption()
	{
		UClass* Class = ULSReceivingOption::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &ULSReceivingOption::execCreate },
			{ "GetEnabled", &ULSReceivingOption::execGetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSReceivingOption_Create_Statics
	{
		struct LSReceivingOption_eventCreate_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULSReceivingOption_Create_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LSReceivingOption_eventCreate_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULSReceivingOption_Create_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LSReceivingOption_eventCreate_Parms), &Z_Construct_UFunction_ULSReceivingOption_Create_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSReceivingOption_Create_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSReceivingOption_Create_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSReceivingOption_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "CPP_Default_bEnabled", "true" },
		{ "DisplayName", "Create Receiving Option" },
		{ "ModuleRelativePath", "Public/LSReceivingOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSReceivingOption_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSReceivingOption, nullptr, "Create", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSReceivingOption_Create_Statics::LSReceivingOption_eventCreate_Parms), Z_Construct_UFunction_ULSReceivingOption_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSReceivingOption_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSReceivingOption_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSReceivingOption_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSReceivingOption_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSReceivingOption_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics
	{
		struct LSReceivingOption_eventGetEnabled_Parms
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
	void Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LSReceivingOption_eventGetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LSReceivingOption_eventGetEnabled_Parms), &Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSReceivingOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSReceivingOption, nullptr, "GetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::LSReceivingOption_eventGetEnabled_Parms), Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSReceivingOption_GetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSReceivingOption_GetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSReceivingOption);
	UClass* Z_Construct_UClass_ULSReceivingOption_NoRegister()
	{
		return ULSReceivingOption::StaticClass();
	}
	struct Z_Construct_UClass_ULSReceivingOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSReceivingOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSReceivingOption_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSReceivingOption_Create, "Create" }, // 1937139868
		{ &Z_Construct_UFunction_ULSReceivingOption_GetEnabled, "GetEnabled" }, // 2988585583
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSReceivingOption_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LSReceivingOption.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LSReceivingOption.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSReceivingOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSReceivingOption>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSReceivingOption_Statics::ClassParams = {
		&ULSReceivingOption::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSReceivingOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSReceivingOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSReceivingOption()
	{
		if (!Z_Registration_Info_UClass_ULSReceivingOption.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSReceivingOption.OuterSingleton, Z_Construct_UClass_ULSReceivingOption_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSReceivingOption.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSReceivingOption>()
	{
		return ULSReceivingOption::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSReceivingOption);
	ULSReceivingOption::~ULSReceivingOption() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSReceivingOption_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSReceivingOption_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSReceivingOption, ULSReceivingOption::StaticClass, TEXT("ULSReceivingOption"), &Z_Registration_Info_UClass_ULSReceivingOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSReceivingOption), 474360621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSReceivingOption_h_2382879926(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSReceivingOption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSReceivingOption_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
