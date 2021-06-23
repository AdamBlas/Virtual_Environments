using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HangingTarget : MonoBehaviour
{
    public float maxAngle;
    public float speed;
    public Transform target;
    LineRenderer line;

    void Start()
    {
        line = GetComponent<LineRenderer>();
        line.SetPositions(new Vector3[] { this.transform.position, target.transform.position });
    }

    void Update()
    {
        float angle = Mathf.Sin(Time.time * speed) * maxAngle;
        this.transform.rotation = Quaternion.Euler(angle, 0, 0);

        line.SetPosition(1, target.transform.position);
    }
}
