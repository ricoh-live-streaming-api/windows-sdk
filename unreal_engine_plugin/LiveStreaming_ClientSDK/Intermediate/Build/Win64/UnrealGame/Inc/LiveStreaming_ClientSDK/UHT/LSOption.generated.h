// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LSOption.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class ULSOption;
class ULSReceivingOption;
class ULSSendingOption;
class ULSTrack;
enum class ELSIceServersProtocol : uint8;
enum class ELSIceTransportPolicy : uint8;
#ifdef LIVESTREAMING_CLIENTSDK_LSOption_generated_h
#error "LSOption.generated.h already included, missing '#pragma once' in LSOption.h"
#endif
#define LIVESTREAMING_CLIENTSDK_LSOption_generated_h

#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_SPARSE_DATA
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIceServersProtocol); \
	DECLARE_FUNCTION(execSetIceTransportPolicy); \
	DECLARE_FUNCTION(execSetReceivingOption); \
	DECLARE_FUNCTION(execSetSendingOption); \
	DECLARE_FUNCTION(execSetEnableCpuOveruseDetection); \
	DECLARE_FUNCTION(execSetMeta); \
	DECLARE_FUNCTION(execSetLocalLSTracks); \
	DECLARE_FUNCTION(execSetSignalingURL); \
	DECLARE_FUNCTION(execGetIceServersProtocol); \
	DECLARE_FUNCTION(execGetIceTransportPolicy); \
	DECLARE_FUNCTION(execGetReceivingOption); \
	DECLARE_FUNCTION(execGetSendingOption); \
	DECLARE_FUNCTION(execGetEnableCpuOveruseDetection); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetLocalLSTracks); \
	DECLARE_FUNCTION(execGetSignalingURL);


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIceServersProtocol); \
	DECLARE_FUNCTION(execSetIceTransportPolicy); \
	DECLARE_FUNCTION(execSetReceivingOption); \
	DECLARE_FUNCTION(execSetSendingOption); \
	DECLARE_FUNCTION(execSetEnableCpuOveruseDetection); \
	DECLARE_FUNCTION(execSetMeta); \
	DECLARE_FUNCTION(execSetLocalLSTracks); \
	DECLARE_FUNCTION(execSetSignalingURL); \
	DECLARE_FUNCTION(execGetIceServersProtocol); \
	DECLARE_FUNCTION(execGetIceTransportPolicy); \
	DECLARE_FUNCTION(execGetReceivingOption); \
	DECLARE_FUNCTION(execGetSendingOption); \
	DECLARE_FUNCTION(execGetEnableCpuOveruseDetection); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetLocalLSTracks); \
	DECLARE_FUNCTION(execGetSignalingURL);


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_ACCESSORS
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULSOption(); \
	friend struct Z_Construct_UClass_ULSOption_Statics; \
public: \
	DECLARE_CLASS(ULSOption, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreaming_ClientSDK"), NO_API) \
	DECLARE_SERIALIZER(ULSOption)


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULSOption(); \
	friend struct Z_Construct_UClass_ULSOption_Statics; \
public: \
	DECLARE_CLASS(ULSOption, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreaming_ClientSDK"), NO_API) \
	DECLARE_SERIALIZER(ULSOption)


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULSOption(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULSOption) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSOption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSOption); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSOption(ULSOption&&); \
	NO_API ULSOption(const ULSOption&); \
public: \
	NO_API virtual ~ULSOption();


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSOption(ULSOption&&); \
	NO_API ULSOption(const ULSOption&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSOption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSOption); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULSOption) \
	NO_API virtual ~ULSOption();


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_16_PROLOG
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_SPARSE_DATA \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_RPC_WRAPPERS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_ACCESSORS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_INCLASS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_SPARSE_DATA \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_ACCESSORS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_INCLASS_NO_PURE_DECLS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<class ULSOption>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSOption_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
