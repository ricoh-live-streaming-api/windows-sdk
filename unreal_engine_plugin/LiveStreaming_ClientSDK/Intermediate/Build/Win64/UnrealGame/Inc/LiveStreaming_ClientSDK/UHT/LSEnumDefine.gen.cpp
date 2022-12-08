// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/LSEnumDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSEnumDefine() {}
// Cross Module References
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELSConnectionState;
	static UEnum* ELSConnectionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELSConnectionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELSConnectionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState, Z_Construct_UPackage__Script_LiveStreaming_ClientSDK(), TEXT("ELSConnectionState"));
		}
		return Z_Registration_Info_UEnum_ELSConnectionState.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSConnectionState>()
	{
		return ELSConnectionState_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState_Statics::Enumerators[] = {
		{ "ELSConnectionState::Idle", (int64)ELSConnectionState::Idle },
		{ "ELSConnectionState::Connecting", (int64)ELSConnectionState::Connecting },
		{ "ELSConnectionState::Open", (int64)ELSConnectionState::Open },
		{ "ELSConnectionState::Closing", (int64)ELSConnectionState::Closing },
		{ "ELSConnectionState::Closed", (int64)ELSConnectionState::Closed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Closed.Comment", "/// <summary>\n/// The <see cref=\"Client\"/> is disconnected from the server.\n/// </summary>\n" },
		{ "Closed.Name", "ELSConnectionState::Closed" },
		{ "Closed.ToolTip", "<summary>\nThe <see cref=\"Client\"/> is disconnected from the server.\n</summary>" },
		{ "Closing.Comment", "/// <summary>\n/// The <see cref=\"Client\"/> is disconnecting from the server.\n/// </summary>\n" },
		{ "Closing.Name", "ELSConnectionState::Closing" },
		{ "Closing.ToolTip", "<summary>\nThe <see cref=\"Client\"/> is disconnecting from the server.\n</summary>" },
		{ "Connecting.Comment", "/// <summary>\n/// The <see cref=\"Client\"/> is connecting to the server.\n/// </summary>\n" },
		{ "Connecting.Name", "ELSConnectionState::Connecting" },
		{ "Connecting.ToolTip", "<summary>\nThe <see cref=\"Client\"/> is connecting to the server.\n</summary>" },
		{ "Idle.Comment", "/// <summary>\n/// The <see cref=\"Client\"/> is not connected, and ready to connect.\n/// </summary>\n" },
		{ "Idle.Name", "ELSConnectionState::Idle" },
		{ "Idle.ToolTip", "<summary>\nThe <see cref=\"Client\"/> is not connected, and ready to connect.\n</summary>" },
		{ "ModuleRelativePath", "Public/LSEnumDefine.h" },
		{ "Open.Comment", "/// <summary>\n/// The <see cref=\"Client\"/> is connected to the server.\n/// </summary>\n" },
		{ "Open.Name", "ELSConnectionState::Open" },
		{ "Open.ToolTip", "<summary>\nThe <see cref=\"Client\"/> is connected to the server.\n</summary>" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
		nullptr,
		"ELSConnectionState",
		"ELSConnectionState",
		Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState()
	{
		if (!Z_Registration_Info_UEnum_ELSConnectionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELSConnectionState.InnerSingleton, Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELSConnectionState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELSErrorType;
	static UEnum* ELSErrorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELSErrorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELSErrorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType, Z_Construct_UPackage__Script_LiveStreaming_ClientSDK(), TEXT("ELSErrorType"));
		}
		return Z_Registration_Info_UEnum_ELSErrorType.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSErrorType>()
	{
		return ELSErrorType_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType_Statics::Enumerators[] = {
		{ "ELSErrorType::ParameterError", (int64)ELSErrorType::ParameterError },
		{ "ELSErrorType::NetworkError", (int64)ELSErrorType::NetworkError },
		{ "ELSErrorType::UnexpectedError", (int64)ELSErrorType::UnexpectedError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LSEnumDefine.h" },
		{ "NetworkError.Comment", "/// <summary>\n/// Network error\n/// </summary>\n" },
		{ "NetworkError.Name", "ELSErrorType::NetworkError" },
		{ "NetworkError.ToolTip", "<summary>\nNetwork error\n</summary>" },
		{ "ParameterError.Comment", "/// <summary>\n/// Invalid parameter\n/// </summary>\n" },
		{ "ParameterError.Name", "ELSErrorType::ParameterError" },
		{ "ParameterError.ToolTip", "<summary>\nInvalid parameter\n</summary>" },
		{ "UnexpectedError.Comment", "/// <summary>\n/// Unexpected error\n/// </summary>\n" },
		{ "UnexpectedError.Name", "ELSErrorType::UnexpectedError" },
		{ "UnexpectedError.ToolTip", "<summary>\nUnexpected error\n</summary>" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
		nullptr,
		"ELSErrorType",
		"ELSErrorType",
		Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType()
	{
		if (!Z_Registration_Info_UEnum_ELSErrorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELSErrorType.InnerSingleton, Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSErrorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELSErrorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELSIceTransportPolicy;
	static UEnum* ELSIceTransportPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELSIceTransportPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELSIceTransportPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy, Z_Construct_UPackage__Script_LiveStreaming_ClientSDK(), TEXT("ELSIceTransportPolicy"));
		}
		return Z_Registration_Info_UEnum_ELSIceTransportPolicy.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSIceTransportPolicy>()
	{
		return ELSIceTransportPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy_Statics::Enumerators[] = {
		{ "ELSIceTransportPolicy::Relay", (int64)ELSIceTransportPolicy::Relay },
		{ "ELSIceTransportPolicy::All", (int64)ELSIceTransportPolicy::All },
		{ "ELSIceTransportPolicy::isNull", (int64)ELSIceTransportPolicy::isNull },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "/// <summary>\n/// All ICE candidates will be considered.\n/// </summary>\n" },
		{ "All.Name", "ELSIceTransportPolicy::All" },
		{ "All.ToolTip", "<summary>\nAll ICE candidates will be considered.\n</summary>" },
		{ "BlueprintType", "true" },
		{ "isNull.Name", "ELSIceTransportPolicy::isNull" },
		{ "ModuleRelativePath", "Public/LSEnumDefine.h" },
		{ "Relay.Comment", "/// <summary>\n/// Only ICE candidates whose IP addresses are being relayed, such as those being passed through a TURN server, will be considered.\n/// </summary>\n" },
		{ "Relay.Name", "ELSIceTransportPolicy::Relay" },
		{ "Relay.ToolTip", "<summary>\nOnly ICE candidates whose IP addresses are being relayed, such as those being passed through a TURN server, will be considered.\n</summary>" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
		nullptr,
		"ELSIceTransportPolicy",
		"ELSIceTransportPolicy",
		Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy()
	{
		if (!Z_Registration_Info_UEnum_ELSIceTransportPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELSIceTransportPolicy.InnerSingleton, Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceTransportPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELSIceTransportPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELSStability;
	static UEnum* ELSStability_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELSStability.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELSStability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability, Z_Construct_UPackage__Script_LiveStreaming_ClientSDK(), TEXT("ELSStability"));
		}
		return Z_Registration_Info_UEnum_ELSStability.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSStability>()
	{
		return ELSStability_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability_Statics::Enumerators[] = {
		{ "ELSStability::IceStable", (int64)ELSStability::IceStable },
		{ "ELSStability::IceUnstable", (int64)ELSStability::IceUnstable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IceStable.Comment", "/// <summary>\n/// ICE is stable.\n/// </summary>\n" },
		{ "IceStable.Name", "ELSStability::IceStable" },
		{ "IceStable.ToolTip", "<summary>\nICE is stable.\n</summary>" },
		{ "IceUnstable.Comment", "/// <summary>\n/// ICE is unstable.\n/// </summary>\n" },
		{ "IceUnstable.Name", "ELSStability::IceUnstable" },
		{ "IceUnstable.ToolTip", "<summary>\nICE is unstable.\n</summary>" },
		{ "ModuleRelativePath", "Public/LSEnumDefine.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
		nullptr,
		"ELSStability",
		"ELSStability",
		Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability()
	{
		if (!Z_Registration_Info_UEnum_ELSStability.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELSStability.InnerSingleton, Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSStability_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELSStability.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELSMuteType;
	static UEnum* ELSMuteType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELSMuteType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELSMuteType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType, Z_Construct_UPackage__Script_LiveStreaming_ClientSDK(), TEXT("ELSMuteType"));
		}
		return Z_Registration_Info_UEnum_ELSMuteType.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSMuteType>()
	{
		return ELSMuteType_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType_Statics::Enumerators[] = {
		{ "ELSMuteType::Unmute", (int64)ELSMuteType::Unmute },
		{ "ELSMuteType::SoftMute", (int64)ELSMuteType::SoftMute },
		{ "ELSMuteType::HardMute", (int64)ELSMuteType::HardMute },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HardMute.Comment", "/// <summary>\n/// Hard mute\n/// </summary>\n//[Description(\"paused\")]\n" },
		{ "HardMute.Name", "ELSMuteType::HardMute" },
		{ "HardMute.ToolTip", "<summary>\nHard mute\n</summary>\n[Description(\"paused\")]" },
		{ "ModuleRelativePath", "Public/LSEnumDefine.h" },
		{ "SoftMute.Comment", "/// <summary>\n/// Soft mute\n/// </summary>\n//[Description(\"blank\")]\n" },
		{ "SoftMute.Name", "ELSMuteType::SoftMute" },
		{ "SoftMute.ToolTip", "<summary>\nSoft mute\n</summary>\n[Description(\"blank\")]" },
		{ "Unmute.Comment", "/// <summary>\n/// Unmute\n/// </summary>\n//    [Description(\"on\")]\n" },
		{ "Unmute.Name", "ELSMuteType::Unmute" },
		{ "Unmute.ToolTip", "<summary>\nUnmute\n</summary>\n   [Description(\"on\")]" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
		nullptr,
		"ELSMuteType",
		"ELSMuteType",
		Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType()
	{
		if (!Z_Registration_Info_UEnum_ELSMuteType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELSMuteType.InnerSingleton, Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELSMuteType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELSIceServersProtocol;
	static UEnum* ELSIceServersProtocol_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELSIceServersProtocol.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELSIceServersProtocol.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol, Z_Construct_UPackage__Script_LiveStreaming_ClientSDK(), TEXT("ELSIceServersProtocol"));
		}
		return Z_Registration_Info_UEnum_ELSIceServersProtocol.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSIceServersProtocol>()
	{
		return ELSIceServersProtocol_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol_Statics::Enumerators[] = {
		{ "ELSIceServersProtocol::All", (int64)ELSIceServersProtocol::All },
		{ "ELSIceServersProtocol::Udp", (int64)ELSIceServersProtocol::Udp },
		{ "ELSIceServersProtocol::Tcp", (int64)ELSIceServersProtocol::Tcp },
		{ "ELSIceServersProtocol::Tls", (int64)ELSIceServersProtocol::Tls },
		{ "ELSIceServersProtocol::isNull", (int64)ELSIceServersProtocol::isNull },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ELSIceServersProtocol::All" },
		{ "BlueprintType", "true" },
		{ "isNull.Name", "ELSIceServersProtocol::isNull" },
		{ "ModuleRelativePath", "Public/LSEnumDefine.h" },
		{ "Tcp.Name", "ELSIceServersProtocol::Tcp" },
		{ "Tls.Name", "ELSIceServersProtocol::Tls" },
		{ "Udp.Name", "ELSIceServersProtocol::Udp" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
		nullptr,
		"ELSIceServersProtocol",
		"ELSIceServersProtocol",
		Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol()
	{
		if (!Z_Registration_Info_UEnum_ELSIceServersProtocol.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELSIceServersProtocol.InnerSingleton, Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSIceServersProtocol_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELSIceServersProtocol.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELSVideoRequirement;
	static UEnum* ELSVideoRequirement_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELSVideoRequirement.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELSVideoRequirement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement, Z_Construct_UPackage__Script_LiveStreaming_ClientSDK(), TEXT("ELSVideoRequirement"));
		}
		return Z_Registration_Info_UEnum_ELSVideoRequirement.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSVideoRequirement>()
	{
		return ELSVideoRequirement_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement_Statics::Enumerators[] = {
		{ "ELSVideoRequirement::Required", (int64)ELSVideoRequirement::Required },
		{ "ELSVideoRequirement::Unrequired", (int64)ELSVideoRequirement::Unrequired },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LSEnumDefine.h" },
		{ "Required.Name", "ELSVideoRequirement::Required" },
		{ "Unrequired.Name", "ELSVideoRequirement::Unrequired" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
		nullptr,
		"ELSVideoRequirement",
		"ELSVideoRequirement",
		Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement()
	{
		if (!Z_Registration_Info_UEnum_ELSVideoRequirement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELSVideoRequirement.InnerSingleton, Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELSVideoRequirement.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSEnumDefine_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSEnumDefine_h_Statics::EnumInfo[] = {
		{ ELSConnectionState_StaticEnum, TEXT("ELSConnectionState"), &Z_Registration_Info_UEnum_ELSConnectionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 718038860U) },
		{ ELSErrorType_StaticEnum, TEXT("ELSErrorType"), &Z_Registration_Info_UEnum_ELSErrorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1651739576U) },
		{ ELSIceTransportPolicy_StaticEnum, TEXT("ELSIceTransportPolicy"), &Z_Registration_Info_UEnum_ELSIceTransportPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 439132658U) },
		{ ELSStability_StaticEnum, TEXT("ELSStability"), &Z_Registration_Info_UEnum_ELSStability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1397567122U) },
		{ ELSMuteType_StaticEnum, TEXT("ELSMuteType"), &Z_Registration_Info_UEnum_ELSMuteType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2148500874U) },
		{ ELSIceServersProtocol_StaticEnum, TEXT("ELSIceServersProtocol"), &Z_Registration_Info_UEnum_ELSIceServersProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2937303724U) },
		{ ELSVideoRequirement_StaticEnum, TEXT("ELSVideoRequirement"), &Z_Registration_Info_UEnum_ELSVideoRequirement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3037593034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSEnumDefine_h_2390654423(TEXT("/Script/LiveStreaming_ClientSDK"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSEnumDefine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSEnumDefine_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
