// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/LSOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSOption() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSOption();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSOption_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSReceivingOption_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSSendingOption_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSOption::execSetIceServersProtocol)
	{
		P_GET_ENUM(ELSIceServersProtocol,Z_Param_iceServersProtocol);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSOption**)Z_Param__Result=P_THIS->SetIceServersProtocol(ELSIceServersProtocol(Z_Param_iceServersProtocol));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execSetIceTransportPolicy)
	{
		P_GET_ENUM(ELSIceTransportPolicy,Z_Param_iceTransportPolicy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSOption**)Z_Param__Result=P_THIS->SetIceTransportPolicy(ELSIceTransportPolicy(Z_Param_iceTransportPolicy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execSetReceivingOption)
	{
		P_GET_OBJECT(ULSReceivingOption,Z_Param_receivingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSOption**)Z_Param__Result=P_THIS->SetReceivingOption(Z_Param_receivingOption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execSetSendingOption)
	{
		P_GET_OBJECT(ULSSendingOption,Z_Param_sendingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSOption**)Z_Param__Result=P_THIS->SetSendingOption(Z_Param_sendingOption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execSetEnableCpuOveruseDetection)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSOption**)Z_Param__Result=P_THIS->SetEnableCpuOveruseDetection(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execSetMeta)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_meta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSOption**)Z_Param__Result=P_THIS->SetMeta(Z_Param_Out_meta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execSetLocalLSTracks)
	{
		P_GET_TARRAY_REF(ULSTrack*,Z_Param_Out_localLSTracks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSOption**)Z_Param__Result=P_THIS->SetLocalLSTracks(Z_Param_Out_localLSTracks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execSetSignalingURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_signalingURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSOption**)Z_Param__Result=P_THIS->SetSignalingURL(Z_Param_signalingURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execGetIceServersProtocol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSIceServersProtocol*)Z_Param__Result=P_THIS->GetIceServersProtocol();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execGetIceTransportPolicy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSIceTransportPolicy*)Z_Param__Result=P_THIS->GetIceTransportPolicy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execGetReceivingOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSReceivingOption**)Z_Param__Result=P_THIS->GetReceivingOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execGetSendingOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSSendingOption**)Z_Param__Result=P_THIS->GetSendingOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execGetEnableCpuOveruseDetection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnableCpuOveruseDetection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execGetMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execGetLocalLSTracks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULSTrack*>*)Z_Param__Result=P_THIS->GetLocalLSTracks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSOption::execGetSignalingURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSignalingURL();
		P_NATIVE_END;
	}
	void ULSOption::StaticRegisterNativesULSOption()
	{
		UClass* Class = ULSOption::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnableCpuOveruseDetection", &ULSOption::execGetEnableCpuOveruseDetection },
			{ "GetIceServersProtocol", &ULSOption::execGetIceServersProtocol },
			{ "GetIceTransportPolicy", &ULSOption::execGetIceTransportPolicy },
			{ "GetLocalLSTracks", &ULSOption::execGetLocalLSTracks },
			{ "GetMetadata", &ULSOption::execGetMetadata },
			{ "GetReceivingOption", &ULSOption::execGetReceivingOption },
			{ "GetSendingOption", &ULSOption::execGetSendingOption },
			{ "GetSignalingURL", &ULSOption::execGetSignalingURL },
			{ "SetEnableCpuOveruseDetection", &ULSOption::execSetEnableCpuOveruseDetection },
			{ "SetIceServersProtocol", &ULSOption::execSetIceServersProtocol },
			{ "SetIceTransportPolicy", &ULSOption::execSetIceTransportPolicy },
			{ "SetLocalLSTracks", &ULSOption::execSetLocalLSTracks },
			{ "SetMeta", &ULSOption::execSetMeta },
			{ "SetReceivingOption", &ULSOption::execSetReceivingOption },
			{ "SetSendingOption", &ULSOption::execSetSendingOption },
			{ "SetSignalingURL", &ULSOption::execSetSignalingURL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics
	{
		struct LSOption_eventGetEnableCpuOveruseDetection_Parms
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
	void Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LSOption_eventGetEnableCpuOveruseDetection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LSOption_eventGetEnableCpuOveruseDetection_Parms), &Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "GetEnableCpuOveruseDetection", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::LSOption_eventGetEnableCpuOveruseDetection_Parms), Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics
	{
		struct LSOption_eventGetIceServersProtocol_Parms
		{
			ELSIceServersProtocol ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventGetIceServersProtocol_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol, METADATA_PARAMS(nullptr, 0) }; // 2937303724
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "GetIceServersProtocol", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::LSOption_eventGetIceServersProtocol_Parms), Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_GetIceServersProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_GetIceServersProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics
	{
		struct LSOption_eventGetIceTransportPolicy_Parms
		{
			ELSIceTransportPolicy ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventGetIceTransportPolicy_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy, METADATA_PARAMS(nullptr, 0) }; // 439132658
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "GetIceTransportPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::LSOption_eventGetIceTransportPolicy_Parms), Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_GetIceTransportPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_GetIceTransportPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics
	{
		struct LSOption_eventGetLocalLSTracks_Parms
		{
			TArray<ULSTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULSTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventGetLocalLSTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "GetLocalLSTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::LSOption_eventGetLocalLSTracks_Parms), Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_GetLocalLSTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_GetLocalLSTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_GetMetadata_Statics
	{
		struct LSOption_eventGetMetadata_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSOption_GetMetadata_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSOption_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSOption_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventGetMetadata_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_GetMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetMetadata_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "GetMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_GetMetadata_Statics::LSOption_eventGetMetadata_Parms), Z_Construct_UFunction_ULSOption_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_GetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics
	{
		struct LSOption_eventGetReceivingOption_Parms
		{
			ULSReceivingOption* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventGetReceivingOption_Parms, ReturnValue), Z_Construct_UClass_ULSReceivingOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "GetReceivingOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics::LSOption_eventGetReceivingOption_Parms), Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_GetReceivingOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_GetReceivingOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_GetSendingOption_Statics
	{
		struct LSOption_eventGetSendingOption_Parms
		{
			ULSSendingOption* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_GetSendingOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventGetSendingOption_Parms, ReturnValue), Z_Construct_UClass_ULSSendingOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_GetSendingOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetSendingOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_GetSendingOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_GetSendingOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "GetSendingOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_GetSendingOption_Statics::LSOption_eventGetSendingOption_Parms), Z_Construct_UFunction_ULSOption_GetSendingOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetSendingOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_GetSendingOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetSendingOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_GetSendingOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_GetSendingOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics
	{
		struct LSOption_eventGetSignalingURL_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventGetSignalingURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "GetSignalingURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics::LSOption_eventGetSignalingURL_Parms), Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_GetSignalingURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_GetSignalingURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics
	{
		struct LSOption_eventSetEnableCpuOveruseDetection_Parms
		{
			bool bEnabled;
			ULSOption* ReturnValue;
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
	void Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LSOption_eventSetEnableCpuOveruseDetection_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LSOption_eventSetEnableCpuOveruseDetection_Parms), &Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetEnableCpuOveruseDetection_Parms, ReturnValue), Z_Construct_UClass_ULSOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "SetEnableCpuOveruseDetection", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::LSOption_eventSetEnableCpuOveruseDetection_Parms), Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics
	{
		struct LSOption_eventSetIceServersProtocol_Parms
		{
			ELSIceServersProtocol iceServersProtocol;
			ULSOption* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_iceServersProtocol_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_iceServersProtocol;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::NewProp_iceServersProtocol_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::NewProp_iceServersProtocol = { "iceServersProtocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetIceServersProtocol_Parms, iceServersProtocol), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol, METADATA_PARAMS(nullptr, 0) }; // 2937303724
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetIceServersProtocol_Parms, ReturnValue), Z_Construct_UClass_ULSOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::NewProp_iceServersProtocol_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::NewProp_iceServersProtocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "SetIceServersProtocol", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::LSOption_eventSetIceServersProtocol_Parms), Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_SetIceServersProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_SetIceServersProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics
	{
		struct LSOption_eventSetIceTransportPolicy_Parms
		{
			ELSIceTransportPolicy iceTransportPolicy;
			ULSOption* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_iceTransportPolicy_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_iceTransportPolicy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::NewProp_iceTransportPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::NewProp_iceTransportPolicy = { "iceTransportPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetIceTransportPolicy_Parms, iceTransportPolicy), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy, METADATA_PARAMS(nullptr, 0) }; // 439132658
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetIceTransportPolicy_Parms, ReturnValue), Z_Construct_UClass_ULSOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::NewProp_iceTransportPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::NewProp_iceTransportPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "SetIceTransportPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::LSOption_eventSetIceTransportPolicy_Parms), Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_SetIceTransportPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_SetIceTransportPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics
	{
		struct LSOption_eventSetLocalLSTracks_Parms
		{
			TArray<ULSTrack*> localLSTracks;
			ULSOption* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_localLSTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_localLSTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_localLSTracks;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::NewProp_localLSTracks_Inner = { "localLSTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULSTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::NewProp_localLSTracks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::NewProp_localLSTracks = { "localLSTracks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetLocalLSTracks_Parms, localLSTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::NewProp_localLSTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::NewProp_localLSTracks_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetLocalLSTracks_Parms, ReturnValue), Z_Construct_UClass_ULSOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::NewProp_localLSTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::NewProp_localLSTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "SetLocalLSTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::LSOption_eventSetLocalLSTracks_Parms), Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_SetLocalLSTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_SetLocalLSTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_SetMeta_Statics
	{
		struct LSOption_eventSetMeta_Parms
		{
			TMap<FString,FString> meta;
			ULSOption* ReturnValue;
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSOption_SetMeta_Statics::NewProp_meta_ValueProp = { "meta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSOption_SetMeta_Statics::NewProp_meta_Key_KeyProp = { "meta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_SetMeta_Statics::NewProp_meta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSOption_SetMeta_Statics::NewProp_meta = { "meta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetMeta_Parms, meta), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_SetMeta_Statics::NewProp_meta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetMeta_Statics::NewProp_meta_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_SetMeta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetMeta_Parms, ReturnValue), Z_Construct_UClass_ULSOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_SetMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetMeta_Statics::NewProp_meta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetMeta_Statics::NewProp_meta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetMeta_Statics::NewProp_meta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetMeta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_SetMeta_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_SetMeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "SetMeta", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_SetMeta_Statics::LSOption_eventSetMeta_Parms), Z_Construct_UFunction_ULSOption_SetMeta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetMeta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_SetMeta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetMeta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_SetMeta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_SetMeta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics
	{
		struct LSOption_eventSetReceivingOption_Parms
		{
			ULSReceivingOption* receivingOption;
			ULSOption* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_receivingOption;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::NewProp_receivingOption = { "receivingOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetReceivingOption_Parms, receivingOption), Z_Construct_UClass_ULSReceivingOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetReceivingOption_Parms, ReturnValue), Z_Construct_UClass_ULSOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::NewProp_receivingOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "SetReceivingOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::LSOption_eventSetReceivingOption_Parms), Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_SetReceivingOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_SetReceivingOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_SetSendingOption_Statics
	{
		struct LSOption_eventSetSendingOption_Parms
		{
			ULSSendingOption* sendingOption;
			ULSOption* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sendingOption;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::NewProp_sendingOption = { "sendingOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetSendingOption_Parms, sendingOption), Z_Construct_UClass_ULSSendingOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetSendingOption_Parms, ReturnValue), Z_Construct_UClass_ULSOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::NewProp_sendingOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "SetSendingOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::LSOption_eventSetSendingOption_Parms), Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_SetSendingOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_SetSendingOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics
	{
		struct LSOption_eventSetSignalingURL_Parms
		{
			FString signalingURL;
			ULSOption* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_signalingURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_signalingURL;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::NewProp_signalingURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::NewProp_signalingURL = { "signalingURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetSignalingURL_Parms, signalingURL), METADATA_PARAMS(Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::NewProp_signalingURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::NewProp_signalingURL_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSOption_eventSetSignalingURL_Parms, ReturnValue), Z_Construct_UClass_ULSOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::NewProp_signalingURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSOption, nullptr, "SetSignalingURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::LSOption_eventSetSignalingURL_Parms), Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSOption_SetSignalingURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSOption_SetSignalingURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSOption);
	UClass* Z_Construct_UClass_ULSOption_NoRegister()
	{
		return ULSOption::StaticClass();
	}
	struct Z_Construct_UClass_ULSOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__sendingOption_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__sendingOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__receivingOption_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__receivingOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSOption_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSOption_GetEnableCpuOveruseDetection, "GetEnableCpuOveruseDetection" }, // 3572978391
		{ &Z_Construct_UFunction_ULSOption_GetIceServersProtocol, "GetIceServersProtocol" }, // 4060646435
		{ &Z_Construct_UFunction_ULSOption_GetIceTransportPolicy, "GetIceTransportPolicy" }, // 194423819
		{ &Z_Construct_UFunction_ULSOption_GetLocalLSTracks, "GetLocalLSTracks" }, // 2896711571
		{ &Z_Construct_UFunction_ULSOption_GetMetadata, "GetMetadata" }, // 1773201447
		{ &Z_Construct_UFunction_ULSOption_GetReceivingOption, "GetReceivingOption" }, // 3565346971
		{ &Z_Construct_UFunction_ULSOption_GetSendingOption, "GetSendingOption" }, // 88438422
		{ &Z_Construct_UFunction_ULSOption_GetSignalingURL, "GetSignalingURL" }, // 584115038
		{ &Z_Construct_UFunction_ULSOption_SetEnableCpuOveruseDetection, "SetEnableCpuOveruseDetection" }, // 2291808731
		{ &Z_Construct_UFunction_ULSOption_SetIceServersProtocol, "SetIceServersProtocol" }, // 1067245772
		{ &Z_Construct_UFunction_ULSOption_SetIceTransportPolicy, "SetIceTransportPolicy" }, // 3437742288
		{ &Z_Construct_UFunction_ULSOption_SetLocalLSTracks, "SetLocalLSTracks" }, // 3294638573
		{ &Z_Construct_UFunction_ULSOption_SetMeta, "SetMeta" }, // 1005661883
		{ &Z_Construct_UFunction_ULSOption_SetReceivingOption, "SetReceivingOption" }, // 840445891
		{ &Z_Construct_UFunction_ULSOption_SetSendingOption, "SetSendingOption" }, // 1558954482
		{ &Z_Construct_UFunction_ULSOption_SetSignalingURL, "SetSignalingURL" }, // 3224442365
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSOption_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LSOption.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSOption_Statics::NewProp__sendingOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULSOption_Statics::NewProp__sendingOption = { "_sendingOption", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSOption, _sendingOption), Z_Construct_UClass_ULSSendingOption_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULSOption_Statics::NewProp__sendingOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSOption_Statics::NewProp__sendingOption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSOption_Statics::NewProp__receivingOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/LSOption.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULSOption_Statics::NewProp__receivingOption = { "_receivingOption", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSOption, _receivingOption), Z_Construct_UClass_ULSReceivingOption_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULSOption_Statics::NewProp__receivingOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSOption_Statics::NewProp__receivingOption_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULSOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSOption_Statics::NewProp__sendingOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSOption_Statics::NewProp__receivingOption,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSOption>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSOption_Statics::ClassParams = {
		&ULSOption::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULSOption_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULSOption_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULSOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSOption()
	{
		if (!Z_Registration_Info_UClass_ULSOption.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSOption.OuterSingleton, Z_Construct_UClass_ULSOption_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSOption.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSOption>()
	{
		return ULSOption::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSOption);
	ULSOption::~ULSOption() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSOption, ULSOption::StaticClass, TEXT("ULSOption"), &Z_Registration_Info_UClass_ULSOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSOption), 1106566241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_1540898142(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
