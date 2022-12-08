// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSAudioTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSAudioTrack() {}
// Cross Module References
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSAudioTrack();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSAudioTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrack();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSAudioTrack::execSetVolume)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	void ULSAudioTrack::StaticRegisterNativesULSAudioTrack()
	{
		UClass* Class = ULSAudioTrack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetVolume", &ULSAudioTrack::execSetVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics
	{
		struct LSAudioTrack_eventSetVolume_Parms
		{
			double volume;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSAudioTrack_eventSetVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSAudioTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSAudioTrack, nullptr, "SetVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics::LSAudioTrack_eventSetVolume_Parms), Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSAudioTrack_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSAudioTrack_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSAudioTrack);
	UClass* Z_Construct_UClass_ULSAudioTrack_NoRegister()
	{
		return ULSAudioTrack::StaticClass();
	}
	struct Z_Construct_UClass_ULSAudioTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSAudioTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULSMediaStreamTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSAudioTrack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSAudioTrack_SetVolume, "SetVolume" }, // 522654522
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSAudioTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "webrtc/LSAudioTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSAudioTrack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSAudioTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSAudioTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSAudioTrack_Statics::ClassParams = {
		&ULSAudioTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSAudioTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSAudioTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSAudioTrack()
	{
		if (!Z_Registration_Info_UClass_ULSAudioTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSAudioTrack.OuterSingleton, Z_Construct_UClass_ULSAudioTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSAudioTrack.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSAudioTrack>()
	{
		return ULSAudioTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSAudioTrack);
	ULSAudioTrack::~ULSAudioTrack() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSAudioTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSAudioTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSAudioTrack, ULSAudioTrack::StaticClass, TEXT("ULSAudioTrack"), &Z_Registration_Info_UClass_ULSAudioTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSAudioTrack), 1945267182U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSAudioTrack_h_4230911996(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSAudioTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSAudioTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
