// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSVideoDeviceCapturer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSVideoDeviceCapturer() {}
// Cross Module References
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoCapturer();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoDeviceCapturer();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoDeviceCapturer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSVideoDeviceCapturer::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSVideoDeviceCapturer::execGetFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSVideoDeviceCapturer::execGetHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSVideoDeviceCapturer::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSVideoDeviceCapturer::execGetDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDeviceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSVideoDeviceCapturer::execCreate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceName);
		P_GET_PROPERTY(FIntProperty,Z_Param_width);
		P_GET_PROPERTY(FIntProperty,Z_Param_height);
		P_GET_PROPERTY(FIntProperty,Z_Param_framerate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULSVideoDeviceCapturer**)Z_Param__Result=P_THIS->Create(Z_Param_deviceName,Z_Param_width,Z_Param_height,Z_Param_framerate);
		P_NATIVE_END;
	}
	void ULSVideoDeviceCapturer::StaticRegisterNativesULSVideoDeviceCapturer()
	{
		UClass* Class = ULSVideoDeviceCapturer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &ULSVideoDeviceCapturer::execCreate },
			{ "GetDeviceName", &ULSVideoDeviceCapturer::execGetDeviceName },
			{ "GetFrameRate", &ULSVideoDeviceCapturer::execGetFrameRate },
			{ "GetHeight", &ULSVideoDeviceCapturer::execGetHeight },
			{ "GetWidth", &ULSVideoDeviceCapturer::execGetWidth },
			{ "Release", &ULSVideoDeviceCapturer::execRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics
	{
		struct LSVideoDeviceCapturer_eventCreate_Parms
		{
			FString deviceName;
			int32 width;
			int32 height;
			int32 framerate;
			ULSVideoDeviceCapturer* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_width;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_height;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_framerate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_deviceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoDeviceCapturer_eventCreate_Parms, deviceName), METADATA_PARAMS(Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_deviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_deviceName_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoDeviceCapturer_eventCreate_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoDeviceCapturer_eventCreate_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_framerate = { "framerate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoDeviceCapturer_eventCreate_Parms, framerate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoDeviceCapturer_eventCreate_Parms, ReturnValue), Z_Construct_UClass_ULSVideoDeviceCapturer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_deviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_framerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "DisplayName", "Create Video Device Capturer" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoDeviceCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoDeviceCapturer, nullptr, "Create", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::LSVideoDeviceCapturer_eventCreate_Parms), Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoDeviceCapturer_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoDeviceCapturer_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics
	{
		struct LSVideoDeviceCapturer_eventGetDeviceName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoDeviceCapturer_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoDeviceCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoDeviceCapturer, nullptr, "GetDeviceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics::LSVideoDeviceCapturer_eventGetDeviceName_Parms), Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics
	{
		struct LSVideoDeviceCapturer_eventGetFrameRate_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoDeviceCapturer_eventGetFrameRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoDeviceCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoDeviceCapturer, nullptr, "GetFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics::LSVideoDeviceCapturer_eventGetFrameRate_Parms), Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics
	{
		struct LSVideoDeviceCapturer_eventGetHeight_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoDeviceCapturer_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoDeviceCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoDeviceCapturer, nullptr, "GetHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics::LSVideoDeviceCapturer_eventGetHeight_Parms), Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics
	{
		struct LSVideoDeviceCapturer_eventGetWidth_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoDeviceCapturer_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoDeviceCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoDeviceCapturer, nullptr, "GetWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics::LSVideoDeviceCapturer_eventGetWidth_Parms), Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSVideoDeviceCapturer_Release_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoDeviceCapturer_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoDeviceCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoDeviceCapturer_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoDeviceCapturer, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoDeviceCapturer_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoDeviceCapturer_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoDeviceCapturer_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoDeviceCapturer_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSVideoDeviceCapturer);
	UClass* Z_Construct_UClass_ULSVideoDeviceCapturer_NoRegister()
	{
		return ULSVideoDeviceCapturer::StaticClass();
	}
	struct Z_Construct_UClass_ULSVideoDeviceCapturer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSVideoDeviceCapturer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULSVideoCapturer,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSVideoDeviceCapturer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSVideoDeviceCapturer_Create, "Create" }, // 688229882
		{ &Z_Construct_UFunction_ULSVideoDeviceCapturer_GetDeviceName, "GetDeviceName" }, // 2129343390
		{ &Z_Construct_UFunction_ULSVideoDeviceCapturer_GetFrameRate, "GetFrameRate" }, // 290059645
		{ &Z_Construct_UFunction_ULSVideoDeviceCapturer_GetHeight, "GetHeight" }, // 3599954223
		{ &Z_Construct_UFunction_ULSVideoDeviceCapturer_GetWidth, "GetWidth" }, // 3902169068
		{ &Z_Construct_UFunction_ULSVideoDeviceCapturer_Release, "Release" }, // 3963799824
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSVideoDeviceCapturer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "webrtc/LSVideoDeviceCapturer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoDeviceCapturer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSVideoDeviceCapturer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSVideoDeviceCapturer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSVideoDeviceCapturer_Statics::ClassParams = {
		&ULSVideoDeviceCapturer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSVideoDeviceCapturer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSVideoDeviceCapturer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSVideoDeviceCapturer()
	{
		if (!Z_Registration_Info_UClass_ULSVideoDeviceCapturer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSVideoDeviceCapturer.OuterSingleton, Z_Construct_UClass_ULSVideoDeviceCapturer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSVideoDeviceCapturer.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSVideoDeviceCapturer>()
	{
		return ULSVideoDeviceCapturer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSVideoDeviceCapturer);
	ULSVideoDeviceCapturer::~ULSVideoDeviceCapturer() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoDeviceCapturer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoDeviceCapturer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSVideoDeviceCapturer, ULSVideoDeviceCapturer::StaticClass, TEXT("ULSVideoDeviceCapturer"), &Z_Registration_Info_UClass_ULSVideoDeviceCapturer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSVideoDeviceCapturer), 2253017373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoDeviceCapturer_h_2150225979(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoDeviceCapturer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoDeviceCapturer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
