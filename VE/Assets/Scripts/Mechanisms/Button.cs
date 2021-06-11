using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Button : MonoBehaviour
{
    public bool IsPressed { get; private set; }
    public Utils.void_gameObject onPress;
    public Utils.void_gameObject onRelease;

    float pressOffset = 0.02f;
    Transform cylinder;

    AudioSource audioSource;
    public List<AudioClip> onPressClips;

    void Start()
    {
        foreach (Transform t in this.transform)
        {
            if (t.name.Equals("Cylinder"))
            {
                cylinder = t;
                break;
            }    
        }

        if (cylinder == null)
            throw new MissingReferenceException("Cannot find cylinder representing pressable part of button.");

        audioSource = GetComponent<AudioSource>();
        onPress += ((_) => Utils.PlayRandomSound(audioSource, onPressClips));
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!IsPressed)
        {
            if (other.CompareTag("LeftHand") || other.CompareTag("RightHand"))
            {
                IsPressed = true;
                cylinder.localPosition -= new Vector3(0, pressOffset, 0);
                onPress?.Invoke(this.gameObject);
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (IsPressed)
        {
            if (other.CompareTag("LeftHand") || other.CompareTag("RightHand"))
            {
                IsPressed = false;
                cylinder.localPosition += new Vector3(0, pressOffset, 0);
                onRelease?.Invoke(this.gameObject);
            }
        }
    }
}
