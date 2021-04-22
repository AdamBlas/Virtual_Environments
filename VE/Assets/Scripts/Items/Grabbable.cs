using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grabbable : MonoBehaviour
{
    public bool resetRotationWhileGrabbed = true;
    public Rigidbody rb;
    Grabber grabber;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("RightHand"))
        {
            grabber = other.GetComponent<Grabber>();
            grabber.hoveredItem = this;
            grabber.resetRotation = resetRotationWhileGrabbed;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag.Equals("RightHand"))
        {
            if (grabber != null && grabber.hoveredItem == this)
                grabber.hoveredItem = null;
        }
    }
}
