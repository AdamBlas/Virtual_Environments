using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class ControllerBatteryLevel : MonoBehaviour
{
    float leftBat = 0;
    float rightBat = 0;

    InputDevice leftDev;
    InputDevice rightDev;

    void Update()
    {
        if (!leftDev.isValid)
            GetLeftDevice();

        if (!rightDev.isValid)
            GetRightDevice();

        leftDev.TryGetFeatureValue(CommonUsages.batteryLevel, out leftBat);
        rightDev.TryGetFeatureValue(CommonUsages.batteryLevel, out rightBat);

        print("L-Battery: " + leftBat + " | R-Battery: " + rightBat);
    }

    void GetLeftDevice()
    {
        leftDev = InputDevices.GetDeviceAtXRNode(XRNode.LeftHand);
    }
    void GetRightDevice()
    {
        rightDev = InputDevices.GetDeviceAtXRNode(XRNode.RightHand);
    }
}
