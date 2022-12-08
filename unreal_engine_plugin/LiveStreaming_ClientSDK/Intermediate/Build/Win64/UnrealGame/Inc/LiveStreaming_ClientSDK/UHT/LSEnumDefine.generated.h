// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LSEnumDefine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVESTREAMING_CLIENTSDK_LSEnumDefine_generated_h
#error "LSEnumDefine.generated.h already included, missing '#pragma once' in LSEnumDefine.h"
#endif
#define LIVESTREAMING_CLIENTSDK_LSEnumDefine_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSEnumDefine_h


#define FOREACH_ENUM_ELSCONNECTIONSTATE(op) \
	op(ELSConnectionState::Idle) \
	op(ELSConnectionState::Connecting) \
	op(ELSConnectionState::Open) \
	op(ELSConnectionState::Closing) \
	op(ELSConnectionState::Closed) 

enum class ELSConnectionState : uint8;
template<> struct TIsUEnumClass<ELSConnectionState> { enum { Value = true }; };
template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSConnectionState>();

#define FOREACH_ENUM_ELSERRORTYPE(op) \
	op(ELSErrorType::ParameterError) \
	op(ELSErrorType::NetworkError) \
	op(ELSErrorType::UnexpectedError) 

enum class ELSErrorType : uint8;
template<> struct TIsUEnumClass<ELSErrorType> { enum { Value = true }; };
template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSErrorType>();

#define FOREACH_ENUM_ELSICETRANSPORTPOLICY(op) \
	op(ELSIceTransportPolicy::Relay) \
	op(ELSIceTransportPolicy::All) \
	op(ELSIceTransportPolicy::isNull) 

enum class ELSIceTransportPolicy : uint8;
template<> struct TIsUEnumClass<ELSIceTransportPolicy> { enum { Value = true }; };
template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSIceTransportPolicy>();

#define FOREACH_ENUM_ELSSTABILITY(op) \
	op(ELSStability::IceStable) \
	op(ELSStability::IceUnstable) 

enum class ELSStability : uint8;
template<> struct TIsUEnumClass<ELSStability> { enum { Value = true }; };
template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSStability>();

#define FOREACH_ENUM_ELSMUTETYPE(op) \
	op(ELSMuteType::Unmute) \
	op(ELSMuteType::SoftMute) \
	op(ELSMuteType::HardMute) 

enum class ELSMuteType : uint8;
template<> struct TIsUEnumClass<ELSMuteType> { enum { Value = true }; };
template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSMuteType>();

#define FOREACH_ENUM_ELSICESERVERSPROTOCOL(op) \
	op(ELSIceServersProtocol::All) \
	op(ELSIceServersProtocol::Udp) \
	op(ELSIceServersProtocol::Tcp) \
	op(ELSIceServersProtocol::Tls) \
	op(ELSIceServersProtocol::isNull) 

enum class ELSIceServersProtocol : uint8;
template<> struct TIsUEnumClass<ELSIceServersProtocol> { enum { Value = true }; };
template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSIceServersProtocol>();

#define FOREACH_ENUM_ELSVIDEOREQUIREMENT(op) \
	op(ELSVideoRequirement::Required) \
	op(ELSVideoRequirement::Unrequired) 

enum class ELSVideoRequirement : uint8;
template<> struct TIsUEnumClass<ELSVideoRequirement> { enum { Value = true }; };
template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSVideoRequirement>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
