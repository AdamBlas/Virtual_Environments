using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Flammable : MonoBehaviour
{
    [SerializeField]
    ParticleSystem particles;
    [SerializeField]
    Light lightSource;
    [SerializeField]
    AudioSource audioSource;
    
    [Space]

    [SerializeField]
    private bool isLit;
    public bool IsLit { get => isLit; set => isLit = value; }

    [SerializeField]
    [Range(0, 1)]
    private float minLightIntensity;
    [SerializeField]
    [Range(0, 5)]
    private float maxLightIntensity;



    private long lightStartTime;
    
    void Start()
    {
        if (isLit)
            LightFire();
        else
            ExtinguishFire();
    }

    public void LightFire()
    {
        isLit = true;
        lightSource.enabled = true;
        particles.Play();
        audioSource.Play();

        lightStartTime = Time.frameCount;
        StartCoroutine(ModifyLight());
    }

    public void ExtinguishFire()
    {
        isLit = false;
        StartCoroutine(ExtinguishLight());
        particles.Stop();
        audioSource.Stop();

        StopCoroutine(ModifyLight());
    }

    private IEnumerator ModifyLight()
    {
        while (isLit)
        {
            float x = (Time.frameCount - lightStartTime) * 0.08f;
            float intensity = minLightIntensity + (maxLightIntensity - minLightIntensity) * (Mathf.PerlinNoise(x, 0));
            lightSource.intensity = intensity;
            yield return null;
        }
    }
    private IEnumerator ExtinguishLight()
    {
        float intensity = lightSource.intensity;
        float step = intensity / 20;
        for (int i = 0; i < 20; i++)
        {
            lightSource.intensity -= step;
            yield return new WaitForSeconds(0.1f);
        }
        lightSource.enabled = false;
    }


    private void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("FireSource") && other.GetComponent<Flammable>().isLit)
        {
            if (!isLit)
            {
                LightFire();
            }
        }
    }
}
