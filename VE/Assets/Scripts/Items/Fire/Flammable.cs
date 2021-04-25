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
    }

    public void ExtinguishFire()
    {
        isLit = false;
        lightSource.enabled = false;
        particles.Stop();
        audioSource.Stop();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("FireSource") && other.GetComponent<Flammable>().isLit)
        {
            if (!isLit)
            {
                LightFire();
                Invoke("ExtinguishFire", 5);
            }
        }
    }
}
