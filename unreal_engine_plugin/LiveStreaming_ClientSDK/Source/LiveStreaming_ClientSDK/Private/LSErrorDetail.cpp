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
    return _errorDetail ? _errorDetail->get_Code() : 0;
}

FString ULSErrorDetail::GetError() const
{
    return _errorDetail ? FString(_errorDetail->get_Error()) : "";
}

ELSErrorType ULSErrorDetail::GetType() const
{
    return (ELSErrorType)_errorDetail->get_Type();
}
