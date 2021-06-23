using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RefProbePosition : MonoBehaviour
{
    public Transform cameraTransform;
    public Transform waterTransform;

    public void Start()
    {
        cameraTransform = Camera.main.transform;
    }

    void Update()
    {
        this.transform.position = new Vector3(
            cameraTransform.transform.position.x,
            cameraTransform.transform.position.y - (2 * (cameraTransform.transform.position.y - waterTransform.position.y)),
            cameraTransform.transform.position.z
            );
    }
}
