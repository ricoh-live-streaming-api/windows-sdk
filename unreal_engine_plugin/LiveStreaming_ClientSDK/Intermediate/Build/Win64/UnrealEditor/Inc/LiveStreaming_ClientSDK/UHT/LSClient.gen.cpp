// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/LSClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSClient() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSClient();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSClient_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSClientListener_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStream_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamConstraints_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSOption_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSRTCStatsReport_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSClient::execChangeVideoSendFramerate)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_maxFramerate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeVideoSendFramerate(Z_Param_maxFramerate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execChangeMute)
	{
		P_GET_OBJECT(ULSTrack,Z_Param_lsTrack);
		P_GET_ENUM(ELSMuteType,Z_Param_muteType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMute(Z_Param_lsTrack,ELSMuteType(Z_Param_muteType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execReplaceMediaStreamTrack)
	{
		P_GET_OBJECT(ULSTrack,Z_Param_lsTrack);
		P_GET_OBJECT(ULSMediaStreamTrack,Z_Param_mediaStreamTrack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceMediaStreamTrack(Z_Param_lsTrack,Z_Param_mediaStreamTrack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execSetAudioOutputDevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioOutputDevice(Z_Param_deviceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execSetAudioInputDevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioInputDevice(Z_Param_deviceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execGetStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,ULSRTCStatsReport*>*)Z_Param__Result=P_THIS->GetStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execSetEventListener)
	{
		P_GET_OBJECT(ULSClientListener,Z_Param_listener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEventListener(Z_Param_listener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execChangeVideoSendBitrate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_maxBitrateKbps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeVideoSendBitrate(Z_Param_maxBitrateKbps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execChangeMediaRequirements)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_connectionId);
		P_GET_ENUM(ELSVideoRequirement,Z_Param_videoRequirement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMediaRequirements(Z_Param_connectionId,ELSVideoRequirement(Z_Param_videoRequirement));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execUpdateTrackMeta)
	{
		P_GET_OBJECT(ULSTrack,Z_Param_lsTrack);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_meta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTrackMeta(Z_Param_lsTrack,Z_Param_Out_meta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execUpdateMeta)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_meta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeta(Z_Param_Out_meta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSConnectionState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_clientId);
		P_GET_PROPERTY(FStrProperty,Z_Param_accessToken);
		P_GET_OBJECT(ULSOption,Z_Param_option);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(Z_Param_clientId,Z_Param_accessToken,Z_Param_option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execGetUserMedia)
	{
		P_GET_OBJECT(ULSMediaStreamConstraints,Z_Param_constrants);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSMediaStream**)Z_Param__Result=P_THIS->GetUserMedia(Z_Param_constrants);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSClient::execDispose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dispose();
		P_NATIVE_END;
	}
	void ULSClient::StaticRegisterNativesULSClient()
	{
		UClass* Class = ULSClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMediaRequirements", &ULSClient::execChangeMediaRequirements },
			{ "ChangeMute", &ULSClient::execChangeMute },
			{ "ChangeVideoSendBitrate", &ULSClient::execChangeVideoSendBitrate },
			{ "ChangeVideoSendFramerate", &ULSClient::execChangeVideoSendFramerate },
			{ "Connect", &ULSClient::execConnect },
			{ "Disconnect", &ULSClient::execDisconnect },
			{ "Dispose", &ULSClient::execDispose },
			{ "GetState", &ULSClient::execGetState },
			{ "GetStats", &ULSClient::execGetStats },
			{ "GetUserMedia", &ULSClient::execGetUserMedia },
			{ "ReplaceMediaStreamTrack", &ULSClient::execReplaceMediaStreamTrack },
			{ "SetAudioInputDevice", &ULSClient::execSetAudioInputDevice },
			{ "SetAudioOutputDevice", &ULSClient::execSetAudioOutputDevice },
			{ "SetEventListener", &ULSClient::execSetEventListener },
			{ "UpdateMeta", &ULSClient::execUpdateMeta },
			{ "UpdateTrackMeta", &ULSClient::execUpdateTrackMeta },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics
	{
		struct LSClient_eventChangeMediaRequirements_Parms
		{
			FString connectionId;
			ELSVideoRequirement videoRequirement;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connectionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_videoRequirement_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_videoRequirement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::NewProp_connectionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::NewProp_connectionId = { "connectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventChangeMediaRequirements_Parms, connectionId), METADATA_PARAMS(Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::NewProp_connectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::NewProp_connectionId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::NewProp_videoRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::NewProp_videoRequirement = { "videoRequirement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventChangeMediaRequirements_Parms, videoRequirement), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSVideoRequirement, METADATA_PARAMS(nullptr, 0) }; // 3037593034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::NewProp_connectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::NewProp_videoRequirement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::NewProp_videoRequirement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "ChangeMediaRequirements", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::LSClient_eventChangeMediaRequirements_Parms), Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_ChangeMediaRequirements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_ChangeMediaRequirements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_ChangeMute_Statics
	{
		struct LSClient_eventChangeMute_Parms
		{
			ULSTrack* lsTrack;
			ELSMuteType muteType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lsTrack;
		static const UECodeGen_Private::FBytePropertyParams NewProp_muteType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_muteType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSClient_ChangeMute_Statics::NewProp_lsTrack = { "lsTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventChangeMute_Parms, lsTrack), Z_Construct_UClass_ULSTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSClient_ChangeMute_Statics::NewProp_muteType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSClient_ChangeMute_Statics::NewProp_muteType = { "muteType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventChangeMute_Parms, muteType), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSMuteType, METADATA_PARAMS(nullptr, 0) }; // 2148500874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_ChangeMute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_ChangeMute_Statics::NewProp_lsTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_ChangeMute_Statics::NewProp_muteType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_ChangeMute_Statics::NewProp_muteType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_ChangeMute_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_ChangeMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "ChangeMute", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_ChangeMute_Statics::LSClient_eventChangeMute_Parms), Z_Construct_UFunction_ULSClient_ChangeMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_ChangeMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_ChangeMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_ChangeMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_ChangeMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_ChangeMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics
	{
		struct LSClient_eventChangeVideoSendBitrate_Parms
		{
			int32 maxBitrateKbps;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxBitrateKbps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics::NewProp_maxBitrateKbps = { "maxBitrateKbps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventChangeVideoSendBitrate_Parms, maxBitrateKbps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics::NewProp_maxBitrateKbps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "ChangeVideoSendBitrate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics::LSClient_eventChangeVideoSendBitrate_Parms), Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics
	{
		struct LSClient_eventChangeVideoSendFramerate_Parms
		{
			double maxFramerate;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_maxFramerate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics::NewProp_maxFramerate = { "maxFramerate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventChangeVideoSendFramerate_Parms, maxFramerate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics::NewProp_maxFramerate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "ChangeVideoSendFramerate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics::LSClient_eventChangeVideoSendFramerate_Parms), Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_Connect_Statics
	{
		struct LSClient_eventConnect_Parms
		{
			FString clientId;
			FString accessToken;
			ULSOption* option;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clientId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_accessToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_accessToken;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_option;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_clientId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_clientId = { "clientId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventConnect_Parms, clientId), METADATA_PARAMS(Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_clientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_clientId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_accessToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_accessToken = { "accessToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventConnect_Parms, accessToken), METADATA_PARAMS(Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_accessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_accessToken_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_option = { "option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventConnect_Parms, option), Z_Construct_UClass_ULSOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_clientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_accessToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_Connect_Statics::NewProp_option,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "Connect", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_Connect_Statics::LSClient_eventConnect_Parms), Z_Construct_UFunction_ULSClient_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_Disconnect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "Disconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_Dispose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_Dispose_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_Dispose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "Dispose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_Dispose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_Dispose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_Dispose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_Dispose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_GetState_Statics
	{
		struct LSClient_eventGetState_Parms
		{
			ELSConnectionState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSClient_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSClient_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSConnectionState, METADATA_PARAMS(nullptr, 0) }; // 718038860
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "GetState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_GetState_Statics::LSClient_eventGetState_Parms), Z_Construct_UFunction_ULSClient_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_GetStats_Statics
	{
		struct LSClient_eventGetStats_Parms
		{
			TMap<FString,ULSRTCStatsReport*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSClient_GetStats_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ULSRTCStatsReport_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSClient_GetStats_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSClient_GetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventGetStats_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_GetStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_GetStats_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_GetStats_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_GetStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_GetStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "GetStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_GetStats_Statics::LSClient_eventGetStats_Parms), Z_Construct_UFunction_ULSClient_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_GetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_GetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_GetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_GetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_GetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_GetUserMedia_Statics
	{
		struct LSClient_eventGetUserMedia_Parms
		{
			ULSMediaStreamConstraints* constrants;
			ULSMediaStream* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_constrants;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::NewProp_constrants = { "constrants", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventGetUserMedia_Parms, constrants), Z_Construct_UClass_ULSMediaStreamConstraints_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventGetUserMedia_Parms, ReturnValue), Z_Construct_UClass_ULSMediaStream_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::NewProp_constrants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "GetUserMedia", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::LSClient_eventGetUserMedia_Parms), Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_GetUserMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_GetUserMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics
	{
		struct LSClient_eventReplaceMediaStreamTrack_Parms
		{
			ULSTrack* lsTrack;
			ULSMediaStreamTrack* mediaStreamTrack;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lsTrack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mediaStreamTrack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::NewProp_lsTrack = { "lsTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventReplaceMediaStreamTrack_Parms, lsTrack), Z_Construct_UClass_ULSTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::NewProp_mediaStreamTrack = { "mediaStreamTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventReplaceMediaStreamTrack_Parms, mediaStreamTrack), Z_Construct_UClass_ULSMediaStreamTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::NewProp_lsTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::NewProp_mediaStreamTrack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "ReplaceMediaStreamTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::LSClient_eventReplaceMediaStreamTrack_Parms), Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics
	{
		struct LSClient_eventSetAudioInputDevice_Parms
		{
			FString deviceName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::NewProp_deviceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventSetAudioInputDevice_Parms, deviceName), METADATA_PARAMS(Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::NewProp_deviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::NewProp_deviceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::NewProp_deviceName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "SetAudioInputDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::LSClient_eventSetAudioInputDevice_Parms), Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_SetAudioInputDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_SetAudioInputDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics
	{
		struct LSClient_eventSetAudioOutputDevice_Parms
		{
			FString deviceName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::NewProp_deviceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventSetAudioOutputDevice_Parms, deviceName), METADATA_PARAMS(Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::NewProp_deviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::NewProp_deviceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::NewProp_deviceName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "SetAudioOutputDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::LSClient_eventSetAudioOutputDevice_Parms), Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_SetAudioOutputDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_SetAudioOutputDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_SetEventListener_Statics
	{
		struct LSClient_eventSetEventListener_Parms
		{
			ULSClientListener* listener;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_listener;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSClient_SetEventListener_Statics::NewProp_listener = { "listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventSetEventListener_Parms, listener), Z_Construct_UClass_ULSClientListener_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_SetEventListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_SetEventListener_Statics::NewProp_listener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_SetEventListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_SetEventListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "SetEventListener", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_SetEventListener_Statics::LSClient_eventSetEventListener_Parms), Z_Construct_UFunction_ULSClient_SetEventListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_SetEventListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_SetEventListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_SetEventListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_SetEventListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_SetEventListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_UpdateMeta_Statics
	{
		struct LSClient_eventUpdateMeta_Parms
		{
			TMap<FString,FString> meta;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_meta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_meta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_meta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::NewProp_meta_ValueProp = { "meta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::NewProp_meta_Key_KeyProp = { "meta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::NewProp_meta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::NewProp_meta = { "meta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventUpdateMeta_Parms, meta), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::NewProp_meta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::NewProp_meta_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::NewProp_meta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::NewProp_meta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::NewProp_meta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "UpdateMeta", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::LSClient_eventUpdateMeta_Parms), Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_UpdateMeta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_UpdateMeta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics
	{
		struct LSClient_eventUpdateTrackMeta_Parms
		{
			ULSTrack* lsTrack;
			TMap<FString,FString> meta;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lsTrack;
		static const UECodeGen_Private::FStrPropertyParams NewProp_meta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_meta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_meta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::NewProp_lsTrack = { "lsTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventUpdateTrackMeta_Parms, lsTrack), Z_Construct_UClass_ULSTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::NewProp_meta_ValueProp = { "meta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::NewProp_meta_Key_KeyProp = { "meta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::NewProp_meta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::NewProp_meta = { "meta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSClient_eventUpdateTrackMeta_Parms, meta), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::NewProp_meta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::NewProp_meta_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::NewProp_lsTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::NewProp_meta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::NewProp_meta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::NewProp_meta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSClient, nullptr, "UpdateTrackMeta", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::LSClient_eventUpdateTrackMeta_Parms), Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSClient_UpdateTrackMeta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSClient_UpdateTrackMeta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSClient);
	UClass* Z_Construct_UClass_ULSClient_NoRegister()
	{
		return ULSClient::StaticClass();
	}
	struct Z_Construct_UClass_ULSClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSClient_ChangeMediaRequirements, "ChangeMediaRequirements" }, // 2868171593
		{ &Z_Construct_UFunction_ULSClient_ChangeMute, "ChangeMute" }, // 744260582
		{ &Z_Construct_UFunction_ULSClient_ChangeVideoSendBitrate, "ChangeVideoSendBitrate" }, // 2519734144
		{ &Z_Construct_UFunction_ULSClient_ChangeVideoSendFramerate, "ChangeVideoSendFramerate" }, // 4159076641
		{ &Z_Construct_UFunction_ULSClient_Connect, "Connect" }, // 1418692633
		{ &Z_Construct_UFunction_ULSClient_Disconnect, "Disconnect" }, // 2751972747
		{ &Z_Construct_UFunction_ULSClient_Dispose, "Dispose" }, // 2591137245
		{ &Z_Construct_UFunction_ULSClient_GetState, "GetState" }, // 2468284225
		{ &Z_Construct_UFunction_ULSClient_GetStats, "GetStats" }, // 335664154
		{ &Z_Construct_UFunction_ULSClient_GetUserMedia, "GetUserMedia" }, // 2950385888
		{ &Z_Construct_UFunction_ULSClient_ReplaceMediaStreamTrack, "ReplaceMediaStreamTrack" }, // 3283508653
		{ &Z_Construct_UFunction_ULSClient_SetAudioInputDevice, "SetAudioInputDevice" }, // 3799572409
		{ &Z_Construct_UFunction_ULSClient_SetAudioOutputDevice, "SetAudioOutputDevice" }, // 2707559345
		{ &Z_Construct_UFunction_ULSClient_SetEventListener, "SetEventListener" }, // 599975376
		{ &Z_Construct_UFunction_ULSClient_UpdateMeta, "UpdateMeta" }, // 1047178400
		{ &Z_Construct_UFunction_ULSClient_UpdateTrackMeta, "UpdateTrackMeta" }, // 611515639
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LSClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LSClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSClient_Statics::ClassParams = {
		&ULSClient::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSClient()
	{
		if (!Z_Registration_Info_UClass_ULSClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSClient.OuterSingleton, Z_Construct_UClass_ULSClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSClient.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSClient>()
	{
		return ULSClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSClient);
	ULSClient::~ULSClient() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSClient, ULSClient::StaticClass, TEXT("ULSClient"), &Z_Registration_Info_UClass_ULSClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSClient), 3213014759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_3914361370(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
