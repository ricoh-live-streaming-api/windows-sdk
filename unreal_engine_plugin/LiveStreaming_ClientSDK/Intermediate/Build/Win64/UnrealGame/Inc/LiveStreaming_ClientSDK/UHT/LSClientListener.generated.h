// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LSClientListener.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULSAddLocalTrackEvent;
class ULSAddRemoteConnectionEvent;
class ULSAddRemoteTrackEvent;
class ULSChangeStabilityEvent;
class ULSCloseEvent;
class ULSClosingEvent;
class ULSConnectingEvent;
class ULSOpenEvent;
class ULSRemoveRemoteConnectionEvent;
class ULSSDKErrorEvent;
class ULSUpdateMuteEvent;
class ULSUpdateRemoteConnectionEvent;
class ULSUpdateRemoteTrackEvent;
#ifdef LIVESTREAMING_CLIENTSDK_LSClientListener_generated_h
#error "LSClientListener.generated.h already included, missing '#pragma once' in LSClientListener.h"
#endif
#define LIVESTREAMING_CLIENTSDK_LSClientListener_generated_h

#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_24_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventConnectingEventDelegate_Parms \
{ \
	ULSConnectingEvent* lsConnectingEvent; \
}; \
static inline void FConnectingEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ConnectingEventDelegate, ULSConnectingEvent* lsConnectingEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventConnectingEventDelegate_Parms Parms; \
	Parms.lsConnectingEvent=lsConnectingEvent; \
	ConnectingEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_25_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventOpenEventDelegate_Parms \
{ \
	ULSOpenEvent* lsOpenEvent; \
}; \
static inline void FOpenEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OpenEventDelegate, ULSOpenEvent* lsOpenEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventOpenEventDelegate_Parms Parms; \
	Parms.lsOpenEvent=lsOpenEvent; \
	OpenEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_26_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventClosingEventDelegate_Parms \
{ \
	ULSClosingEvent* lsClosingEvent; \
}; \
static inline void FClosingEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ClosingEventDelegate, ULSClosingEvent* lsClosingEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventClosingEventDelegate_Parms Parms; \
	Parms.lsClosingEvent=lsClosingEvent; \
	ClosingEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_27_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventCloseEventDelegate_Parms \
{ \
	ULSCloseEvent* lsCloseEvent; \
}; \
static inline void FCloseEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& CloseEventDelegate, ULSCloseEvent* lsCloseEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventCloseEventDelegate_Parms Parms; \
	Parms.lsCloseEvent=lsCloseEvent; \
	CloseEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_28_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventAddLocalTrackEventDelegate_Parms \
{ \
	ULSAddLocalTrackEvent* lsAddLocalTrackEvent; \
}; \
static inline void FAddLocalTrackEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& AddLocalTrackEventDelegate, ULSAddLocalTrackEvent* lsAddLocalTrackEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventAddLocalTrackEventDelegate_Parms Parms; \
	Parms.lsAddLocalTrackEvent=lsAddLocalTrackEvent; \
	AddLocalTrackEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_29_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventAddRemoteTrackEventDelegate_Parms \
{ \
	ULSAddRemoteTrackEvent* lsAddRemoteTrackEvent; \
}; \
static inline void FAddRemoteTrackEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& AddRemoteTrackEventDelegate, ULSAddRemoteTrackEvent* lsAddRemoteTrackEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventAddRemoteTrackEventDelegate_Parms Parms; \
	Parms.lsAddRemoteTrackEvent=lsAddRemoteTrackEvent; \
	AddRemoteTrackEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_30_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventAddRemoteConnectionEventDelegate_Parms \
{ \
	ULSAddRemoteConnectionEvent* lsAddRemoteConnectionEvent; \
}; \
static inline void FAddRemoteConnectionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& AddRemoteConnectionEventDelegate, ULSAddRemoteConnectionEvent* lsAddRemoteConnectionEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventAddRemoteConnectionEventDelegate_Parms Parms; \
	Parms.lsAddRemoteConnectionEvent=lsAddRemoteConnectionEvent; \
	AddRemoteConnectionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_31_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventRemoveRemoteConnectionEventDelegate_Parms \
{ \
	ULSRemoveRemoteConnectionEvent* lsRemoveRemoteConnectionEvent; \
}; \
static inline void FRemoveRemoteConnectionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& RemoveRemoteConnectionEventDelegate, ULSRemoveRemoteConnectionEvent* lsRemoveRemoteConnectionEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventRemoveRemoteConnectionEventDelegate_Parms Parms; \
	Parms.lsRemoveRemoteConnectionEvent=lsRemoveRemoteConnectionEvent; \
	RemoveRemoteConnectionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_32_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventSDKErrorEventDelegate_Parms \
{ \
	ULSSDKErrorEvent* lssdkErrorEvent; \
}; \
static inline void FSDKErrorEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SDKErrorEventDelegate, ULSSDKErrorEvent* lssdkErrorEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventSDKErrorEventDelegate_Parms Parms; \
	Parms.lssdkErrorEvent=lssdkErrorEvent; \
	SDKErrorEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_33_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventUpdateRemoteConnectionEventDelegate_Parms \
{ \
	ULSUpdateRemoteConnectionEvent* lsUpdateRemoteConnectionEvent; \
}; \
static inline void FUpdateRemoteConnectionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateRemoteConnectionEventDelegate, ULSUpdateRemoteConnectionEvent* lsUpdateRemoteConnectionEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventUpdateRemoteConnectionEventDelegate_Parms Parms; \
	Parms.lsUpdateRemoteConnectionEvent=lsUpdateRemoteConnectionEvent; \
	UpdateRemoteConnectionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_34_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventUpdateRemoteTrackEventDelegate_Parms \
{ \
	ULSUpdateRemoteTrackEvent* lsUpdateRemoteTrackEvent; \
}; \
static inline void FUpdateRemoteTrackEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateRemoteTrackEventDelegate, ULSUpdateRemoteTrackEvent* lsUpdateRemoteTrackEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventUpdateRemoteTrackEventDelegate_Parms Parms; \
	Parms.lsUpdateRemoteTrackEvent=lsUpdateRemoteTrackEvent; \
	UpdateRemoteTrackEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_35_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventUpdateMuteEventDelegate_Parms \
{ \
	ULSUpdateMuteEvent* lsUpdateMuteEvent; \
}; \
static inline void FUpdateMuteEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateMuteEventDelegate, ULSUpdateMuteEvent* lsUpdateMuteEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventUpdateMuteEventDelegate_Parms Parms; \
	Parms.lsUpdateMuteEvent=lsUpdateMuteEvent; \
	UpdateMuteEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_36_DELEGATE \
