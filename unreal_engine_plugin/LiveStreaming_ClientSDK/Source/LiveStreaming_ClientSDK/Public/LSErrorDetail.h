// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "Definitions.h"
#include "LSEnumDefine.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSErrorDetail.generated.h"

UCLASS(BlueprintType, Blueprintable)
class LIVESTREAMING_CLIENTSDK_API ULSErrorDetail : public UObject
{
    GENERATED_BODY()

public:
    ErrorDetail* Get() const;
    void Set(ErrorDetail* errorDetail);

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    int GetCode() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    FString GetError() const;

    UFUNCTION(BlueprintCallable, Category = LiveStreaming_ClientSDK)
    ELSErrorType GetType() const;

private:
    ErrorDetail* _errorDetail = nullptr;
};
