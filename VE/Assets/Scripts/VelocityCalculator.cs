using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VelocityCalculator : MonoBehaviour
{
    Vector3 _prevPos = Vector3.zero;
    Vector3 _currPos;
    public Vector3 Velocity { get; private set; }

    Vector3 _prevRot = Vector3.zero;
    Vector3 _currRot;
    public Vector3 AngularVelocity { get; private set; }

    void Update()
    {
        _currPos = transform.position;
        Velocity = (_currPos - _prevPos) / Time.deltaTime;
        _prevPos = _currPos;

        _currRot = transform.rotation.eulerAngles;
        AngularVelocity = (_currRot - _prevRot) / Time.deltaTime;
        _prevRot = _currRot;
    }
}