struct _Script_LiveStreaming_ClientSDK_eventChangeStabilityEventDelegate_Parms \
{ \
	ULSChangeStabilityEvent* lsChangeStabilityEvent; \
}; \
static inline void FChangeStabilityEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChangeStabilityEventDelegate, ULSChangeStabilityEvent* lsChangeStabilityEvent) \
{ \
	_Script_LiveStreaming_ClientSDK_eventChangeStabilityEventDelegate_Parms Parms; \
	Parms.lsChangeStabilityEvent=lsChangeStabilityEvent; \
	ChangeStabilityEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_SPARSE_DATA
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_RPC_WRAPPERS
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_ACCESSORS
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULSClientListener(); \
	friend struct Z_Construct_UClass_ULSClientListener_Statics; \
public: \
	DECLARE_CLASS(ULSClientListener, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreaming_ClientSDK"), NO_API) \
	DECLARE_SERIALIZER(ULSClientListener)


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_INCLASS \
private: \
	static void StaticRegisterNativesULSClientListener(); \
	friend struct Z_Construct_UClass_ULSClientListener_Statics; \
public: \
	DECLARE_CLASS(ULSClientListener, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreaming_ClientSDK"), NO_API) \
	DECLARE_SERIALIZER(ULSClientListener)


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULSClientListener(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULSClientListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSClientListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSClientListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSClientListener(ULSClientListener&&); \
	NO_API ULSClientListener(const ULSClientListener&); \
public: \
	NO_API virtual ~ULSClientListener();


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULSClientListener(ULSClientListener&&); \
	NO_API ULSClientListener(const ULSClientListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULSClientListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULSClientListener); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULSClientListener) \
	NO_API virtual ~ULSClientListener();


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_38_PROLOG
#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_SPARSE_DATA \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_RPC_WRAPPERS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_ACCESSORS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_INCLASS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_SPARSE_DATA \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_ACCESSORS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_INCLASS_NO_PURE_DECLS \
	FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<class ULSClientListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSClientListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
