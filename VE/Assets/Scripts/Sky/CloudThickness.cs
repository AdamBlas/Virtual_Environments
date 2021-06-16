using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudThickness : MonoBehaviour
{
    public int number;
    public Color outerColor;
    public Color innerColor;

    Renderer cloud;
    float intensity;

    void Start()
    {
        cloud = GetComponent<Renderer>();
        float intensity = cloud.material.GetFloat("_NoiseIntensity");
        this.intensity = intensity - ((intensity / 6) * number);
    }

    private void OnWillRenderObject()
    {
        cloud.material.SetFloat("_NoiseIntensity", intensity);
        cloud.material.SetColor("_InnerColor", innerColor);
        cloud.material.SetColor("_OuterColor", outerColor);
    }
}
