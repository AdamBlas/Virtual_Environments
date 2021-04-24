using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Flammable : MonoBehaviour
{
    [SerializeField]
    private bool isLit;
    public bool IsLit { get => isLit; set => isLit = value; }

    public void LightFire()
    {
        print("Zapalono ogien");
    }

    public void ExtinguishFire()
    {
        print("Zgaszono ogien");
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("FireSource"))
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
