using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grabber : MonoBehaviour
{
    /// <summary> GameObject that grabber is currently holding </summary>
    private Grabbable heldItem;

    /// <summary> GameObject that will be grabbed if such command is registered </summary>
    [HideInInspector]
    public Grabbable hoveredItem;

    /// <summary> Whether or not hovered item's rotation should be adjusted when grabbed </summary>
    [HideInInspector]
    public bool resetRotation;

    /// <summary> Grabber's Velocity Calculator </summary>
    VelocityCalculator vc;

    /// <summary> Sets currently hovered item as held </summary>
    /// <returns> Whether catching item was successful or not </returns>
    public bool GrabItem()
    {
        // If item can't be grabbed (either grabber is already holding something or there is no item to grab), return false
        if (heldItem != null || hoveredItem == null)
            return false;

        heldItem = hoveredItem;                                                   // Set hovered item as currently held
        hoveredItem = null;                                                       // Reset hovered item
        heldItem.rb.isKinematic = true;                                           // Disable rigidbody
        heldItem.transform.SetParent(this.transform);                             // Set parent
        heldItem.transform.localPosition = Vector3.zero;                          // Reset local position
        if (resetRotation)
            heldItem.transform.localRotation = Quaternion.Euler(90, 0, 0);        // Reset local rotation if needed

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
        heldItem.rb.isKinematic = false;                          // Enable rigidbidy
        heldItem.rb.velocity = vc.Velocity;                       // Apply current velocity, so the item won't fall straight down, but rather act like it is thrown
        //holdedItem.rb.angularVelocity = vc.AngularVelocity;         // Apply current angular velocity (results look strange, so comment this line if needed) 
        heldItem = null;                                          // Reset held item
        return true;
    }

    void Start()
    {
        vc = GetComponent<VelocityCalculator>();
    }
    void Update()
    {
        // If grip is pressed, invoke proper method
        if (HTCController.RightHandInput.Grip.Pressed)
        {
            if (heldItem == null)
                GrabItem();
            else
                LetItemGo();
        }
    }
}
