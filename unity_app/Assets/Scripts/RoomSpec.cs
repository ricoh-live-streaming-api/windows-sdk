using System;
using System.Collections.Generic;

public class RoomSpec
{
    public enum Type
    {
        Sfu,
        SfuLarge,
        P2p,
        P2pTurn
    }

    private readonly string typeString;
    private readonly Dictionary<Type, string> typeStrings = new()
    {
        { Type.Sfu,      "sfu"},
        { Type.SfuLarge, "sfu_large"},
        { Type.P2p,      "p2p"},
        { Type.P2pTurn,  "p2p_turn"}
    };

    public RoomSpec(Type type)
    {
        if (!typeStrings.TryGetValue(type, out typeString))
        {
            throw new ArgumentException($"unknown room type : {type}");
        }
    }

    public Dictionary<string, object> GetSpec()
    {
        var dic = new Dictionary<string, object>
        {
            ["type"] = typeString,
            ["media_control"] = new Dictionary<string, object>() { ["bitrate_reservation_mbps"] = 25 }
        };

        return dic;
    }
}
