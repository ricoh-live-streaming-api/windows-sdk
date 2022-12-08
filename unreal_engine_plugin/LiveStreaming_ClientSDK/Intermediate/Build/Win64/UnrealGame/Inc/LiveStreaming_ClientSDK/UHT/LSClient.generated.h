// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LSClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
 class ULSRTCStatsReport;
class ULSClientListener;
class ULSMediaStream;
class ULSMediaStreamConstraints;
class ULSMediaStreamTrack;
class ULSOption;
class ULSTrack;
enum class ELSConnectionState : uint8;
enum class ELSMuteType : uint8;
enum class ELSVideoRequirement : uint8;
#ifdef LIVESTREAMING_CLIENTSDK_LSClient_generated_h
#error "LSClient.generated.h already included, missing '#pragma once' in LSClient.h"
#endif
#define LIVESTREAMING_CLIENTSDK_LSClient_generated_h

#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_SPARSE_DATA
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeVideoSendFramerate); \
	DECLARE_FUNCTION(execChangeMute); \
	DECLARE_FUNCTION(execReplaceMediaStreamTrack); \
	DECLARE_FUNCTION(execSetAudioOutputDevice); \
	DECLARE_FUNCTION(execSetAudioInputDevice); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execSetEventListener); \
	DECLARE_FUNCTION(execChangeVideoSendBitrate); \
	DECLARE_FUNCTION(execChangeMediaRequirements); \
	DECLARE_FUNCTION(execUpdateTrackMeta); \
	DECLARE_FUNCTION(execUpdateMeta); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execGetUserMedia); \
	DECLARE_FUNCTION(execDispose);


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeVideoSendFramerate); \
	DECLARE_FUNCTION(execChangeMute); \
	DECLARE_FUNCTION(execReplaceMediaStreamTrack); \
	DECLARE_FUNCTION(execSetAudioOutputDevice); \
	DECLARE_FUNCTION(execSetAudioInputDevice); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execSetEventListener); \
	DECLARE_FUNCTION(execChangeVideoSendBitrate); \
	DECLARE_FUNCTION(execChangeMediaRequirements); \
	DECLARE_FUNCTION(execUpdateTrackMeta); \
	DECLARE_FUNCTION(execUpdateMeta); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execGetUserMedia); \
	DECLARE_FUNCTION(execDispose);


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_ACCESSORS
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULSClient(); \
	friend struct Z_Construct_UClass_ULSClient_Statics; \
public: \
	DECLARE_CLASS(ULSClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreaming_ClientSDK"), NO_API) \
	DECLARE_SERIALIZER(ULSClient)


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_INCLASS \
private: \
	static void StaticRegisterNativesULSClient(); \
	friend struct Z_Construct_UClass_ULSClient_Statics; \
public: \
	DECLARE_CLASS(ULSClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreaming_ClientSDK"), NO_API) \
	DECLARE_SERIALIZER(ULSClient)


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULSClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULSClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSClient(ULSClient&&); \
	NO_API ULSClient(const ULSClient&); \
public: \
	NO_API virtual ~ULSClient();


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSClient(ULSClient&&); \
	NO_API ULSClient(const ULSClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULSClient) \
	NO_API virtual ~ULSClient();


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_20_PROLOG
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_SPARSE_DATA \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_RPC_WRAPPERS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_ACCESSORS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_INCLASS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_SPARSE_DATA \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_ACCESSORS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_INCLASS_NO_PURE_DECLS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<class ULSClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
