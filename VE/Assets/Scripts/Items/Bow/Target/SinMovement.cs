using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SinMovement : MonoBehaviour
{
    Vector3 startPoint;

    public float speed = 100;

    [Space]

    public float maxXOffset = 1;
    public float maxYOffset = 1;
    public float maxZOffset = 1;

    [Space]

    public float xAxisStrength = 1;
    public float yAxisStrength = 0;
    public float zAxisStrength = 0;

    void Start()
    {
        startPoint = this.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.position = startPoint + new Vector3(maxXOffset * xAxisStrength, maxYOffset * yAxisStrength, maxZOffset * zAxisStrength) * Mathf.Sin(Time.frameCount * 0.0001f * speed);
    }
}
