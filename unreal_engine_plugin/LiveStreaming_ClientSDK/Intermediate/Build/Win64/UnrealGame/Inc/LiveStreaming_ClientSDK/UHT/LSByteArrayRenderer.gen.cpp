// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSByteArrayRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSByteArrayRenderer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSByteArrayRenderer();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSByteArrayRenderer_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSByteArrayRenderer::execWritePixelData)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_buffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_width);
		P_GET_PROPERTY(FIntProperty,Z_Param_height);
		P_GET_OBJECT(ULSVideoTrack,Z_Param_videoTrack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WritePixelData(Z_Param_Out_buffer,Z_Param_width,Z_Param_height,Z_Param_videoTrack);
		P_NATIVE_END;
	}
	void ULSByteArrayRenderer::StaticRegisterNativesULSByteArrayRenderer()
	{
		UClass* Class = ULSByteArrayRenderer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WritePixelData", &ULSByteArrayRenderer::execWritePixelData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics
	{
		struct LSByteArrayRenderer_eventWritePixelData_Parms
		{
			uint8 buffer;
			int32 width;
			int32 height;
			ULSVideoTrack* videoTrack;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_buffer;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_width;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_height;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_videoTrack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSByteArrayRenderer_eventWritePixelData_Parms, buffer), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSByteArrayRenderer_eventWritePixelData_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSByteArrayRenderer_eventWritePixelData_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::NewProp_videoTrack = { "videoTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSByteArrayRenderer_eventWritePixelData_Parms, videoTrack), Z_Construct_UClass_ULSVideoTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::NewProp_buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::NewProp_videoTrack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSByteArrayRenderer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSByteArrayRenderer, nullptr, "WritePixelData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::LSByteArrayRenderer_eventWritePixelData_Parms), Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSByteArrayRenderer);
	UClass* Z_Construct_UClass_ULSByteArrayRenderer_NoRegister()
	{
		return ULSByteArrayRenderer::StaticClass();
	}
	struct Z_Construct_UClass_ULSByteArrayRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSByteArrayRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSByteArrayRenderer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSByteArrayRenderer_WritePixelData, "WritePixelData" }, // 2187485817
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSByteArrayRenderer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "webrtc/LSByteArrayRenderer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSByteArrayRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSByteArrayRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSByteArrayRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSByteArrayRenderer_Statics::ClassParams = {
		&ULSByteArrayRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSByteArrayRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSByteArrayRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSByteArrayRenderer()
	{
		if (!Z_Registration_Info_UClass_ULSByteArrayRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSByteArrayRenderer.OuterSingleton, Z_Construct_UClass_ULSByteArrayRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSByteArrayRenderer.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSByteArrayRenderer>()
	{
		return ULSByteArrayRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSByteArrayRenderer);
	ULSByteArrayRenderer::~ULSByteArrayRenderer() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSByteArrayRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSByteArrayRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSByteArrayRenderer, ULSByteArrayRenderer::StaticClass, TEXT("ULSByteArrayRenderer"), &Z_Registration_Info_UClass_ULSByteArrayRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSByteArrayRenderer), 849560970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSByteArrayRenderer_h_800338344(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSByteArrayRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSByteArrayRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
