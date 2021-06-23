using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// GameObjects with this component can be grabbed by player
/// </summary>
public class Grabbable : MonoBehaviour
{
    [Header("Interaction variables")]

    /// <summary> Flag that indicates whether object can be grabbed with left hand </summary>
    public bool canBeGrabbedWithLeftHand = false;

    /// <summary> Flag that indicates whether object can be grabbed with right hand </summary>
    public bool canBeGrabbedWithRightHand = false;

    /// <summary> Flag that indicates whether rotation should be adjusted to hand's rotation when item is grabbed </summary>
    public bool resetRotationWhileGrabbed = true;

    /// <summary> Rotation offset applied when reset is true and rotation is reseted </summary>
    public Vector3 rotationBase;

    /// <summary> Delegate invoked on grab </summary>
    public Utils.void_Grabber onGrab;

    /// <summary> Delegate invoked on relase </summary>
    public Utils.void_Grabber onRelease;

    [Space]
    [Header("Audio properties")]

    /// <summary> Audio to play on grab </summary>
    public AudioSource onGrabAudio;

    /// <summary> Audio to play on release </summary>
    public AudioSource onReleaseAudio;

    /// <summary> Rigidbody of the item </summary>
    [HideInInspector]
    public Rigidbody rb;

    /// <summary> Currently hovered grabber object </summary>
    Grabber grabber;

    void Awake()
    {
        rb = GetComponent<Rigidbody>();
        onGrab += (_) => Utils.PlaySound(onGrabAudio);
        onRelease += (_) => Utils.PlaySound(onReleaseAudio);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (IsConditionMet(other))
        {
            // If registered collider was hand, assign itself to its grabber, so the grabber will know that this is the item...
            // ...that is supposed to be grabbed
            grabber = other.GetComponent<Grabber>();
            grabber.hoveredItems.Add(this);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (IsConditionMet(other))
        {
            // If hand leaves the collider area, remove traces of itself if needed
            if (grabber != null && grabber.hoveredItems.Contains(this))
                grabber.hoveredItems.Remove(this);
        }
    }

    public void DisablePhysics()
    {
        rb.isKinematic = true;
        rb.useGravity = false;
    }
    public void EnablePhysics()
    {
        rb.isKinematic = false;
        rb.useGravity = true;
    }

    private bool IsConditionMet(Collider other)
    {
        return (canBeGrabbedWithRightHand && other.CompareTag("RightHand")) || (canBeGrabbedWithLeftHand && other.CompareTag("LeftHand"));
    }
}
