using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Flammable : MonoBehaviour
{
    [SerializeField]
    private bool isLit;
    public bool IsLit { get => isLit; set => isLit = value; }
    ParticleSystem particles;
    Light lightSource;

    void Start()
    {
        particles = GetComponent<ParticleSystem>();
        lightSource = transform.parent.GetComponentInChildren<Light>();

        if (isLit)
        {
            particles.Play();
            lightSource.enabled = true;
        }
        else
        {
            particles.Stop();
            lightSource.enabled = false;
        }
    }

    public void LightFire()
    {
        isLit = true;
        lightSource.enabled = true;
        particles.Play();
    }

    public void ExtinguishFire()
    {
        isLit = false;
        lightSource.enabled = false;
        particles.Stop();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("FireSource") && other.GetComponent<Flammable>().isLit)
        {
            if (!isLit)
            {
                isLit = true;
                LightFire();
                Invoke("ExtinguishFire", 5);
            }
        }
    }
}
