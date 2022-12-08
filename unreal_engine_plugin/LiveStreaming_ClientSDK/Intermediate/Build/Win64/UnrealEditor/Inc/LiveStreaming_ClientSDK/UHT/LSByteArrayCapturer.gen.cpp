// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSByteArrayCapturer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSByteArrayCapturer() {}
// Cross Module References
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSByteArrayCapturer();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSByteArrayCapturer_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoCapturer();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSByteArrayCapturer::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSByteArrayCapturer::execRender)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_image);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Render(Z_Param_Out_image);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSByteArrayCapturer::execGetHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSByteArrayCapturer::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSByteArrayCapturer::execCreate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_width);
		P_GET_PROPERTY(FIntProperty,Z_Param_height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSByteArrayCapturer**)Z_Param__Result=P_THIS->Create(Z_Param_width,Z_Param_height);
		P_NATIVE_END;
	}
	void ULSByteArrayCapturer::StaticRegisterNativesULSByteArrayCapturer()
	{
		UClass* Class = ULSByteArrayCapturer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &ULSByteArrayCapturer::execCreate },
			{ "GetHeight", &ULSByteArrayCapturer::execGetHeight },
			{ "GetWidth", &ULSByteArrayCapturer::execGetWidth },
			{ "Release", &ULSByteArrayCapturer::execRelease },
			{ "Render", &ULSByteArrayCapturer::execRender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics
	{
		struct LSByteArrayCapturer_eventCreate_Parms
		{
			int32 width;
			int32 height;
			ULSByteArrayCapturer* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_width;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_height;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSByteArrayCapturer_eventCreate_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSByteArrayCapturer_eventCreate_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSByteArrayCapturer_eventCreate_Parms, ReturnValue), Z_Construct_UClass_ULSByteArrayCapturer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "DisplayName", "Create Byte Array Capturer" },
		{ "ModuleRelativePath", "Public/webrtc/LSByteArrayCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSByteArrayCapturer, nullptr, "Create", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::LSByteArrayCapturer_eventCreate_Parms), Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSByteArrayCapturer_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSByteArrayCapturer_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics
	{
		struct LSByteArrayCapturer_eventGetHeight_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSByteArrayCapturer_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSByteArrayCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSByteArrayCapturer, nullptr, "GetHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics::LSByteArrayCapturer_eventGetHeight_Parms), Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics
	{
		struct LSByteArrayCapturer_eventGetWidth_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSByteArrayCapturer_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSByteArrayCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSByteArrayCapturer, nullptr, "GetWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics::LSByteArrayCapturer_eventGetWidth_Parms), Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSByteArrayCapturer_Release_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSByteArrayCapturer_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSByteArrayCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSByteArrayCapturer_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSByteArrayCapturer, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSByteArrayCapturer_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayCapturer_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSByteArrayCapturer_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSByteArrayCapturer_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics
	{
		struct LSByteArrayCapturer_eventRender_Parms
		{
			uint8 image;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::NewProp_image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSByteArrayCapturer_eventRender_Parms, image), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::NewProp_image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::NewProp_image_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::NewProp_image,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSByteArrayCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSByteArrayCapturer, nullptr, "Render", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::LSByteArrayCapturer_eventRender_Parms), Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSByteArrayCapturer_Render()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSByteArrayCapturer_Render_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSByteArrayCapturer);
	UClass* Z_Construct_UClass_ULSByteArrayCapturer_NoRegister()
	{
		return ULSByteArrayCapturer::StaticClass();
	}
	struct Z_Construct_UClass_ULSByteArrayCapturer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSByteArrayCapturer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULSVideoCapturer,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSByteArrayCapturer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSByteArrayCapturer_Create, "Create" }, // 3379232085
		{ &Z_Construct_UFunction_ULSByteArrayCapturer_GetHeight, "GetHeight" }, // 1084577489
		{ &Z_Construct_UFunction_ULSByteArrayCapturer_GetWidth, "GetWidth" }, // 114626106
		{ &Z_Construct_UFunction_ULSByteArrayCapturer_Release, "Release" }, // 2550514229
		{ &Z_Construct_UFunction_ULSByteArrayCapturer_Render, "Render" }, // 2621784252
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSByteArrayCapturer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "webrtc/LSByteArrayCapturer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSByteArrayCapturer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSByteArrayCapturer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSByteArrayCapturer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSByteArrayCapturer_Statics::ClassParams = {
		&ULSByteArrayCapturer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSByteArrayCapturer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSByteArrayCapturer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSByteArrayCapturer()
	{
		if (!Z_Registration_Info_UClass_ULSByteArrayCapturer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSByteArrayCapturer.OuterSingleton, Z_Construct_UClass_ULSByteArrayCapturer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSByteArrayCapturer.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSByteArrayCapturer>()
	{
		return ULSByteArrayCapturer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSByteArrayCapturer);
	ULSByteArrayCapturer::~ULSByteArrayCapturer() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSByteArrayCapturer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSByteArrayCapturer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSByteArrayCapturer, ULSByteArrayCapturer::StaticClass, TEXT("ULSByteArrayCapturer"), &Z_Registration_Info_UClass_ULSByteArrayCapturer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSByteArrayCapturer), 3846861512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSByteArrayCapturer_h_2465423165(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSByteArrayCapturer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSByteArrayCapturer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
