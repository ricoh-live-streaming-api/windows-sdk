// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/webrtc/LSVideoCapturer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSVideoCapturer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoCapturer();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSVideoCapturer_NoRegister();
	LIVESTREAMING_CLIENTSDK_API UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELSCapturerType;
	static UEnum* ELSCapturerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELSCapturerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELSCapturerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType, Z_Construct_UPackage__Script_LiveStreaming_ClientSDK(), TEXT("ELSCapturerType"));
		}
		return Z_Registration_Info_UEnum_ELSCapturerType.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UEnum* StaticEnum<ELSCapturerType>()
	{
		return ELSCapturerType_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType_Statics::Enumerators[] = {
		{ "ELSCapturerType::Device", (int64)ELSCapturerType::Device },
		{ "ELSCapturerType::UnityCamera", (int64)ELSCapturerType::UnityCamera },
		{ "ELSCapturerType::ByteArray", (int64)ELSCapturerType::ByteArray },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ByteArray.Comment", "/// <summary>\n/// Create video frame from byte array.\n/// </summary>\n" },
		{ "ByteArray.Name", "ELSCapturerType::ByteArray" },
		{ "ByteArray.ToolTip", "<summary>\nCreate video frame from byte array.\n</summary>" },
		{ "Device.Comment", "/// <summary>\n/// Capture video from device.\n/// </summary>\n" },
		{ "Device.Name", "ELSCapturerType::Device" },
		{ "Device.ToolTip", "<summary>\nCapture video from device.\n</summary>" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoCapturer.h" },
		{ "UnityCamera.Comment", "/// <summary>\n/// Capture video from unity camera.\n/// </summary>\n" },
		{ "UnityCamera.Name", "ELSCapturerType::UnityCamera" },
		{ "UnityCamera.ToolTip", "<summary>\nCapture video from unity camera.\n</summary>" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
		nullptr,
		"ELSCapturerType",
		"ELSCapturerType",
		Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType()
	{
		if (!Z_Registration_Info_UEnum_ELSCapturerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELSCapturerType.InnerSingleton, Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELSCapturerType.InnerSingleton;
	}
	DEFINE_FUNCTION(ULSVideoCapturer::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELSCapturerType*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	void ULSVideoCapturer::StaticRegisterNativesULSVideoCapturer()
	{
		UClass* Class = ULSVideoCapturer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetType", &ULSVideoCapturer::execGetType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics
	{
		struct LSVideoCapturer_eventGetType_Parms
		{
			ELSCapturerType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSVideoCapturer_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_LiveStreaming_ClientSDK_ELSCapturerType, METADATA_PARAMS(nullptr, 0) }; // 4215224114
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoCapturer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSVideoCapturer, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::LSVideoCapturer_eventGetType_Parms), Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSVideoCapturer_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSVideoCapturer_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSVideoCapturer);
	UClass* Z_Construct_UClass_ULSVideoCapturer_NoRegister()
	{
		return ULSVideoCapturer::StaticClass();
	}
	struct Z_Construct_UClass_ULSVideoCapturer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSVideoCapturer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSVideoCapturer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSVideoCapturer_GetType, "GetType" }, // 2963259605
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSVideoCapturer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "webrtc/LSVideoCapturer.h" },
		{ "ModuleRelativePath", "Public/webrtc/LSVideoCapturer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSVideoCapturer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSVideoCapturer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSVideoCapturer_Statics::ClassParams = {
		&ULSVideoCapturer::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULSVideoCapturer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSVideoCapturer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSVideoCapturer()
	{
		if (!Z_Registration_Info_UClass_ULSVideoCapturer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSVideoCapturer.OuterSingleton, Z_Construct_UClass_ULSVideoCapturer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSVideoCapturer.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSVideoCapturer>()
	{
		return ULSVideoCapturer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSVideoCapturer);
	ULSVideoCapturer::~ULSVideoCapturer() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturer_h_Statics::EnumInfo[] = {
		{ ELSCapturerType_StaticEnum, TEXT("ELSCapturerType"), &Z_Registration_Info_UEnum_ELSCapturerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4215224114U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSVideoCapturer, ULSVideoCapturer::StaticClass, TEXT("ULSVideoCapturer"), &Z_Registration_Info_UClass_ULSVideoCapturer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSVideoCapturer), 56854940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturer_h_2876633579(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_webrtc_LSVideoCapturer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
