// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/LSSendingOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSSendingOption() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSSendingOption();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSSendingOption_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSSendingVideoOption_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSSendingOption::execGetVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSSendingVideoOption**)Z_Param__Result=P_THIS->GetVideo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSSendingOption::execCreate)
	{
		P_GET_OBJECT(ULSSendingVideoOption,Z_Param_sendingVideoOption);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSSendingOption**)Z_Param__Result=P_THIS->Create(Z_Param_sendingVideoOption,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void ULSSendingOption::StaticRegisterNativesULSSendingOption()
	{
		UClass* Class = ULSSendingOption::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &ULSSendingOption::execCreate },
			{ "GetVideo", &ULSSendingOption::execGetVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSSendingOption_Create_Statics
	{
		struct LSSendingOption_eventCreate_Parms
		{
			ULSSendingVideoOption* sendingVideoOption;
			bool bEnabled;
			ULSSendingOption* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sendingVideoOption;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSSendingOption_Create_Statics::NewProp_sendingVideoOption = { "sendingVideoOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingOption_eventCreate_Parms, sendingVideoOption), Z_Construct_UClass_ULSSendingVideoOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULSSendingOption_Create_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LSSendingOption_eventCreate_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULSSendingOption_Create_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LSSendingOption_eventCreate_Parms), &Z_Construct_UFunction_ULSSendingOption_Create_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSSendingOption_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingOption_eventCreate_Parms, ReturnValue), Z_Construct_UClass_ULSSendingOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSSendingOption_Create_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingOption_Create_Statics::NewProp_sendingVideoOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingOption_Create_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingOption_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSSendingOption_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "CPP_Default_bEnabled", "true" },
		{ "DisplayName", "Create Sending Option" },
		{ "ModuleRelativePath", "Public/LSSendingOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSSendingOption_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSSendingOption, nullptr, "Create", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSSendingOption_Create_Statics::LSSendingOption_eventCreate_Parms), Z_Construct_UFunction_ULSSendingOption_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingOption_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSSendingOption_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingOption_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSSendingOption_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSSendingOption_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics
	{
		struct LSSendingOption_eventGetVideo_Parms
		{
			ULSSendingVideoOption* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingOption_eventGetVideo_Parms, ReturnValue), Z_Construct_UClass_ULSSendingVideoOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSSendingOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSSendingOption, nullptr, "GetVideo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics::LSSendingOption_eventGetVideo_Parms), Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSSendingOption_GetVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSSendingOption_GetVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSSendingOption);
	UClass* Z_Construct_UClass_ULSSendingOption_NoRegister()
	{
		return ULSSendingOption::StaticClass();
	}
	struct Z_Construct_UClass_ULSSendingOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__sendingVideoOption_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__sendingVideoOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSSendingOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSSendingOption_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSSendingOption_Create, "Create" }, // 738489877
		{ &Z_Construct_UFunction_ULSSendingOption_GetVideo, "GetVideo" }, // 2023715338
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSSendingOption_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LSSendingOption.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LSSendingOption.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSSendingOption_Statics::NewProp__sendingVideoOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/LSSendingOption.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULSSendingOption_Statics::NewProp__sendingVideoOption = { "_sendingVideoOption", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSSendingOption, _sendingVideoOption), Z_Construct_UClass_ULSSendingVideoOption_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULSSendingOption_Statics::NewProp__sendingVideoOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSSendingOption_Statics::NewProp__sendingVideoOption_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULSSendingOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSSendingOption_Statics::NewProp__sendingVideoOption,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSSendingOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSSendingOption>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSSendingOption_Statics::ClassParams = {
		&ULSSendingOption::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULSSendingOption_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULSSendingOption_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULSSendingOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSSendingOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSSendingOption()
	{
		if (!Z_Registration_Info_UClass_ULSSendingOption.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSSendingOption.OuterSingleton, Z_Construct_UClass_ULSSendingOption_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSSendingOption.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSSendingOption>()
	{
		return ULSSendingOption::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSSendingOption);
	ULSSendingOption::~ULSSendingOption() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingOption_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingOption_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSSendingOption, ULSSendingOption::StaticClass, TEXT("ULSSendingOption"), &Z_Registration_Info_UClass_ULSSendingOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSSendingOption), 3539062399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingOption_h_2781116492(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingOption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingOption_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
