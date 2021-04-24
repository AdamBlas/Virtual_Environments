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
        pointZero = this.transform.localPosition;
        GetComponentInParent<Grabbable>().onRelease += DropArrow;
        bowstringLimit -= bowstringLimit * zRescaler;
    }

    void Update()
    {
        if (isInside && RightHand.Trigger.Down)
        {
            if (RightHand.grabber.heldItem != null && RightHand.grabber.heldItem.tag.Equals("Arrow"))
            {
                PutAnArronOnBowstring();
            }

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

            float strength = (diff / bowstringLimit);

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
            arrowComp?.MarkPath(diff / Time.deltaTime);

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
        float velocity = strength / Time.deltaTime;
        this.transform.localPosition = pointZero;
        model.localScale = Vector3.one;

        RightHand.Vibrate(0, .1f, 200, strength);
        LeftHand.Vibrate(0, .1f, 200, strength);

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
