using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Utils
{
    public delegate void void_Grabber(Grabber g);
    public delegate void void_Device(VRDevice d);
    public delegate void void_DeviceVec2(VRDevice d, Vector2 v);
    public delegate void void_DeviceVec2x2(VRDevice d, Vector2 vStart, Vector2 vCurr);
    public delegate void void_DeviceVec2x3(VRDevice d, Vector2 vStart, Vector2 vPrev, Vector2 vCurr);
    public delegate void void_void();
    public delegate void void_gameObject(GameObject gameObject);

    public static float Remap(float value, float from1, float to1, float from2, float to2)
    {
        return from2 + (value - from1) * (to2 - from2) / (to1 - from1);
    }
    public static float Remap01(float value, float from, float to)
    {
        return Remap(value, from, to, 0, 1);
    }
    public static bool PlaySound(AudioSource source, AudioClip clip=null)
    {
        if (source != null && (source.clip != null || clip != null))
        {
            if (clip != null)
                source.clip = clip;
            source.Play();
            return true;
        }
        return false;
    }
    public static bool PlayRandomSound(AudioSource source, List<AudioClip> clips)
    {
        if (source == null || clips == null || clips.Count == 0)
            return false;
        return PlaySound(source, clips[Random.Range(0, clips.Count)]);
    }
    public static bool StopSound(AudioSource source)
    {
        if (source != null && source.isPlaying)
        {
            source.Stop();
            return true;
        }
        return false;
    }
}
