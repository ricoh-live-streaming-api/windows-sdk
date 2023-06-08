// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "CoreMinimal.h"
#include "LSSDKException.generated.h"

USTRUCT(BlueprintType)
struct FLSSDKException
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "RICOH Live Streaming Client SDK for Windows | LSSDKException")
    int Code = 0;

    UPROPERTY(BlueprintReadOnly, Category = "RICOH Live Streaming Client SDK for Windows | LSSDKException")
    FString Error = TEXT("");

    UPROPERTY(BlueprintReadOnly, Category = "RICOH Live Streaming Client SDK for Windows | LSSDKException")
    ELSErrorType Type = ELSErrorType::UnexpectedError;

    UPROPERTY(BlueprintReadOnly, Category = "RICOH Live Streaming Client SDK for Windows | LSSDKException")
    FString Report = TEXT("");

    FLSSDKException() {}

    FLSSDKException(SDKException& exception)
    {
        auto detail = exception.get_Detail();
        Code = detail->get_Code();
        Error = detail->get_Error();
        Type = (ELSErrorType)detail->get_Type();
        Report = exception.ToReportString();
    }

    FLSSDKException(std::exception& exception)
    {
        Error = exception.what();
        Report = exception.what();
    }
};