// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/LSErrorDetail.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSErrorDetail() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSErrorDetail();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSErrorDetail_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSErrorDetail::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSErrorType*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSErrorDetail::execGetError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSErrorDetail::execGetCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCode();
		P_NATIVE_END;
	}
	void ULSErrorDetail::StaticRegisterNativesULSErrorDetail()
	{
		UClass* Class = ULSErrorDetail::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCode", &ULSErrorDetail::execGetCode },
			{ "GetError", &ULSErrorDetail::execGetError },
			{ "GetType", &ULSErrorDetail::execGetType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics
	{
		struct LSErrorDetail_eventGetCode_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSErrorDetail_eventGetCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSErrorDetail.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSErrorDetail, nullptr, "GetCode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics::LSErrorDetail_eventGetCode_Parms), Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSErrorDetail_GetCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSErrorDetail_GetCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSErrorDetail_GetError_Statics
	{
		struct LSErrorDetail_eventGetError_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSErrorDetail_GetError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSErrorDetail_eventGetError_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSErrorDetail_GetError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSErrorDetail_GetError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSErrorDetail_GetError_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSErrorDetail.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSErrorDetail_GetError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSErrorDetail, nullptr, "GetError", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSErrorDetail_GetError_Statics::LSErrorDetail_eventGetError_Parms), Z_Construct_UFunction_ULSErrorDetail_GetError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSErrorDetail_GetError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSErrorDetail_GetError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSErrorDetail_GetError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSErrorDetail_GetError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSErrorDetail_GetError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSErrorDetail_GetType_Statics
	{
		struct LSErrorDetail_eventGetType_Parms
		{
			ELSErrorType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSErrorDetail_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType, METADATA_PARAMS(nullptr, 0) }; // 1651739576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSErrorDetail.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSErrorDetail, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::LSErrorDetail_eventGetType_Parms), Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSErrorDetail_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSErrorDetail_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSErrorDetail);
	UClass* Z_Construct_UClass_ULSErrorDetail_NoRegister()
	{
		return ULSErrorDetail::StaticClass();
	}
	struct Z_Construct_UClass_ULSErrorDetail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSErrorDetail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSErrorDetail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSErrorDetail_GetCode, "GetCode" }, // 342122688
		{ &Z_Construct_UFunction_ULSErrorDetail_GetError, "GetError" }, // 3815503681
		{ &Z_Construct_UFunction_ULSErrorDetail_GetType, "GetType" }, // 4104441984
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSErrorDetail_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LSErrorDetail.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LSErrorDetail.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSErrorDetail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSErrorDetail>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSErrorDetail_Statics::ClassParams = {
		&ULSErrorDetail::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSErrorDetail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSErrorDetail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSErrorDetail()
	{
		if (!Z_Registration_Info_UClass_ULSErrorDetail.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSErrorDetail.OuterSingleton, Z_Construct_UClass_ULSErrorDetail_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSErrorDetail.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSErrorDetail>()
	{
		return ULSErrorDetail::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSErrorDetail);
	ULSErrorDetail::~ULSErrorDetail() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSErrorDetail_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSErrorDetail_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSErrorDetail, ULSErrorDetail::StaticClass, TEXT("ULSErrorDetail"), &Z_Registration_Info_UClass_ULSErrorDetail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSErrorDetail), 1775285520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSErrorDetail_h_1343939020(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSErrorDetail_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSErrorDetail_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
