// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/LSSendingVideoOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSSendingVideoOption() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSSendingVideoOption();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSSendingVideoOption_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELSVideoCodecType;
	static UEnum* ELSVideoCodecType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELSVideoCodecType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELSVideoCodecType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType, Z_Construct_UPackage__Script_LiveStreaming_ClientSDK(), TEXT("ELSVideoCodecType"));
		}
		return Z_Registration_Info_UEnum_ELSVideoCodecType.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSVideoCodecType>()
	{
		return ELSVideoCodecType_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType_Statics::Enumerators[] = {
		{ "ELSVideoCodecType::Vp8", (int64)ELSVideoCodecType::Vp8 },
		{ "ELSVideoCodecType::Vp9", (int64)ELSVideoCodecType::Vp9 },
		{ "ELSVideoCodecType::H264", (int64)ELSVideoCodecType::H264 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "H264.Name", "ELSVideoCodecType::H264" },
		{ "ModuleRelativePath", "Public/LSSendingVideoOption.h" },
		{ "Vp8.Name", "ELSVideoCodecType::Vp8" },
		{ "Vp9.Name", "ELSVideoCodecType::Vp9" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
		nullptr,
		"ELSVideoCodecType",
		"ELSVideoCodecType",
		Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType()
	{
		if (!Z_Registration_Info_UEnum_ELSVideoCodecType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELSVideoCodecType.InnerSingleton, Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELSVideoCodecType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELSSendingPriority;
	static UEnum* ELSSendingPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELSSendingPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELSSendingPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority, Z_Construct_UPackage__Script_LiveStreaming_ClientSDK(), TEXT("ELSSendingPriority"));
		}
		return Z_Registration_Info_UEnum_ELSSendingPriority.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSSendingPriority>()
	{
		return ELSSendingPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority_Statics::Enumerators[] = {
		{ "ELSSendingPriority::Normal", (int64)ELSSendingPriority::Normal },
		{ "ELSSendingPriority::High", (int64)ELSSendingPriority::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "ELSSendingPriority::High" },
		{ "ModuleRelativePath", "Public/LSSendingVideoOption.h" },
		{ "Normal.Name", "ELSSendingPriority::Normal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
		nullptr,
		"ELSSendingPriority",
		"ELSSendingPriority",
		Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority()
	{
		if (!Z_Registration_Info_UEnum_ELSSendingPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELSSendingPriority.InnerSingleton, Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELSSendingPriority.InnerSingleton;
	}
	DEFINE_FUNCTION(ULSSendingVideoOption::execSetMaxBitrateKbps)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_maxBitrateKbps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSSendingVideoOption**)Z_Param__Result=P_THIS->SetMaxBitrateKbps(Z_Param_maxBitrateKbps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSSendingVideoOption::execSetPriority)
	{
		P_GET_ENUM(ELSSendingPriority,Z_Param_sendingPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSSendingVideoOption**)Z_Param__Result=P_THIS->SetPriority(ELSSendingPriority(Z_Param_sendingPriority));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSSendingVideoOption::execSetCodec)
	{
		P_GET_ENUM(ELSVideoCodecType,Z_Param_videoCodecType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSSendingVideoOption**)Z_Param__Result=P_THIS->SetCodec(ELSVideoCodecType(Z_Param_videoCodecType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSSendingVideoOption::execGetMaxBitrateKbps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxBitrateKbps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSSendingVideoOption::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSSendingPriority*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSSendingVideoOption::execGetCodec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSVideoCodecType*)Z_Param__Result=P_THIS->GetCodec();
		P_NATIVE_END;
	}
	void ULSSendingVideoOption::StaticRegisterNativesULSSendingVideoOption()
	{
		UClass* Class = ULSSendingVideoOption::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCodec", &ULSSendingVideoOption::execGetCodec },
			{ "GetMaxBitrateKbps", &ULSSendingVideoOption::execGetMaxBitrateKbps },
			{ "GetPriority", &ULSSendingVideoOption::execGetPriority },
			{ "SetCodec", &ULSSendingVideoOption::execSetCodec },
			{ "SetMaxBitrateKbps", &ULSSendingVideoOption::execSetMaxBitrateKbps },
			{ "SetPriority", &ULSSendingVideoOption::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics
	{
		struct LSSendingVideoOption_eventGetCodec_Parms
		{
			ELSVideoCodecType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingVideoOption_eventGetCodec_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType, METADATA_PARAMS(nullptr, 0) }; // 708863712
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSSendingVideoOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSSendingVideoOption, nullptr, "GetCodec", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::LSSendingVideoOption_eventGetCodec_Parms), Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSSendingVideoOption_GetCodec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSSendingVideoOption_GetCodec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics
	{
		struct LSSendingVideoOption_eventGetMaxBitrateKbps_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingVideoOption_eventGetMaxBitrateKbps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSSendingVideoOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSSendingVideoOption, nullptr, "GetMaxBitrateKbps", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics::LSSendingVideoOption_eventGetMaxBitrateKbps_Parms), Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics
	{
		struct LSSendingVideoOption_eventGetPriority_Parms
		{
			ELSSendingPriority ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingVideoOption_eventGetPriority_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority, METADATA_PARAMS(nullptr, 0) }; // 4024250775
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSSendingVideoOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSSendingVideoOption, nullptr, "GetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::LSSendingVideoOption_eventGetPriority_Parms), Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSSendingVideoOption_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSSendingVideoOption_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics
	{
		struct LSSendingVideoOption_eventSetCodec_Parms
		{
			ELSVideoCodecType videoCodecType;
			ULSSendingVideoOption* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_videoCodecType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_videoCodecType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::NewProp_videoCodecType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::NewProp_videoCodecType = { "videoCodecType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingVideoOption_eventSetCodec_Parms, videoCodecType), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoCodecType, METADATA_PARAMS(nullptr, 0) }; // 708863712
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingVideoOption_eventSetCodec_Parms, ReturnValue), Z_Construct_UClass_ULSSendingVideoOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::NewProp_videoCodecType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::NewProp_videoCodecType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSSendingVideoOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSSendingVideoOption, nullptr, "SetCodec", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::LSSendingVideoOption_eventSetCodec_Parms), Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSSendingVideoOption_SetCodec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSSendingVideoOption_SetCodec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics
	{
		struct LSSendingVideoOption_eventSetMaxBitrateKbps_Parms
		{
			int32 maxBitrateKbps;
			ULSSendingVideoOption* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxBitrateKbps;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::NewProp_maxBitrateKbps = { "maxBitrateKbps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingVideoOption_eventSetMaxBitrateKbps_Parms, maxBitrateKbps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingVideoOption_eventSetMaxBitrateKbps_Parms, ReturnValue), Z_Construct_UClass_ULSSendingVideoOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::NewProp_maxBitrateKbps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSSendingVideoOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSSendingVideoOption, nullptr, "SetMaxBitrateKbps", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::LSSendingVideoOption_eventSetMaxBitrateKbps_Parms), Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics
	{
		struct LSSendingVideoOption_eventSetPriority_Parms
		{
			ELSSendingPriority sendingPriority;
			ULSSendingVideoOption* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_sendingPriority_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_sendingPriority;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::NewProp_sendingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::NewProp_sendingPriority = { "sendingPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingVideoOption_eventSetPriority_Parms, sendingPriority), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSSendingPriority, METADATA_PARAMS(nullptr, 0) }; // 4024250775
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSSendingVideoOption_eventSetPriority_Parms, ReturnValue), Z_Construct_UClass_ULSSendingVideoOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::NewProp_sendingPriority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::NewProp_sendingPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSSendingVideoOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSSendingVideoOption, nullptr, "SetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::LSSendingVideoOption_eventSetPriority_Parms), Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSSendingVideoOption_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSSendingVideoOption_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSSendingVideoOption);
	UClass* Z_Construct_UClass_ULSSendingVideoOption_NoRegister()
	{
		return ULSSendingVideoOption::StaticClass();
	}
	struct Z_Construct_UClass_ULSSendingVideoOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSSendingVideoOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSSendingVideoOption_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSSendingVideoOption_GetCodec, "GetCodec" }, // 169407647
		{ &Z_Construct_UFunction_ULSSendingVideoOption_GetMaxBitrateKbps, "GetMaxBitrateKbps" }, // 3236213188
		{ &Z_Construct_UFunction_ULSSendingVideoOption_GetPriority, "GetPriority" }, // 2665928274
		{ &Z_Construct_UFunction_ULSSendingVideoOption_SetCodec, "SetCodec" }, // 4257730630
		{ &Z_Construct_UFunction_ULSSendingVideoOption_SetMaxBitrateKbps, "SetMaxBitrateKbps" }, // 2014142254
		{ &Z_Construct_UFunction_ULSSendingVideoOption_SetPriority, "SetPriority" }, // 1715582670
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSSendingVideoOption_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LSSendingVideoOption.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LSSendingVideoOption.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSSendingVideoOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSSendingVideoOption>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSSendingVideoOption_Statics::ClassParams = {
		&ULSSendingVideoOption::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSSendingVideoOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSSendingVideoOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSSendingVideoOption()
	{
		if (!Z_Registration_Info_UClass_ULSSendingVideoOption.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSSendingVideoOption.OuterSingleton, Z_Construct_UClass_ULSSendingVideoOption_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSSendingVideoOption.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSSendingVideoOption>()
	{
		return ULSSendingVideoOption::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSSendingVideoOption);
	ULSSendingVideoOption::~ULSSendingVideoOption() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingVideoOption_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingVideoOption_h_Statics::EnumInfo[] = {
		{ ELSVideoCodecType_StaticEnum, TEXT("ELSVideoCodecType"), &Z_Registration_Info_UEnum_ELSVideoCodecType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 708863712U) },
		{ ELSSendingPriority_StaticEnum, TEXT("ELSSendingPriority"), &Z_Registration_Info_UEnum_ELSSendingPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4024250775U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingVideoOption_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSSendingVideoOption, ULSSendingVideoOption::StaticClass, TEXT("ULSSendingVideoOption"), &Z_Registration_Info_UClass_ULSSendingVideoOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSSendingVideoOption), 155670713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingVideoOption_h_2266815745(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingVideoOption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingVideoOption_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingVideoOption_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSSendingVideoOption_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
