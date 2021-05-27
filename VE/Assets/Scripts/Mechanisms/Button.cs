using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Button : MonoBehaviour
{
    public bool IsPressed { get; private set; }
    public Toolbox.void_void onPress;
    public Toolbox.void_void onRelease;

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
            throw new MissingReferenceException("Cannot find cilinder representing pressable part of button.");

        audioSource = GetComponent<AudioSource>();
        onPress += (() => Toolbox.PlayRandomSound(audioSource, onPressClips));
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("LeftHand") || other.tag.Equals("RightHand"))
        {
            IsPressed = true;
            cylinder.localPosition -= new Vector3(0, pressOffset, 0);
            onPress?.Invoke();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag.Equals("LeftHand") || other.tag.Equals("RightHand"))
        {
            IsPressed = false;
            cylinder.localPosition += new Vector3(0, pressOffset, 0);
            onRelease?.Invoke();
        }
    }
}
