// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class ELSConnectionState : uint8
{
    /// <summary>
    /// The <see cref="Client"/> is not connected, and ready to connect.
    /// </summary>
    Idle,
    /// <summary>
    /// The <see cref="Client"/> is connecting to the server.
    /// </summary>
    Connecting,
    /// <summary>
    /// The <see cref="Client"/> is connected to the server.
    /// </summary>
    Open,
    /// <summary>
    /// The <see cref="Client"/> is disconnecting from the server.
    /// </summary>
    Closing,
    /// <summary>
    /// The <see cref="Client"/> is disconnected from the server.
    /// </summary>
    Closed,
};

UENUM(BlueprintType)
enum class ELSErrorType : uint8
{
    /// <summary>
    /// Invalid parameter
    /// </summary>
    ParameterError,

    /// <summary>
    /// Network error
    /// </summary>
    NetworkError,

    /// <summary>
    /// Unexpected error
    /// </summary>
    UnexpectedError
};

UENUM(BlueprintType)
enum class ELSIceTransportPolicy : uint8
{
    /// <summary>
    /// Only ICE candidates whose IP addresses are being relayed, such as those being passed through a TURN server, will be considered.
    /// </summary>
    Relay,
    /// <summary>
    /// All ICE candidates will be considered.
    /// </summary>
    All,
    isNull
};


UENUM(BlueprintType)
enum class ELSStability : uint8
{
    /// <summary>
    /// ICE is stable.
    /// </summary>
    IceStable,
    /// <summary>
    /// ICE is unstable.
    /// </summary>
    IceUnstable
};

UENUM(BlueprintType)
enum class ELSMuteType : uint8
{
    /// <summary>
    /// Unmute
    /// </summary>
    //    [Description("on")]
    Unmute,
    /// <summary>
    /// Soft mute
    /// </summary>
    //[Description("blank")]
    SoftMute,
    /// <summary>
    /// Hard mute
    /// </summary>
    //[Description("paused")]
    HardMute
};

UENUM(BlueprintType)
enum class ELSIceServersProtocol : uint8
{
    All,
    Udp,
    Tcp,
    Tls,
    isNull
};

UENUM(BlueprintType)
enum class ELSVideoRequirement : uint8
{
    Required,
    Unrequired
};