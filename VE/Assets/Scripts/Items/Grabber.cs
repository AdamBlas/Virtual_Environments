using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grabber : MonoBehaviour
{
    /// <summary> Assigned device </summary>
    private HTCController.Device device;

    /// <summary> GameObject that grabber is currently holding </summary>
    [HideInInspector]
    public Grabbable heldItem { get; private set; }

    /// <summary> GameObject that will be grabbed if such command is registered </summary>
    [HideInInspector]
    public Grabbable hoveredItem;

    /// <summary> Grabber's Velocity Calculator </summary>
    VelocityCalculator vc;

    /// <summary> Sets currently hovered item as held </summary>
    /// <returns> Whether catching item was successful or not </returns>
    public bool GrabItem()
    {
        // If item can't be grabbed (either grabber is already holding something or there is no item to grab), return false
        if (heldItem != null || hoveredItem == null)
            return false;

        heldItem = hoveredItem;                                                             // Set hovered item as currently held
        hoveredItem = null;                                                                 // Reset hovered item
        heldItem.DisablePhysics();                                                          // Disable rigidbody
        heldItem.transform.SetParent(this.transform);                                       // Set parent
        heldItem.transform.localPosition = Vector3.zero;                                    // Reset local position
        if (heldItem.resetRotationWhileGrabbed)
            heldItem.transform.localRotation = Quaternion.Euler(heldItem.rotationBase);     // Reset local rotation if needed
        heldItem.onGrab?.Invoke(this);                                                      // Invoke onGrab delegate

        return true;
    }

    /// <summary> Releases currently held item </summary>
    /// <returns> Whether releasing was successful or not </returns>
    public bool LetItemGo()
    {
        // If no item is held, return false
        if (heldItem == null)
            return false;

        heldItem.transform.SetParent(null);                       // Unparent item
        heldItem.EnablePhysics();                                 // Enable rigidbidy
        heldItem.rb.velocity = vc.Velocity;                       // Apply current velocity, so the item won't fall straight down, but rather act like it is thrown
        //holdedItem.rb.angularVelocity = vc.AngularVelocity;         // Apply current angular velocity (results look strange, so comment this line if needed) 
        heldItem.onRelease?.Invoke(this);                         // Invoke onRelese delegate
        heldItem = null;                                          // Reset held item
        return true;
    }

    void Start()
    {
        vc = GetComponent<VelocityCalculator>();

        if (gameObject.tag.Equals("LeftHand"))
            device = HTCController.LeftHandInput;
        else if (gameObject.tag.Equals("RightHand"))
            device = HTCController.RightHandInput;
        else
            throw new System.InvalidOperationException("Unknown device");
    }
    void Update()
    {
        // If grip is pressed, invoke proper method
        if (device.Grip.Down)
        {
            if (heldItem == null)
                GrabItem();
            else
                LetItemGo();
        }
    }
}
