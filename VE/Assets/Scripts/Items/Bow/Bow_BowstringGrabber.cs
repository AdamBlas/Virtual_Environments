using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static VRController;

public class Bow_BowstringGrabber : MonoBehaviour
{
    float bowstringLimit = 4f;

    bool isInside = false;
    private Vector3 pointZero;
    private Grabbable arrowGrab;
    private Bow_Arrow arrowComp;

    float xRescaler = .2f;
    float zRescaler = .3f;
    public Transform model;



    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("RightHand"))
        {
            isInside = true;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("RightHand"))
        {
            isInside = false;
        }
    }

    void Start()
    {
        pointZero = this.transform.localPosition;                       // Get default position
        GetComponentInParent<Grabbable>().onRelease += DropArrow;       // If bow is dropped when arrow is on bowstring, drop arrow
        bowstringLimit -= bowstringLimit * zRescaler;                   // Recalculate limit, so it isn't affected by rescaling 
    }

    void Update()
    {
        // If player grabbed bowstring
        if (isInside && RightHand.Trigger.Down)
        {
            // If player is holding arrow in his hand, put that arrow on bowstring
            if (RightHand.grabber.heldItem != null && RightHand.grabber.heldItem.tag.Equals("Arrow"))
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
            this.transform.position = RightHand.gameObject.transform.position;
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
            if (RightHand.Trigger.Released)
            {
                ReleaseBowstring(strength);
                yield break;
            }

            // Apply vibration
            if (strength > .19f)
            {
                RightHand.Vibrate(0, Time.deltaTime, 3, Mathf.Pow(strength - .19f, 2));
                LeftHand.Vibrate(0, Time.deltaTime, 3, Mathf.Pow(strength - .19f, 2));
            }

            // Draw path
            //arrowComp?.MarkPath(diff / Time.deltaTime);

            yield return null;
        }
    }

    void PutAnArronOnBowstring()
    {
        arrowGrab = RightHand.grabber.heldItem;
        arrowComp = arrowGrab.GetComponent<Bow_Arrow>();
        arrowGrab.onGrab += arrowComp.OnGrab;
        RightHand.grabber.LetItemGo();
        arrowGrab.DisablePhysics();
        arrowGrab.transform.SetParent(this.transform);
        arrowGrab.transform.localPosition = Vector3.zero;
        arrowGrab.transform.localRotation = Quaternion.Euler(90, 0, 0);
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
        RightHand.Vibrate(0, .1f, 200, strength);
        LeftHand.Vibrate(0, .1f, 200, strength);

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
        RightHand.grabber.hoveredItem = arrowGrab;
        RightHand.grabber.GrabItem();
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
