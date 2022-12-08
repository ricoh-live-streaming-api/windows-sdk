// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSMediaStream.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSMediaStream() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSAudioTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStream();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStream_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSMediaStream::execGetVideoTracks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULSVideoTrack*>*)Z_Param__Result=P_THIS->GetVideoTracks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStream::execGetAudioTracks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULSAudioTrack*>*)Z_Param__Result=P_THIS->GetAudioTracks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStream::execDispose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dispose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStream::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	void ULSMediaStream::StaticRegisterNativesULSMediaStream()
	{
		UClass* Class = ULSMediaStream::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dispose", &ULSMediaStream::execDispose },
			{ "GetAudioTracks", &ULSMediaStream::execGetAudioTracks },
			{ "GetId", &ULSMediaStream::execGetId },
			{ "GetVideoTracks", &ULSMediaStream::execGetVideoTracks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSMediaStream_Dispose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStream_Dispose_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSMediaStream.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStream_Dispose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStream, nullptr, "Dispose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStream_Dispose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStream_Dispose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStream_Dispose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStream_Dispose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics
	{
		struct LSMediaStream_eventGetAudioTracks_Parms
		{
			TArray<ULSAudioTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULSAudioTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStream_eventGetAudioTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSMediaStream.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStream, nullptr, "GetAudioTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::LSMediaStream_eventGetAudioTracks_Parms), Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStream_GetAudioTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStream_GetAudioTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStream_GetId_Statics
	{
		struct LSMediaStream_eventGetId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSMediaStream_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStream_eventGetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStream_GetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStream_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStream_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSMediaStream.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStream_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStream, nullptr, "GetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStream_GetId_Statics::LSMediaStream_eventGetId_Parms), Z_Construct_UFunction_ULSMediaStream_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStream_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStream_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStream_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStream_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStream_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics
	{
		struct LSMediaStream_eventGetVideoTracks_Parms
		{
			TArray<ULSVideoTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULSVideoTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStream_eventGetVideoTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSMediaStream.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStream, nullptr, "GetVideoTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::LSMediaStream_eventGetVideoTracks_Parms), Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStream_GetVideoTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStream_GetVideoTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSMediaStream);
	UClass* Z_Construct_UClass_ULSMediaStream_NoRegister()
	{
		return ULSMediaStream::StaticClass();
	}
	struct Z_Construct_UClass_ULSMediaStream_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSMediaStream_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSMediaStream_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSMediaStream_Dispose, "Dispose" }, // 3065540543
		{ &Z_Construct_UFunction_ULSMediaStream_GetAudioTracks, "GetAudioTracks" }, // 2938816089
		{ &Z_Construct_UFunction_ULSMediaStream_GetId, "GetId" }, // 3232758117
		{ &Z_Construct_UFunction_ULSMediaStream_GetVideoTracks, "GetVideoTracks" }, // 3241787964
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSMediaStream_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "webrtc/LSMediaStream.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSMediaStream.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSMediaStream_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSMediaStream>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSMediaStream_Statics::ClassParams = {
		&ULSMediaStream::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSMediaStream_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSMediaStream_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSMediaStream()
	{
		if (!Z_Registration_Info_UClass_ULSMediaStream.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSMediaStream.OuterSingleton, Z_Construct_UClass_ULSMediaStream_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSMediaStream.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSMediaStream>()
	{
		return ULSMediaStream::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSMediaStream);
	ULSMediaStream::~ULSMediaStream() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStream_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStream_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSMediaStream, ULSMediaStream::StaticClass, TEXT("ULSMediaStream"), &Z_Registration_Info_UClass_ULSMediaStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSMediaStream), 3235551801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStream_h_1646789934(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStream_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSMediaStream_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
