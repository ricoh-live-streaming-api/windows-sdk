// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreaming_ClientSDK/Public/LSLogger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSLogger() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSLogger();
	LIVESTREAMING_CLIENTSDK_API UClass* Z_Construct_UClass_ULSLogger_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveStreaming_ClientSDK();
// End Cross Module References
	DEFINE_FUNCTION(ULSLogger::execError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULSLogger::Error(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSLogger::execWarn)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULSLogger::Warn(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSLogger::execInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULSLogger::Info(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULSLogger::execDebug)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULSLogger::Debug(Z_Param_message);
		P_NATIVE_END;
	}
	void ULSLogger::StaticRegisterNativesULSLogger()
	{
		UClass* Class = ULSLogger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Debug", &ULSLogger::execDebug },
			{ "Error", &ULSLogger::execError },
			{ "Info", &ULSLogger::execInfo },
			{ "Warn", &ULSLogger::execWarn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULSLogger_Debug_Statics
	{
		struct LSLogger_eventDebug_Parms
		{
			FString message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSLogger_Debug_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSLogger_eventDebug_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSLogger_Debug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSLogger_Debug_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSLogger_Debug_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "DisplayName", "LogDebug" },
		{ "ModuleRelativePath", "Public/LSLogger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSLogger_Debug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSLogger, nullptr, "Debug", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSLogger_Debug_Statics::LSLogger_eventDebug_Parms), Z_Construct_UFunction_ULSLogger_Debug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLogger_Debug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSLogger_Debug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLogger_Debug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSLogger_Debug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSLogger_Debug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSLogger_Error_Statics
	{
		struct LSLogger_eventError_Parms
		{
			FString message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSLogger_Error_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSLogger_eventError_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSLogger_Error_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSLogger_Error_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSLogger_Error_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "DisplayName", "LogError" },
		{ "ModuleRelativePath", "Public/LSLogger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSLogger_Error_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSLogger, nullptr, "Error", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSLogger_Error_Statics::LSLogger_eventError_Parms), Z_Construct_UFunction_ULSLogger_Error_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLogger_Error_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSLogger_Error_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLogger_Error_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSLogger_Error()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSLogger_Error_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSLogger_Info_Statics
	{
		struct LSLogger_eventInfo_Parms
		{
			FString message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSLogger_Info_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSLogger_eventInfo_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSLogger_Info_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSLogger_Info_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSLogger_Info_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "DisplayName", "LogInfo" },
		{ "ModuleRelativePath", "Public/LSLogger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSLogger_Info_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSLogger, nullptr, "Info", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSLogger_Info_Statics::LSLogger_eventInfo_Parms), Z_Construct_UFunction_ULSLogger_Info_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLogger_Info_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSLogger_Info_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLogger_Info_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSLogger_Info()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSLogger_Info_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULSLogger_Warn_Statics
	{
		struct LSLogger_eventWarn_Parms
		{
			FString message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULSLogger_Warn_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LSLogger_eventWarn_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULSLogger_Warn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULSLogger_Warn_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULSLogger_Warn_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveStreaming_ClientSDK" },
		{ "DisplayName", "LogWarn" },
		{ "ModuleRelativePath", "Public/LSLogger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULSLogger_Warn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULSLogger, nullptr, "Warn", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULSLogger_Warn_Statics::LSLogger_eventWarn_Parms), Z_Construct_UFunction_ULSLogger_Warn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLogger_Warn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULSLogger_Warn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULSLogger_Warn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULSLogger_Warn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULSLogger_Warn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSLogger);
	UClass* Z_Construct_UClass_ULSLogger_NoRegister()
	{
		return ULSLogger::StaticClass();
	}
	struct Z_Construct_UClass_ULSLogger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULSLogger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreaming_ClientSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULSLogger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULSLogger_Debug, "Debug" }, // 3560316808
		{ &Z_Construct_UFunction_ULSLogger_Error, "Error" }, // 4257521150
		{ &Z_Construct_UFunction_ULSLogger_Info, "Info" }, // 3935341254
		{ &Z_Construct_UFunction_ULSLogger_Warn, "Warn" }, // 522556886
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULSLogger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LSLogger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LSLogger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULSLogger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSLogger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSLogger_Statics::ClassParams = {
		&ULSLogger::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULSLogger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULSLogger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULSLogger()
	{
		if (!Z_Registration_Info_UClass_ULSLogger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSLogger.OuterSingleton, Z_Construct_UClass_ULSLogger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULSLogger.OuterSingleton;
	}
	template<> LIVESTREAMING_CLIENTSDK_API UClass* StaticClass<ULSLogger>()
	{
		return ULSLogger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULSLogger);
	ULSLogger::~ULSLogger() {}
	struct Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSLogger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSLogger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULSLogger, ULSLogger::StaticClass, TEXT("ULSLogger"), &Z_Registration_Info_UClass_ULSLogger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSLogger), 3591640793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSLogger_h_2056343688(TEXT("/Script/LiveStreaming_ClientSDK"),
		Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSLogger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempWin_unrealengine_plugin_LiveStreaming_ClientSDK_HostProject_Plugins_LiveStreaming_ClientSDK_Source_LiveStreaming_ClientSDK_Public_LSLogger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
