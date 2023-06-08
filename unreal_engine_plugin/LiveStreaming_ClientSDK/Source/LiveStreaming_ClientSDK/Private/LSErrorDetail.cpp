// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#include "LSErrorDetail.h"

ErrorDetail* ULSErrorDetail::Get() const
{
    return _errorDetail;
}

void ULSErrorDetail::Set(ErrorDetail* errorDetail)
{
    _errorDetail = errorDetail;
}

int ULSErrorDetail::GetCode() const
{
    checkf(_errorDetail, TEXT("ErrorDetail is null."));
    return _errorDetail->get_Code();
}

FString ULSErrorDetail::GetError() const
{
    checkf(_errorDetail, TEXT("ErrorDetail is null."));
    return FString(_errorDetail->get_Error());
}

ELSErrorType ULSErrorDetail::GetType() const
{
    checkf(_errorDetail, TEXT("ErrorDetail is null."));
    return (ELSErrorType)_errorDetail->get_Type();
}
