using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pauser : MonoBehaviour
{
#if UNITY_EDITOR
    void Update()
    {
        if (VRController.LeftHand.Button.Down)
        {
            Debug.Break();
        }
    }
#endif
}
