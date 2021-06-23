using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuiverLogic : MonoBehaviour
{
    Transform cam;
    public float neckOffset;
    public float backOffset;
    public GameObject arrowPrefab;

    void Start()
    {
        cam = Camera.main.transform;
        GetComponent<Grabbable>().onGrab += OnGrab;
    }

    void Update()
    {
        Vector3 neck = cam.position - (cam.up * neckOffset);
        this.transform.position = neck - (cam.forward * backOffset);
    }

    public void OnGrab(Grabber g)
    {
        g.LetItemGo();
        var arrow = Instantiate(arrowPrefab).GetComponent<Grabbable>();
        g.hoveredItems.Add(arrow);
        g.GrabItem();
    }
}
