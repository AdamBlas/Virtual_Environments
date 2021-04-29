using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Toolbox
{
    public delegate void void_Grabber(Grabber g);
    public delegate void void_Device(VRController.Device d);
    public delegate void void_DeviceVec2(VRController.Device d, Vector2 v);
    public delegate void void_void();

    public static float Remap(float value, float from1, float to1, float from2, float to2)
    {
        return from2 + (value - from1) * (to2 - from2) / (to1 - from1);
    }
    public static float Remap01(float value, float from, float to)
    {
        return Remap(value, from, to, 0, 1);
    }
}
