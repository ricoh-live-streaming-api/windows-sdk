// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSMediaStreamTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSMediaStreamTrack() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrack();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELSTrackType;
	static UEnum* ELSTrackType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELSTrackType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELSTrackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType, Z_Construct_UPackage__Script_LiveStreaming_ClientSDK(), TEXT("ELSTrackType"));
		}
		return Z_Registration_Info_UEnum_ELSTrackType.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSTrackType>()
	{
		return ELSTrackType_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType_Statics::Enumerators[] = {
		{ "ELSTrackType::Video", (int64)ELSTrackType::Video },
		{ "ELSTrackType::Audio", (int64)ELSTrackType::Audio },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType_Statics::Enum_MetaDataParams[] = {
		{ "Audio.Name", "ELSTrackType::Audio" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSMediaStreamTrack.h" },
		{ "Video.Name", "ELSTrackType::Video" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
		nullptr,
		"ELSTrackType",
		"ELSTrackType",
		Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType()
	{
		if (!Z_Registration_Info_UEnum_ELSTrackType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELSTrackType.InnerSingleton, Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELSTrackType.InnerSingleton;
	}
	DEFINE_FUNCTION(ULSMediaStreamTrack::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStreamTrack::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSTrackType*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStreamTrack::execDispose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dispose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStreamTrack::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void ULSMediaStreamTrack::StaticRegisterNativesULSMediaStreamTrack()
	{
		UClass* Class = ULSMediaStreamTrack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dispose", &ULSMediaStreamTrack::execDispose },
			{ "GetId", &ULSMediaStreamTrack::execGetId },
			{ "GetType", &ULSMediaStreamTrack::execGetType },
			{ "SetEnabled", &ULSMediaStreamTrack::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSMediaStreamTrack_Dispose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamTrack_Dispose_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSMediaStreamTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamTrack_Dispose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamTrack, nullptr, "Dispose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamTrack_Dispose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrack_Dispose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamTrack_Dispose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamTrack_Dispose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics
	{
		struct LSMediaStreamTrack_eventGetId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStreamTrack_eventGetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSMediaStreamTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamTrack, nullptr, "GetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics::LSMediaStreamTrack_eventGetId_Parms), Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamTrack_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamTrack_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics
	{
		struct LSMediaStreamTrack_eventGetType_Parms
		{
			ELSTrackType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStreamTrack_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSTrackType, METADATA_PARAMS(nullptr, 0) }; // 2739296703
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSMediaStreamTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamTrack, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::LSMediaStreamTrack_eventGetType_Parms), Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamTrack_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamTrack_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics
	{
		struct LSMediaStreamTrack_eventSetEnabled_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LSMediaStreamTrack_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LSMediaStreamTrack_eventSetEnabled_Parms), &Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LSMediaStreamTrack_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LSMediaStreamTrack_eventSetEnabled_Parms), &Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSMediaStreamTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamTrack, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::LSMediaStreamTrack_eventSetEnabled_Parms), Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSMediaStreamTrack);
	UClass* Z_Construct_UClass_ULSMediaStreamTrack_NoRegister()
	{
		return ULSMediaStreamTrack::StaticClass();
	}
	struct Z_Construct_UClass_ULSMediaStreamTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSMediaStreamTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSMediaStreamTrack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSMediaStreamTrack_Dispose, "Dispose" }, // 4121394519
		{ &Z_Construct_UFunction_ULSMediaStreamTrack_GetId, "GetId" }, // 3546602926
		{ &Z_Construct_UFunction_ULSMediaStreamTrack_GetType, "GetType" }, // 1045509755
		{ &Z_Construct_UFunction_ULSMediaStreamTrack_SetEnabled, "SetEnabled" }, // 471027675
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSMediaStreamTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "webrtc/LSMediaStreamTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSMediaStreamTrack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSMediaStreamTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSMediaStreamTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSMediaStreamTrack_Statics::ClassParams = {
		&ULSMediaStreamTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSMediaStreamTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSMediaStreamTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSMediaStreamTrack()
	{
		if (!Z_Registration_Info_UClass_ULSMediaStreamTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSMediaStreamTrack.OuterSingleton, Z_Construct_UClass_ULSMediaStreamTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSMediaStreamTrack.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSMediaStreamTrack>()
	{
		return ULSMediaStreamTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSMediaStreamTrack);
	ULSMediaStreamTrack::~ULSMediaStreamTrack() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStreamTrack_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStreamTrack_h_Statics::EnumInfo[] = {
		{ ELSTrackType_StaticEnum, TEXT("ELSTrackType"), &Z_Registration_Info_UEnum_ELSTrackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2739296703U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStreamTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSMediaStreamTrack, ULSMediaStreamTrack::StaticClass, TEXT("ULSMediaStreamTrack"), &Z_Registration_Info_UClass_ULSMediaStreamTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSMediaStreamTrack), 2843897683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStreamTrack_h_4098182785(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStreamTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStreamTrack_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStreamTrack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStreamTrack_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
