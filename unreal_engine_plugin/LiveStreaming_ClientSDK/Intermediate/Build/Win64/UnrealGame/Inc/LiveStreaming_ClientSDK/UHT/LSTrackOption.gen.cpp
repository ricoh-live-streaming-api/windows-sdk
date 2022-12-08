// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/LSTrackOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSTrackOption() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSTrackOption();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSTrackOption_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSTrackOption::execSetMuteType)
	{
		P_GET_ENUM(ELSMuteType,Z_Param_muteType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSTrackOption**)Z_Param__Result=P_THIS->SetMuteType(ELSMuteType(Z_Param_muteType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSTrackOption::execSetMeta)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_meta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSTrackOption**)Z_Param__Result=P_THIS->SetMeta(Z_Param_Out_meta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSTrackOption::execGetMuteType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSMuteType*)Z_Param__Result=P_THIS->GetMuteType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSTrackOption::execGetMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetMetadata();
		P_NATIVE_END;
	}
	void ULSTrackOption::StaticRegisterNativesULSTrackOption()
	{
		UClass* Class = ULSTrackOption::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMetadata", &ULSTrackOption::execGetMetadata },
			{ "GetMuteType", &ULSTrackOption::execGetMuteType },
			{ "SetMeta", &ULSTrackOption::execSetMeta },
			{ "SetMuteType", &ULSTrackOption::execSetMuteType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics
	{
		struct LSTrackOption_eventGetMetadata_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrackOption_eventGetMetadata_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSTrackOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSTrackOption, nullptr, "GetMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::LSTrackOption_eventGetMetadata_Parms), Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSTrackOption_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSTrackOption_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics
	{
		struct LSTrackOption_eventGetMuteType_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrackOption_eventGetMuteType_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType, METADATA_PARAMS(nullptr, 0) }; // 2148500874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSTrackOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSTrackOption, nullptr, "GetMuteType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::LSTrackOption_eventGetMuteType_Parms), Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSTrackOption_GetMuteType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSTrackOption_GetMuteType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics
	{
		struct LSTrackOption_eventSetMeta_Parms
		{
			TMap<FString,FString> meta;
			ULSTrackOption* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_meta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_meta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_meta;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::NewProp_meta_ValueProp = { "meta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::NewProp_meta_Key_KeyProp = { "meta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::NewProp_meta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::NewProp_meta = { "meta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrackOption_eventSetMeta_Parms, meta), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::NewProp_meta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::NewProp_meta_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrackOption_eventSetMeta_Parms, ReturnValue), Z_Construct_UClass_ULSTrackOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::NewProp_meta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::NewProp_meta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::NewProp_meta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSTrackOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSTrackOption, nullptr, "SetMeta", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::LSTrackOption_eventSetMeta_Parms), Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSTrackOption_SetMeta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSTrackOption_SetMeta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics
	{
		struct LSTrackOption_eventSetMuteType_Parms
		{
			ELSMuteType muteType;
			ULSTrackOption* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_muteType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_muteType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::NewProp_muteType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::NewProp_muteType = { "muteType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrackOption_eventSetMuteType_Parms, muteType), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType, METADATA_PARAMS(nullptr, 0) }; // 2148500874
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrackOption_eventSetMuteType_Parms, ReturnValue), Z_Construct_UClass_ULSTrackOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::NewProp_muteType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::NewProp_muteType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSTrackOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSTrackOption, nullptr, "SetMuteType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::LSTrackOption_eventSetMuteType_Parms), Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSTrackOption_SetMuteType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSTrackOption_SetMuteType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSTrackOption);
	UClass* Z_Construct_UClass_ULSTrackOption_NoRegister()
	{
		return ULSTrackOption::StaticClass();
	}
	struct Z_Construct_UClass_ULSTrackOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSTrackOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSTrackOption_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSTrackOption_GetMetadata, "GetMetadata" }, // 764903634
		{ &Z_Construct_UFunction_ULSTrackOption_GetMuteType, "GetMuteType" }, // 3357350779
		{ &Z_Construct_UFunction_ULSTrackOption_SetMeta, "SetMeta" }, // 4132195643
		{ &Z_Construct_UFunction_ULSTrackOption_SetMuteType, "SetMuteType" }, // 963547946
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSTrackOption_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LSTrackOption.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LSTrackOption.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSTrackOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSTrackOption>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSTrackOption_Statics::ClassParams = {
		&ULSTrackOption::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSTrackOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSTrackOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSTrackOption()
	{
		if (!Z_Registration_Info_UClass_ULSTrackOption.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSTrackOption.OuterSingleton, Z_Construct_UClass_ULSTrackOption_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSTrackOption.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSTrackOption>()
	{
		return ULSTrackOption::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSTrackOption);
	ULSTrackOption::~ULSTrackOption() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrackOption_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrackOption_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSTrackOption, ULSTrackOption::StaticClass, TEXT("ULSTrackOption"), &Z_Registration_Info_UClass_ULSTrackOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSTrackOption), 2132333258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrackOption_h_1607907975(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrackOption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrackOption_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
