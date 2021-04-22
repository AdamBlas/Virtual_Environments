using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static HTCController;

public class Bow_ChordGrabber : MonoBehaviour
{
    bool isInside = false;
    private Vector3 pointZero;
    private Grabbable arrow;

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
    }

    void Update()
    {
        if (isInside && RightHandInput.Trigger.Down &&  RightHandGrabber.heldItem != null && RightHandGrabber.heldItem.tag.Equals("Arrow"))
        {
            arrow = RightHandGrabber.heldItem;
            RightHandGrabber.LetItemGo();
            arrow.DisablePhysics();
            arrow.transform.SetParent(this.transform);
            arrow.transform.localPosition = Vector3.zero;
            arrow.transform.localRotation = Quaternion.Euler(90, 0, 0);
            //StartCoroutine(HoldChord());
        }
    }

    IEnumerator HoldChord()
    {
        while (true)
        {
            if (RightHandInput.Trigger.Released)
            {
                ReleaseArrow();
                yield break;
            }

            this.transform.position = RightHand.transform.position;
            this.transform.localPosition = new Vector3(0, 0, this.transform.localPosition.z);
            yield return null;
        }
    }

    void ReleaseArrow()
    {
        arrow.transform.SetParent(null);
    }
}
