// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/event/LSMediaStreamTrackEventBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSMediaStreamTrackEventBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSAudioTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStream_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrackEventBase();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrackEventBase_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSMediaStreamTrackEventBase::execGetAudioTrack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSAudioTrack**)Z_Param__Result=P_THIS->GetAudioTrack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStreamTrackEventBase::execGetVideoTrack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSVideoTrack**)Z_Param__Result=P_THIS->GetVideoTrack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStreamTrackEventBase::execGetMediaStream)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSMediaStream**)Z_Param__Result=P_THIS->GetMediaStream();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStreamTrackEventBase::execGetMediaStreamTrack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSMediaStreamTrack**)Z_Param__Result=P_THIS->GetMediaStreamTrack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSMediaStreamTrackEventBase::execGetConnectionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetConnectionId();
		P_NATIVE_END;
	}
	void ULSMediaStreamTrackEventBase::StaticRegisterNativesULSMediaStreamTrackEventBase()
	{
		UClass* Class = ULSMediaStreamTrackEventBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioTrack", &ULSMediaStreamTrackEventBase::execGetAudioTrack },
			{ "GetConnectionId", &ULSMediaStreamTrackEventBase::execGetConnectionId },
			{ "GetMediaStream", &ULSMediaStreamTrackEventBase::execGetMediaStream },
			{ "GetMediaStreamTrack", &ULSMediaStreamTrackEventBase::execGetMediaStreamTrack },
			{ "GetVideoTrack", &ULSMediaStreamTrackEventBase::execGetVideoTrack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics
	{
		struct LSMediaStreamTrackEventBase_eventGetAudioTrack_Parms
		{
			ULSAudioTrack* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStreamTrackEventBase_eventGetAudioTrack_Parms, ReturnValue), Z_Construct_UClass_ULSAudioTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSMediaStreamTrackEventBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamTrackEventBase, nullptr, "GetAudioTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics::LSMediaStreamTrackEventBase_eventGetAudioTrack_Parms), Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics
	{
		struct LSMediaStreamTrackEventBase_eventGetConnectionId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStreamTrackEventBase_eventGetConnectionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSMediaStreamTrackEventBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamTrackEventBase, nullptr, "GetConnectionId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics::LSMediaStreamTrackEventBase_eventGetConnectionId_Parms), Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics
	{
		struct LSMediaStreamTrackEventBase_eventGetMediaStream_Parms
		{
			ULSMediaStream* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStreamTrackEventBase_eventGetMediaStream_Parms, ReturnValue), Z_Construct_UClass_ULSMediaStream_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSMediaStreamTrackEventBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamTrackEventBase, nullptr, "GetMediaStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics::LSMediaStreamTrackEventBase_eventGetMediaStream_Parms), Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics
	{
		struct LSMediaStreamTrackEventBase_eventGetMediaStreamTrack_Parms
		{
			ULSMediaStreamTrack* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStreamTrackEventBase_eventGetMediaStreamTrack_Parms, ReturnValue), Z_Construct_UClass_ULSMediaStreamTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSMediaStreamTrackEventBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamTrackEventBase, nullptr, "GetMediaStreamTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics::LSMediaStreamTrackEventBase_eventGetMediaStreamTrack_Parms), Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics
	{
		struct LSMediaStreamTrackEventBase_eventGetVideoTrack_Parms
		{
			ULSVideoTrack* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSMediaStreamTrackEventBase_eventGetVideoTrack_Parms, ReturnValue), Z_Construct_UClass_ULSVideoTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/event/LSMediaStreamTrackEventBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSMediaStreamTrackEventBase, nullptr, "GetVideoTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics::LSMediaStreamTrackEventBase_eventGetVideoTrack_Parms), Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSMediaStreamTrackEventBase);
	UClass* Z_Construct_UClass_ULSMediaStreamTrackEventBase_NoRegister()
	{
		return ULSMediaStreamTrackEventBase::StaticClass();
	}
	struct Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__mediaStreamTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__mediaStreamTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__mediaStream_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__mediaStream;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetAudioTrack, "GetAudioTrack" }, // 3056934493
		{ &Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetConnectionId, "GetConnectionId" }, // 4097715955
		{ &Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStream, "GetMediaStream" }, // 3079071910
		{ &Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetMediaStreamTrack, "GetMediaStreamTrack" }, // 4005766024
		{ &Z_Construct_UFunction_ULSMediaStreamTrackEventBase_GetVideoTrack, "GetVideoTrack" }, // 1582170783
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "event/LSMediaStreamTrackEventBase.h" },
		{ "ModuleRelativePath", "Public/event/LSMediaStreamTrackEventBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::NewProp__mediaStreamTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/event/LSMediaStreamTrackEventBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::NewProp__mediaStreamTrack = { "_mediaStreamTrack", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSMediaStreamTrackEventBase, _mediaStreamTrack), Z_Construct_UClass_ULSMediaStreamTrack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::NewProp__mediaStreamTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::NewProp__mediaStreamTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::NewProp__mediaStream_MetaData[] = {
		{ "ModuleRelativePath", "Public/event/LSMediaStreamTrackEventBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::NewProp__mediaStream = { "_mediaStream", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSMediaStreamTrackEventBase, _mediaStream), Z_Construct_UClass_ULSMediaStream_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::NewProp__mediaStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::NewProp__mediaStream_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::NewProp__mediaStreamTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::NewProp__mediaStream,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSMediaStreamTrackEventBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::ClassParams = {
		&ULSMediaStreamTrackEventBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSMediaStreamTrackEventBase()
	{
		if (!Z_Registration_Info_UClass_ULSMediaStreamTrackEventBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSMediaStreamTrackEventBase.OuterSingleton, Z_Construct_UClass_ULSMediaStreamTrackEventBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSMediaStreamTrackEventBase.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSMediaStreamTrackEventBase>()
	{
		return ULSMediaStreamTrackEventBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSMediaStreamTrackEventBase);
	ULSMediaStreamTrackEventBase::~ULSMediaStreamTrackEventBase() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSMediaStreamTrackEventBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSMediaStreamTrackEventBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSMediaStreamTrackEventBase, ULSMediaStreamTrackEventBase::StaticClass, TEXT("ULSMediaStreamTrackEventBase"), &Z_Registration_Info_UClass_ULSMediaStreamTrackEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSMediaStreamTrackEventBase), 4111475242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSMediaStreamTrackEventBase_h_3614691236(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSMediaStreamTrackEventBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_event_LSMediaStreamTrackEventBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
