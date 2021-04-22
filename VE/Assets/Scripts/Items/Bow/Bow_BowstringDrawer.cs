using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bow_BowstringDrawer : MonoBehaviour
{
    [SerializeField]
    private Transform pointA;
    [SerializeField]
    private Transform pointB;
    [SerializeField]
    private Transform grabPoint;
    [SerializeField]
    private Renderer grabPointIndicator;

    private LineRenderer _lr;
    private Grabbable grab;

    void Start()
    {
        _lr = GetComponent<LineRenderer>();
        _lr.positionCount = 3;
        
        _lr.startWidth = 0.004f;
        _lr.endWidth = _lr.startWidth;

        grab = GetComponentInParent<Grabbable>();
        grab.onGrab += ShowMarker;
        grab.onRelease += HideMarker;
    }

    // Update is called once per frame
    void Update()
    {
        _lr.SetPosition(0, pointA.position);
        _lr.SetPosition(1, grabPoint.transform.position);
        _lr.SetPosition(2, pointB.position);
    }

    void ShowMarker(Grabber _)
    {
        grabPointIndicator.enabled = true;
    }
    void HideMarker(Grabber _)
    {
        grabPointIndicator.enabled = false;
    }
}
