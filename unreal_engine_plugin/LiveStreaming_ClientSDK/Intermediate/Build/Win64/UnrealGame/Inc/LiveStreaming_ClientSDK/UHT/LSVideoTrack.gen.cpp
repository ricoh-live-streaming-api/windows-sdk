// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSVideoTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSVideoTrack() {}
// Cross Module References
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSMediaStreamTrack();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoTrack();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoTrack_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UFunction* Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_LiveStreaming_ClientSDK_eventOnFrameSizeChangedDelegate_Parms
		{
			FString trackId;
			int32 width;
			int32 height;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_trackId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_width;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::NewProp_trackId = { "trackId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LiveStreaming_ClientSDK_eventOnFrameSizeChangedDelegate_Parms, trackId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LiveStreaming_ClientSDK_eventOnFrameSizeChangedDelegate_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LiveStreaming_ClientSDK_eventOnFrameSizeChangedDelegate_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::NewProp_trackId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::NewProp_height,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/webrtc/LSVideoTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK, nullptr, "OnFrameSizeChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::_Script_LiveStreaming_ClientSDK_eventOnFrameSizeChangedDelegate_Parms), Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULSVideoTrack::execGetFrameResolution)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWidth);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFrameResolution(Z_Param_Out_OutWidth,Z_Param_Out_OutHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSVideoTrack::execRemoveSink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSink();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSVideoTrack::execAddSink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSink();
		P_NATIVE_END;
	}
	void ULSVideoTrack::StaticRegisterNativesULSVideoTrack()
	{
		UClass* Class = ULSVideoTrack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSink", &ULSVideoTrack::execAddSink },
			{ "GetFrameResolution", &ULSVideoTrack::execGetFrameResolution },
			{ "RemoveSink", &ULSVideoTrack::execRemoveSink },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSVideoTrack_AddSink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoTrack_AddSink_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoTrack_AddSink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoTrack, nullptr, "AddSink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoTrack_AddSink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoTrack_AddSink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoTrack_AddSink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoTrack_AddSink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics
	{
		struct LSVideoTrack_eventGetFrameResolution_Parms
		{
			int32 OutWidth;
			int32 OutHeight;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OutWidth;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OutHeight;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::NewProp_OutWidth = { "OutWidth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoTrack_eventGetFrameResolution_Parms, OutWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::NewProp_OutHeight = { "OutHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoTrack_eventGetFrameResolution_Parms, OutHeight), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LSVideoTrack_eventGetFrameResolution_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LSVideoTrack_eventGetFrameResolution_Parms), &Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::NewProp_OutWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::NewProp_OutHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoTrack, nullptr, "GetFrameResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::LSVideoTrack_eventGetFrameResolution_Parms), Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSVideoTrack_RemoveSink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoTrack_RemoveSink_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoTrack_RemoveSink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoTrack, nullptr, "RemoveSink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoTrack_RemoveSink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoTrack_RemoveSink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoTrack_RemoveSink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoTrack_RemoveSink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSVideoTrack);
	UClass* Z_Construct_UClass_ULSVideoTrack_NoRegister()
	{
		return ULSVideoTrack::StaticClass();
	}
	struct Z_Construct_UClass_ULSVideoTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFrameSizeChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFrameSizeChangedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSVideoTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULSMediaStreamTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSVideoTrack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSVideoTrack_AddSink, "AddSink" }, // 2479783232
		{ &Z_Construct_UFunction_ULSVideoTrack_GetFrameResolution, "GetFrameResolution" }, // 2960190128
		{ &Z_Construct_UFunction_ULSVideoTrack_RemoveSink, "RemoveSink" }, // 2834030098
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSVideoTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "webrtc/LSVideoTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoTrack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSVideoTrack_Statics::NewProp_OnFrameSizeChangedDelegate_MetaData[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoTrack.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULSVideoTrack_Statics::NewProp_OnFrameSizeChangedDelegate = { "OnFrameSizeChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULSVideoTrack, OnFrameSizeChangedDelegate), Z_Construct_UDelegateFunction_LiveStreaming_ClientSDK_OnFrameSizeChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULSVideoTrack_Statics::NewProp_OnFrameSizeChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULSVideoTrack_Statics::NewProp_OnFrameSizeChangedDelegate_MetaData)) }; // 2931986690
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULSVideoTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSVideoTrack_Statics::NewProp_OnFrameSizeChangedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSVideoTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSVideoTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSVideoTrack_Statics::ClassParams = {
		&ULSVideoTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULSVideoTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULSVideoTrack_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULSVideoTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSVideoTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSVideoTrack()
	{
		if (!Z_Registration_Info_UClass_ULSVideoTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSVideoTrack.OuterSingleton, Z_Construct_UClass_ULSVideoTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSVideoTrack.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSVideoTrack>()
	{
		return ULSVideoTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSVideoTrack);
	ULSVideoTrack::~ULSVideoTrack() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSVideoTrack, ULSVideoTrack::StaticClass, TEXT("ULSVideoTrack"), &Z_Registration_Info_UClass_ULSVideoTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSVideoTrack), 250796442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_408000939(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
