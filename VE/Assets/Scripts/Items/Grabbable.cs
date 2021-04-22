using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grabbable : MonoBehaviour
{
    /// <summary> Flag that indicates whether rotation should be adjusted to hand's rotation when item is grabbed </summary>
    public bool resetRotationWhileGrabbed = true;

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
        if (other.tag.Equals("RightHand"))
        {
            // If registered collider was right hand, assign itself to its grabber, so the grabber will know that this is the item...
            // ...that is supposed to be grabbed

            grabber = other.GetComponent<Grabber>();
            grabber.hoveredItem = this;
            grabber.resetRotation = resetRotationWhileGrabbed;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag.Equals("RightHand"))
        {
            // If hand leaves the collider area, remove traces of itself if needed

            if (grabber != null && grabber.hoveredItem == this)
                grabber.hoveredItem = null;
        }
    }
}
