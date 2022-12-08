// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LSTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class ULSMediaStream;
class ULSMediaStreamTrack;
class ULSTrack;
class ULSTrackOption;
enum class ELSMuteType : uint8;
#ifdef LIVESTREAMING_CLIENTSDK_LSTrack_generated_h
#error "LSTrack.generated.h already included, missing '#pragma once' in LSTrack.h"
#endif
#define LIVESTREAMING_CLIENTSDK_LSTrack_generated_h

#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_SPARSE_DATA
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMuteType); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetMediaStream); \
	DECLARE_FUNCTION(execGetMediaStreamTrack); \
	DECLARE_FUNCTION(execCreate);


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMuteType); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetMediaStream); \
	DECLARE_FUNCTION(execGetMediaStreamTrack); \
	DECLARE_FUNCTION(execCreate);


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_ACCESSORS
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULSTrack(); \
	friend struct Z_Construct_UClass_ULSTrack_Statics; \
public: \
	DECLARE_CLASS(ULSTrack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreaming_ClientSDK"), NO_API) \
	DECLARE_SERIALIZER(ULSTrack)


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULSTrack(); \
	friend struct Z_Construct_UClass_ULSTrack_Statics; \
public: \
	DECLARE_CLASS(ULSTrack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreaming_ClientSDK"), NO_API) \
	DECLARE_SERIALIZER(ULSTrack)


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULSTrack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULSTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSTrack(ULSTrack&&); \
	NO_API ULSTrack(const ULSTrack&); \
public: \
	NO_API virtual ~ULSTrack();


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSTrack(ULSTrack&&); \
	NO_API ULSTrack(const ULSTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULSTrack) \
	NO_API virtual ~ULSTrack();


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_17_PROLOG
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_SPARSE_DATA \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_RPC_WRAPPERS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_ACCESSORS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_INCLASS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_SPARSE_DATA \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_ACCESSORS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_INCLASS_NO_PURE_DECLS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<class ULSTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
