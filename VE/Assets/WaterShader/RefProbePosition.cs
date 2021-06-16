using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RefProbePosition : MonoBehaviour
{
    public Transform refProbeTransform;
    public Transform waterTransform;

    void Update()
    {
        refProbeTransform.position = new Vector3(
            this.transform.position.x,
            this.transform.position.y - (2 * (this.transform.position.y - waterTransform.position.y)),
            this.transform.position.z
            );
    }
}
