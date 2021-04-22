using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grabbable : MonoBehaviour
{
    /// <summary> Flag that indicates whether object can be grabbed with left hand </summary>
    public bool canBeGrabbedWithLeftHand = false;

    /// <summary> Flag that indicates whether object can be grabbed with right hand </summary>
    public bool canBeGrabbedWithRightHand = false;

    /// <summary> Flag that indicates whether rotation should be adjusted to hand's rotation when item is grabbed </summary>
    public bool resetRotationWhileGrabbed = true;

    /// <summary> Rotation offset applied when reset is true and rotation is reseted </summary>
    public Vector3 rotationBase;

    /// <summary> Delegate invoked on grab </summary>
    public Toolbox.void_Grabber onGrab;

    /// <summary> Delegate invoked on relase </summary>
    public Toolbox.void_Grabber onRelease;

    /// <summary> Rigidbody of the item </summary>
    [HideInInspector]
    public Rigidbody rb;

    /// <summary> Currently hovered grabber object </summary>
    Grabber grabber;



    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (IsConditionMet(other))
        {
            // If registered collider was right hand, assign itself to its grabber, so the grabber will know that this is the item...
            // ...that is supposed to be grabbed

            grabber = other.GetComponent<Grabber>();
            grabber.hoveredItem = this;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (IsConditionMet(other))
        {
            // If hand leaves the collider area, remove traces of itself if needed
            if (grabber != null && grabber.hoveredItem == this)
                grabber.hoveredItem = null;
        }
    }

    public void DisablePhysics()
    {
        rb.isKinematic = true;
        rb.detectCollisions = false;
        rb.useGravity = false;
    }
    public void EnablePhysics()
    {
        rb.isKinematic = false;
        rb.detectCollisions = true;
        rb.useGravity = true;
    }

    private bool IsConditionMet(Collider other)
    {
        return (canBeGrabbedWithRightHand && other.tag.Equals("RightHand")) || (canBeGrabbedWithLeftHand && other.tag.Equals("LeftHand"));
    }
}
