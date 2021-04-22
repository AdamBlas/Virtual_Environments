using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grabber : MonoBehaviour
{
    private Grabbable holdedItem;
    [HideInInspector]
    public Grabbable hoveredItem;
    [HideInInspector]
    public bool resetRotation;

    VelocityCalculator vc;

    public bool GrabItem()
    {
        if (holdedItem != null || hoveredItem == null)
            return false;

        holdedItem = hoveredItem;
        hoveredItem = null;
        holdedItem.rb.isKinematic = true;
        holdedItem.transform.SetParent(this.transform);
        holdedItem.transform.localPosition = Vector3.zero;
        if (resetRotation)
            holdedItem.transform.localRotation = Quaternion.Euler(90, 0, 0);

        return true;
    }

    public bool LetItemGo()
    {
        if (holdedItem == null)
            return false;

        holdedItem.transform.SetParent(null);
        holdedItem.rb.isKinematic = false;
        holdedItem.rb.velocity = vc.Velocity;
        holdedItem.rb.angularVelocity = vc.AngularVelocity;
        holdedItem = null;
        return true;
    }

    void Start()
    {
        vc = GetComponent<VelocityCalculator>();
    }

    void Update()
    {
        if (HTCController.RightHandInput.Grip.Pressed)
        {
            if (holdedItem == null)
                GrabItem();
            else
                LetItemGo();
        }
    }
}
