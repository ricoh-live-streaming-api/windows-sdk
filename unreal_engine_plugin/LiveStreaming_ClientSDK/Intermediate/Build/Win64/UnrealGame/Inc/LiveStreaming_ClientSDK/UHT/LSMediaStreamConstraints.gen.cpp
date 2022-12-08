// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/LSMediaStreamConstraints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSMediaStreamConstraints() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamConstraints();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamConstraints_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoCapturer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSMediaStreamConstraints::execSetAudio)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSMediaStreamConstraints**)Z_Param__Result=P_THIS->SetAudio(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStreamConstraints::execSetVideoCapturer)
	{
		P_GET_OBJECT(ULSVideoCapturer,Z_Param_videoCapturer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSMediaStreamConstraints**)Z_Param__Result=P_THIS->SetVideoCapturer(Z_Param_videoCapturer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStreamConstraints::execShouldCreateAudioStream)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldCreateAudioStream();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStreamConstraints::execGetCapturer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSVideoCapturer**)Z_Param__Result=P_THIS->GetCapturer();
		P_NATIVE_END;
	}
	void ULSMediaStreamConstraints::StaticRegisterNativesULSMediaStreamConstraints()
	{
		UClass* Class = ULSMediaStreamConstraints::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCapturer", &ULSMediaStreamConstraints::execGetCapturer },
			{ "SetAudio", &ULSMediaStreamConstraints::execSetAudio },
			{ "SetVideoCapturer", &ULSMediaStreamConstraints::execSetVideoCapturer },
			{ "ShouldCreateAudioStream", &ULSMediaStreamConstraints::execShouldCreateAudioStream },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics
	{
		struct LSMediaStreamConstraints_eventGetCapturer_Parms
		{
			ULSVideoCapturer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStreamConstraints_eventGetCapturer_Parms, ReturnValue), Z_Construct_UClass_ULSVideoCapturer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSMediaStreamConstraints.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamConstraints, nullptr, "GetCapturer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics::LSMediaStreamConstraints_eventGetCapturer_Parms), Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics
	{
		struct LSMediaStreamConstraints_eventSetAudio_Parms
		{
			bool bEnabled;
			ULSMediaStreamConstraints* ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LSMediaStreamConstraints_eventSetAudio_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LSMediaStreamConstraints_eventSetAudio_Parms), &Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStreamConstraints_eventSetAudio_Parms, ReturnValue), Z_Construct_UClass_ULSMediaStreamConstraints_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/LSMediaStreamConstraints.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamConstraints, nullptr, "SetAudio", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::LSMediaStreamConstraints_eventSetAudio_Parms), Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics
	{
		struct LSMediaStreamConstraints_eventSetVideoCapturer_Parms
		{
			ULSVideoCapturer* videoCapturer;
			ULSMediaStreamConstraints* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_videoCapturer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::NewProp_videoCapturer = { "videoCapturer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStreamConstraints_eventSetVideoCapturer_Parms, videoCapturer), Z_Construct_UClass_ULSVideoCapturer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStreamConstraints_eventSetVideoCapturer_Parms, ReturnValue), Z_Construct_UClass_ULSMediaStreamConstraints_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::NewProp_videoCapturer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSMediaStreamConstraints.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamConstraints, nullptr, "SetVideoCapturer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::LSMediaStreamConstraints_eventSetVideoCapturer_Parms), Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics
	{
		struct LSMediaStreamConstraints_eventShouldCreateAudioStream_Parms
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
	void Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LSMediaStreamConstraints_eventShouldCreateAudioStream_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LSMediaStreamConstraints_eventShouldCreateAudioStream_Parms), &Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSMediaStreamConstraints.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamConstraints, nullptr, "ShouldCreateAudioStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::LSMediaStreamConstraints_eventShouldCreateAudioStream_Parms), Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSMediaStreamConstraints);
	UClass* Z_Construct_UClass_ULSMediaStreamConstraints_NoRegister()
	{
		return ULSMediaStreamConstraints::StaticClass();
	}
	struct Z_Construct_UClass_ULSMediaStreamConstraints_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__videoCapturer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__videoCapturer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSMediaStreamConstraints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSMediaStreamConstraints_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSMediaStreamConstraints_GetCapturer, "GetCapturer" }, // 1541246730
		{ &Z_Construct_UFunction_ULSMediaStreamConstraints_SetAudio, "SetAudio" }, // 1058803364
		{ &Z_Construct_UFunction_ULSMediaStreamConstraints_SetVideoCapturer, "SetVideoCapturer" }, // 3756103747
		{ &Z_Construct_UFunction_ULSMediaStreamConstraints_ShouldCreateAudioStream, "ShouldCreateAudioStream" }, // 3654957926
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSMediaStreamConstraints_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LSMediaStreamConstraints.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LSMediaStreamConstraints.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSMediaStreamConstraints_Statics::NewProp__videoCapturer_MetaData[] = {
		{ "ModuleRelativePath", "Public/LSMediaStreamConstraints.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULSMediaStreamConstraints_Statics::NewProp__videoCapturer = { "_videoCapturer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSMediaStreamConstraints, _videoCapturer), Z_Construct_UClass_ULSVideoCapturer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULSMediaStreamConstraints_Statics::NewProp__videoCapturer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSMediaStreamConstraints_Statics::NewProp__videoCapturer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULSMediaStreamConstraints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSMediaStreamConstraints_Statics::NewProp__videoCapturer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSMediaStreamConstraints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSMediaStreamConstraints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSMediaStreamConstraints_Statics::ClassParams = {
		&ULSMediaStreamConstraints::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULSMediaStreamConstraints_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULSMediaStreamConstraints_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULSMediaStreamConstraints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSMediaStreamConstraints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSMediaStreamConstraints()
	{
		if (!Z_Registration_Info_UClass_ULSMediaStreamConstraints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSMediaStreamConstraints.OuterSingleton, Z_Construct_UClass_ULSMediaStreamConstraints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSMediaStreamConstraints.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSMediaStreamConstraints>()
	{
		return ULSMediaStreamConstraints::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSMediaStreamConstraints);
	ULSMediaStreamConstraints::~ULSMediaStreamConstraints() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSMediaStreamConstraints_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSMediaStreamConstraints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSMediaStreamConstraints, ULSMediaStreamConstraints::StaticClass, TEXT("ULSMediaStreamConstraints"), &Z_Registration_Info_UClass_ULSMediaStreamConstraints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSMediaStreamConstraints), 3386579462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSMediaStreamConstraints_h_1464169788(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSMediaStreamConstraints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSMediaStreamConstraints_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
