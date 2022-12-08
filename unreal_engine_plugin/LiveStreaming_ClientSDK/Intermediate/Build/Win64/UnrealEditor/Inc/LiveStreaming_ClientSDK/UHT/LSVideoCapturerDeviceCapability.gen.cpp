// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSVideoCapturerDeviceCapability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSVideoCapturerDeviceCapability() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoCapturerDeviceCapability();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoCapturerDeviceCapability_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSVideoCapturerDeviceCapability::execGetFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSVideoCapturerDeviceCapability::execGetHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSVideoCapturerDeviceCapability::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWidth();
		P_NATIVE_END;
	}
	void ULSVideoCapturerDeviceCapability::StaticRegisterNativesULSVideoCapturerDeviceCapability()
	{
		UClass* Class = ULSVideoCapturerDeviceCapability::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFrameRate", &ULSVideoCapturerDeviceCapability::execGetFrameRate },
			{ "GetHeight", &ULSVideoCapturerDeviceCapability::execGetHeight },
			{ "GetWidth", &ULSVideoCapturerDeviceCapability::execGetWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics
	{
		struct LSVideoCapturerDeviceCapability_eventGetFrameRate_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoCapturerDeviceCapability_eventGetFrameRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoCapturerDeviceCapability.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoCapturerDeviceCapability, nullptr, "GetFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics::LSVideoCapturerDeviceCapability_eventGetFrameRate_Parms), Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics
	{
		struct LSVideoCapturerDeviceCapability_eventGetHeight_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoCapturerDeviceCapability_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoCapturerDeviceCapability.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoCapturerDeviceCapability, nullptr, "GetHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics::LSVideoCapturerDeviceCapability_eventGetHeight_Parms), Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics
	{
		struct LSVideoCapturerDeviceCapability_eventGetWidth_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoCapturerDeviceCapability_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoCapturerDeviceCapability.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoCapturerDeviceCapability, nullptr, "GetWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics::LSVideoCapturerDeviceCapability_eventGetWidth_Parms), Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSVideoCapturerDeviceCapability);
	UClass* Z_Construct_UClass_ULSVideoCapturerDeviceCapability_NoRegister()
	{
		return ULSVideoCapturerDeviceCapability::StaticClass();
	}
	struct Z_Construct_UClass_ULSVideoCapturerDeviceCapability_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSVideoCapturerDeviceCapability_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSVideoCapturerDeviceCapability_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetFrameRate, "GetFrameRate" }, // 1733155196
		{ &Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetHeight, "GetHeight" }, // 3240546781
		{ &Z_Construct_UFunction_ULSVideoCapturerDeviceCapability_GetWidth, "GetWidth" }, // 4023363330
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSVideoCapturerDeviceCapability_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "webrtc/LSVideoCapturerDeviceCapability.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoCapturerDeviceCapability.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSVideoCapturerDeviceCapability_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSVideoCapturerDeviceCapability>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSVideoCapturerDeviceCapability_Statics::ClassParams = {
		&ULSVideoCapturerDeviceCapability::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSVideoCapturerDeviceCapability_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSVideoCapturerDeviceCapability_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSVideoCapturerDeviceCapability()
	{
		if (!Z_Registration_Info_UClass_ULSVideoCapturerDeviceCapability.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSVideoCapturerDeviceCapability.OuterSingleton, Z_Construct_UClass_ULSVideoCapturerDeviceCapability_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSVideoCapturerDeviceCapability.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSVideoCapturerDeviceCapability>()
	{
		return ULSVideoCapturerDeviceCapability::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSVideoCapturerDeviceCapability);
	ULSVideoCapturerDeviceCapability::~ULSVideoCapturerDeviceCapability() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturerDeviceCapability_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturerDeviceCapability_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSVideoCapturerDeviceCapability, ULSVideoCapturerDeviceCapability::StaticClass, TEXT("ULSVideoCapturerDeviceCapability"), &Z_Registration_Info_UClass_ULSVideoCapturerDeviceCapability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSVideoCapturerDeviceCapability), 3069308634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturerDeviceCapability_h_2601444625(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturerDeviceCapability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturerDeviceCapability_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
