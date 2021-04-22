using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotationReset : MonoBehaviour
{
    Transform t;

    void Start()
    {
        t = transform;
    }
    void Update()
    {
        t.rotation = Quaternion.identity;
    }
}
