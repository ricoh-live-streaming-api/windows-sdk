#pragma once
enum class ConnectionState
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

enum class ErrorType
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

enum class IceTransportPolicy 
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


enum class Stability 
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

enum class MuteType
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

enum class CapturerType
{
	/// <summary>
	/// Capture video from device.
	/// </summary>
	Device,
	/// <summary>
	/// Capture video from unity camera.
	/// </summary>
	UnityCamera,
	/// <summary>
	/// Create video frame from byte array.
	/// </summary>
	ByteArray
};

enum class IceServersProtocol
{
   All,
   Udp,
   Tcp,
   Tls,
   isNull
};

enum VideoRequirement
{

    Required,
    Unrequired
};