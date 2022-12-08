// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/LSTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSTrack() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStream_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSTrack();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSTrackOption_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSTrack::execGetMuteType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSMuteType*)Z_Param__Result=P_THIS->GetMuteType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSTrack::execGetMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSTrack::execGetMediaStream)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSMediaStream**)Z_Param__Result=P_THIS->GetMediaStream();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSTrack::execGetMediaStreamTrack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSMediaStreamTrack**)Z_Param__Result=P_THIS->GetMediaStreamTrack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSTrack::execCreate)
	{
		P_GET_OBJECT(ULSMediaStreamTrack,Z_Param_mediaStreamTrack);
		P_GET_OBJECT(ULSMediaStream,Z_Param_mediaStream);
		P_GET_OBJECT(ULSTrackOption,Z_Param_trackOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSTrack**)Z_Param__Result=P_THIS->Create(Z_Param_mediaStreamTrack,Z_Param_mediaStream,Z_Param_trackOption);
		P_NATIVE_END;
	}
	void ULSTrack::StaticRegisterNativesULSTrack()
	{
		UClass* Class = ULSTrack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &ULSTrack::execCreate },
			{ "GetMediaStream", &ULSTrack::execGetMediaStream },
			{ "GetMediaStreamTrack", &ULSTrack::execGetMediaStreamTrack },
			{ "GetMetadata", &ULSTrack::execGetMetadata },
			{ "GetMuteType", &ULSTrack::execGetMuteType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSTrack_Create_Statics
	{
		struct LSTrack_eventCreate_Parms
		{
			ULSMediaStreamTrack* mediaStreamTrack;
			ULSMediaStream* mediaStream;
			ULSTrackOption* trackOption;
			ULSTrack* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mediaStreamTrack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mediaStream;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_trackOption;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSTrack_Create_Statics::NewProp_mediaStreamTrack = { "mediaStreamTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrack_eventCreate_Parms, mediaStreamTrack), Z_Construct_UClass_ULSMediaStreamTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSTrack_Create_Statics::NewProp_mediaStream = { "mediaStream", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrack_eventCreate_Parms, mediaStream), Z_Construct_UClass_ULSMediaStream_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSTrack_Create_Statics::NewProp_trackOption = { "trackOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrack_eventCreate_Parms, trackOption), Z_Construct_UClass_ULSTrackOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSTrack_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrack_eventCreate_Parms, ReturnValue), Z_Construct_UClass_ULSTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSTrack_Create_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrack_Create_Statics::NewProp_mediaStreamTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrack_Create_Statics::NewProp_mediaStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrack_Create_Statics::NewProp_trackOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrack_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSTrack_Create_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "trackOption" },
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "DisplayName", "Create LSTrack" },
		{ "ModuleRelativePath", "Public/LSTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSTrack_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSTrack, nullptr, "Create", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSTrack_Create_Statics::LSTrack_eventCreate_Parms), Z_Construct_UFunction_ULSTrack_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrack_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSTrack_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrack_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSTrack_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSTrack_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics
	{
		struct LSTrack_eventGetMediaStream_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrack_eventGetMediaStream_Parms, ReturnValue), Z_Construct_UClass_ULSMediaStream_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSTrack, nullptr, "GetMediaStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics::LSTrack_eventGetMediaStream_Parms), Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSTrack_GetMediaStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSTrack_GetMediaStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics
	{
		struct LSTrack_eventGetMediaStreamTrack_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrack_eventGetMediaStreamTrack_Parms, ReturnValue), Z_Construct_UClass_ULSMediaStreamTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSTrack, nullptr, "GetMediaStreamTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics::LSTrack_eventGetMediaStreamTrack_Parms), Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSTrack_GetMetadata_Statics
	{
		struct LSTrack_eventGetMetadata_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrack_eventGetMetadata_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSTrack, nullptr, "GetMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::LSTrack_eventGetMetadata_Parms), Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSTrack_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSTrack_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSTrack_GetMuteType_Statics
	{
		struct LSTrack_eventGetMuteType_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSTrack_eventGetMuteType_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType, METADATA_PARAMS(nullptr, 0) }; // 2148500874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSTrack, nullptr, "GetMuteType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::LSTrack_eventGetMuteType_Parms), Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSTrack_GetMuteType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSTrack_GetMuteType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSTrack);
	UClass* Z_Construct_UClass_ULSTrack_NoRegister()
	{
		return ULSTrack::StaticClass();
	}
	struct Z_Construct_UClass_ULSTrack_Statics
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
	UObject* (*const Z_Construct_UClass_ULSTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSTrack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSTrack_Create, "Create" }, // 4145994167
		{ &Z_Construct_UFunction_ULSTrack_GetMediaStream, "GetMediaStream" }, // 385900540
		{ &Z_Construct_UFunction_ULSTrack_GetMediaStreamTrack, "GetMediaStreamTrack" }, // 144842026
		{ &Z_Construct_UFunction_ULSTrack_GetMetadata, "GetMetadata" }, // 1340946755
		{ &Z_Construct_UFunction_ULSTrack_GetMuteType, "GetMuteType" }, // 1452536008
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LSTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LSTrack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSTrack_Statics::NewProp__mediaStreamTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/LSTrack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULSTrack_Statics::NewProp__mediaStreamTrack = { "_mediaStreamTrack", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSTrack, _mediaStreamTrack), Z_Construct_UClass_ULSMediaStreamTrack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULSTrack_Statics::NewProp__mediaStreamTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSTrack_Statics::NewProp__mediaStreamTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSTrack_Statics::NewProp__mediaStream_MetaData[] = {
		{ "ModuleRelativePath", "Public/LSTrack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULSTrack_Statics::NewProp__mediaStream = { "_mediaStream", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSTrack, _mediaStream), Z_Construct_UClass_ULSMediaStream_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULSTrack_Statics::NewProp__mediaStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSTrack_Statics::NewProp__mediaStream_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULSTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSTrack_Statics::NewProp__mediaStreamTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSTrack_Statics::NewProp__mediaStream,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSTrack_Statics::ClassParams = {
		&ULSTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULSTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULSTrack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULSTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSTrack()
	{
		if (!Z_Registration_Info_UClass_ULSTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSTrack.OuterSingleton, Z_Construct_UClass_ULSTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSTrack.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSTrack>()
	{
		return ULSTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSTrack);
	ULSTrack::~ULSTrack() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSTrack, ULSTrack::StaticClass, TEXT("ULSTrack"), &Z_Registration_Info_UClass_ULSTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSTrack), 1950631311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_1956500320(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
