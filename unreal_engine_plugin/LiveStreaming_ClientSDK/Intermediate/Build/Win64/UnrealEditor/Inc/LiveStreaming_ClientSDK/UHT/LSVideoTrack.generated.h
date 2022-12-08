// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "webrtc/LSVideoTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVESTREAMING_CLIENTSDK_LSVideoTrack_generated_h
#error "LSVideoTrack.generated.h already included, missing '#pragma once' in LSVideoTrack.h"
#endif
#define LIVESTREAMING_CLIENTSDK_LSVideoTrack_generated_h

#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_11_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventOnFrameSizeChangedDelegate_Parms \
{ \
	FString trackId; \
	int32 width; \
	int32 height; \
}; \
static inline void FOnFrameSizeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFrameSizeChangedDelegate, const FString& trackId, int32 width, int32 height) \
{ \
	_Script_LiveStreaming_ClientSDK_eventOnFrameSizeChangedDelegate_Parms Parms; \
	Parms.trackId=trackId; \
	Parms.width=width; \
	Parms.height=height; \
	OnFrameSizeChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_SPARSE_DATA
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFrameResolution); \
	DECLARE_FUNCTION(execRemoveSink); \
	DECLARE_FUNCTION(execAddSink);


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFrameResolution); \
	DECLARE_FUNCTION(execRemoveSink); \
	DECLARE_FUNCTION(execAddSink);


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_ACCESSORS
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULSVideoTrack(); \
	friend struct Z_Construct_UClass_ULSVideoTrack_Statics; \
public: \
	DECLARE_CLASS(ULSVideoTrack, ULSMediaStreamTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreaming_ClientSDK"), NO_API) \
	DECLARE_SERIALIZER(ULSVideoTrack)


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULSVideoTrack(); \
	friend struct Z_Construct_UClass_ULSVideoTrack_Statics; \
public: \
	DECLARE_CLASS(ULSVideoTrack, ULSMediaStreamTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreaming_ClientSDK"), NO_API) \
	DECLARE_SERIALIZER(ULSVideoTrack)


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULSVideoTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULSVideoTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSVideoTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSVideoTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSVideoTrack(ULSVideoTrack&&); \
	NO_API ULSVideoTrack(const ULSVideoTrack&); \
public: \
	NO_API virtual ~ULSVideoTrack();


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULSVideoTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSVideoTrack(ULSVideoTrack&&); \
	NO_API ULSVideoTrack(const ULSVideoTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSVideoTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSVideoTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULSVideoTrack) \
	NO_API virtual ~ULSVideoTrack();


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_13_PROLOG
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_SPARSE_DATA \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_RPC_WRAPPERS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_ACCESSORS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_INCLASS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_SPARSE_DATA \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_ACCESSORS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_INCLASS_NO_PURE_DECLS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<class ULSVideoTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
