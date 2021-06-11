using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

/// <summary> Represents single player instance </summary>
public class PlayerInstance : MonoBehaviour
{
    /// <summary> Player's right hand device </summary>
    public VRDevice RightHand { get; private set; }

    /// <summary> Player's left hand device </summary>
    public VRDevice LeftHand { get; private set; }

    public Camera Camera { get; private set; }

    void Start()
    {
        LeftHand = new VRDevice(SteamVR_Input_Sources.LeftHand, "Left hand", transform.Find("Controller (left)").gameObject, this);
        RightHand = new VRDevice(SteamVR_Input_Sources.RightHand, "Right hand", transform.Find("Controller (right)").gameObject, this);

        LeftHand.AssignOther(RightHand);
        RightHand.AssignOther(LeftHand);

        Camera = GetComponentInChildren<Camera>();

        PlayersManager.AddPlayer(this);
    }

    // Update is called once per frame
    void Update()
    {
        LeftHand.Update();
        RightHand.Update();

        //LeftHand.DebugDevice();
        //RightHand.DebugDevice();
    }
}
