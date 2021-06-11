using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Component that allows bowstring to be grabbed and pulled.
/// </summary>
public class Bow_BowstringGrabber : MonoBehaviour
{
    /// <summary> How much bowstring can be pulled. </summary>
    float bowstringLimit = 4f;

    /// <summary> Flag that indicates if right hand is touching the bowstring. </summary>
    bool isRightInside = false;
    /// <summary> Flag that indicates if left hand is touching the bowstring. </summary>
    bool isLeftInside = false;
    /// <summary> Point of bowstring in idle mode. </summary>
    private Vector3 pointZero;
    /// <summary> Grabbable component of arrow on bowstring. </summary>
    private Grabbable arrowGrab;
    /// <summary> Arrow component of arrow on bowstring. </summary>
    private Bow_Arrow arrowComp;

    /// <summary> How much bow should shrink in Y scale while on max pull. </summary>
    float xRescaler = .2f;
    /// <summary> How much bow should lengthen in Z scale while on max pull. </summary>
    float zRescaler = .3f;
    /// <summary> Bow model. </summary>
    public Transform model;

    VRDevice device;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("RightHand"))
        {
            isRightInside = true;
        }
        else if (other.CompareTag("LeftHand"))
        {
            isLeftInside = true;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("RightHand"))
        {
            isRightInside = false;
        }
        else if (other.CompareTag("LeftHand"))
        {
            isLeftInside = false;
        }
    }

    void Start()
    {
        pointZero = this.transform.localPosition;                       // Get default position
        GetComponentInParent<Grabbable>().onRelease += DropArrow;       // If bow is dropped when arrow is on bowstring, drop arrow
        bowstringLimit -= bowstringLimit * zRescaler;                   // Recalculate limit, so it isn't affected by rescaling 
        PlayersManager.RightHand.Trigger.onDown += OnTriggerDown;                      // Add events to trigger presses
        PlayersManager.LeftHand.Trigger.onDown += OnTriggerDown;
    }

    void OnTriggerDown(VRDevice d)
    {
        // If player grabbed bowstring
        if ((isRightInside && d.Hand == Valve.VR.SteamVR_Input_Sources.RightHand) || (isLeftInside && d.Hand == Valve.VR.SteamVR_Input_Sources.LeftHand))
        {
            device = d;

            // If player is holding arrow in his hand, put that arrow on bowstring
            if (d.Grabber.heldItem != null && d.Grabber.heldItem.CompareTag("Arrow"))
            {
                PutAnArronOnBowstring();
            }

            // Start coroutine responsible for adjusting bowstring position
            StartCoroutine(HoldBowstring());
        }
    }

    IEnumerator HoldBowstring()
    {
        while (true)
        {
            // Calculate how far bowstring is pulled
            this.transform.position = device.GameObject.transform.position;
            this.transform.localPosition = new Vector3(0, 0, this.transform.localPosition.z);
            float diff = pointZero.z - this.transform.localPosition.z;

            // Clamp value
            if (diff > bowstringLimit)
            {
                this.transform.localPosition = pointZero - new Vector3(0, 0, bowstringLimit);
                diff = bowstringLimit;
            }
            if (diff < 0)
            {
                this.transform.localPosition = pointZero;
                diff = 0;
            }

            // Remap value to 0-1 range
            float strength = (diff / bowstringLimit);

            // Rescale bow
            float xScale = 1 - strength * xRescaler;
            float zScale = 1 + strength * zRescaler;
            model.localScale = new Vector3(xScale, 1, zScale);

            // If bowstring is released
            if (device.Trigger.Released)
            {
                ReleaseBowstring(strength);
                yield break;
            }

            // Apply vibration
            if (strength > .19f)
            {
                device.Vibrate(0, Time.deltaTime, 3, Mathf.Pow(strength - .19f, 2));
                device.other.Vibrate(0, Time.deltaTime, 3, Mathf.Pow(strength - .19f, 2));
            }

            // Draw path
            //arrowComp?.MarkPath(diff / Time.deltaTime);

            yield return null;
        }
    }

    void PutAnArronOnBowstring()
    {
        arrowGrab = device.Grabber.heldItem;                                // Get Component
        arrowComp = arrowGrab.GetComponent<Bow_Arrow>();                    // Get Component
        arrowGrab.onGrab += arrowComp.OnGrab;                               // Move event to arrow component
        device.Grabber.LetItemGo();                                         // Drop arrow from hand
        arrowGrab.DisablePhysics();                                         // Disable arrow physics
        arrowGrab.transform.SetParent(this.transform);                      // ====
        arrowGrab.transform.localPosition = Vector3.zero;                   // Set arrow as child of bowstring
        arrowGrab.transform.localRotation = Quaternion.Euler(90, 0, 0);     // ====
    }

    void ReleaseBowstring(float strength)
    {
        // Calculate velocity
        float velocity = strength / Time.deltaTime;

        // Reset position
        this.transform.localPosition = pointZero;

        // Reset bow's rescale
        model.localScale = Vector3.one;

        // Send short, strong impulse to hand devices
        device.Vibrate(0, .1f, 200, strength);
        device.other.Vibrate(0, .1f, 200, strength);

        // If arrow was loaded
        if (arrowComp != null)
        {
            arrowGrab.onGrab -= arrowComp.OnGrab;

            if (strength < .2f)
                CancelShot();
            else
                ReleaseArrow(velocity);

            arrowGrab = null;
            arrowComp = null;
        }
    }
    void CancelShot()
    {
        device.Grabber.hoveredItems.Add(arrowGrab);
        device.Grabber.GrabItem();
        arrowComp.ClearPath();
    }
    void DropArrow(Grabber _)
    {
        if (arrowGrab != null)
        {
            arrowGrab.transform.SetParent(null);
            arrowGrab.EnablePhysics();
        }
    }
    
    void ReleaseArrow(float velocity)
    {
        arrowGrab.transform.SetParent(null);
        arrowGrab.GetComponent<Bow_Arrow>().ReleaseArrow(velocity);
    }
}
