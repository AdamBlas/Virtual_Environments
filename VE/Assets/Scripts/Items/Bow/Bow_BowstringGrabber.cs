using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static VRController;

public class Bow_BowstringGrabber : MonoBehaviour
{
    public float bowstringLimit = 1f;

    bool isInside = false;
    private Vector3 pointZero;
    private Grabbable arrowGrab;
    private Bow_Arrow arrowComp;

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("RightHand"))
        {
            isInside = true;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.tag.Equals("RightHand"))
        {
            isInside = false;
        }
    }

    void Start()
    {
        pointZero = this.transform.localPosition;
        GetComponentInParent<Grabbable>().onRelease += DropArrow;
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
            if (RightHand.Trigger.Released)
            {
                ReleaseBowstring();
                yield break;
            }

            this.transform.position = RightHand.gameObject.transform.position;
            this.transform.localPosition = new Vector3(0, 0, this.transform.localPosition.z);

            float diff = pointZero.z - this.transform.localPosition.z;

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

            arrowComp?.MarkPath(diff / Time.deltaTime);

            yield return null;
        }
    }
    void ReleaseBowstring()
    {
        float velocity = (pointZero.z - this.transform.localPosition.z) / Time.deltaTime;
        this.transform.localPosition = pointZero;

        if (arrowGrab != null)
            ReleaseArrow(velocity);
    }

    void DropArrow(Grabber _)
    {
        if (arrowGrab != null)
        {
            arrowGrab.transform.SetParent(null);
            arrowGrab.EnablePhysics();
        }
    }
    void PutAnArronOnBowstring()
    {
        arrowGrab = RightHand.grabber.heldItem;
        arrowComp = arrowGrab.GetComponent<Bow_Arrow>();
        RightHand.grabber.LetItemGo();
        arrowGrab.DisablePhysics();
        arrowGrab.transform.SetParent(this.transform);
        arrowGrab.transform.localPosition = Vector3.zero;
        arrowGrab.transform.localRotation = Quaternion.Euler(90, 0, 0);
    }
    void ReleaseArrow(float velocity)
    {
        arrowGrab.transform.SetParent(null);
        arrowGrab.GetComponent<Bow_Arrow>().ReleaseArrow(velocity);

        arrowGrab = null;
        arrowComp = null;
    }
}
