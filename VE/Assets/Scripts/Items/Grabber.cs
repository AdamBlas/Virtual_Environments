using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static VRDevice;

/// <summary>
/// GameObjects with this component can grab Grabbable objects
/// </summary>
public class Grabber : MonoBehaviour
{
    /// <summary> Assigned player </summary>
    private PlayerInstance player;

    /// <summary> Assigned device </summary>
    private VRDevice device;

    /// <summary> GameObject that grabber is currently holding </summary>
    public Grabbable heldItem { get; private set; }

    /// <summary> GameObject that will be grabbed if such command is registered </summary>
    [HideInInspector]
    public List<Grabbable> hoveredItems = new List<Grabbable>();

    /// <summary> BoolButton that is responsible for grabbing </summary>
    private VRDevice.BoolButton grabButton;

    /// <summary> Grabber's Velocity Calculator </summary>
    VelocityCalculator vc;

    /// <summary> Sets currently hovered item as held </summary>
    /// <returns> Whether catching item was successful or not </returns>
    public bool GrabItem()
    {
        // If item can't be grabbed (either grabber is already holding something or there is no item to grab), return false
        if (heldItem != null || hoveredItems.Count == 0)
            return false;

        heldItem = hoveredItems[hoveredItems.Count - 1];                                    // Set hovered item as currently held
        hoveredItems.Remove(heldItem);
        if (device.other.Grabber.hoveredItems.Contains(heldItem))
            device.other.Grabber.hoveredItems.Remove(heldItem);

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

        hoveredItems.Remove(heldItem);
        heldItem.transform.SetParent(null);                       // Unparent item
        heldItem.EnablePhysics();                                 // Enable rigidbidy
        heldItem.rb.velocity = vc.Velocity;                       // Apply current velocity, so the item won't fall straight down, but rather act like it is thrown
        //holdedItem.rb.angularVelocity = vc.AngularVelocity;       // Apply current angular velocity (results look strange, so comment this line if needed) 
        heldItem.onRelease?.Invoke(this);                         // Invoke onRelese delegate
        heldItem = null;                                          // Reset held item
        return true;
    }

    void Start()
    {
        player = GetComponentInParent<PlayerInstance>();
        vc = GetComponent<VelocityCalculator>();

        if (gameObject.CompareTag("LeftHand"))
            device = player.LeftHand;
        else if (gameObject.CompareTag("RightHand"))
            device = player.RightHand;
        else
            throw new System.InvalidOperationException("Unknown device");

        grabButton = device.Grip;
        grabButton.events.onDown += OnGrabPress;
    }

    void ChangeGrabButton(VRDevice.BoolButton newButton)
    {
        grabButton.events.onDown -= OnGrabPress;
        grabButton = newButton;
        grabButton.events.onDown += OnGrabPress;
    }

    void OnGrabPress(VRDevice _)
    {
        if (heldItem == null)
            GrabItem();
        else
            LetItemGo();
    }
}
