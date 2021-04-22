using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.XR;

public class Blinker : MonoBehaviour
{
    [SerializeField]
    GameObject rayPrefab;
    GameObject ray;
    GameObject player;
    
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }

    void Update()
    {
        if (HTCController.RightHandInput.Trigger.Pressed)
        {
            ray = GameObject.Instantiate(rayPrefab);
            ray.transform.SetParent(HTCController.RightHand.transform);
            ray.transform.localPosition = Vector3.zero;
            ray.transform.localRotation = Quaternion.Euler(90, 0, 0);
        }

        if (HTCController.RightHandInput.Trigger.Released)
        {
            if (Physics.Raycast(origin: ray.transform.position, direction: ray.transform.up, maxDistance: 10, layerMask: LayerMask.GetMask("Terrain"), hitInfo: out RaycastHit hit))
            {
                player.transform.position = new Vector3(hit.point.x - Camera.main.transform.localPosition.x, 0, hit.point.z - Camera.main.transform.localPosition.z);
            }

            Destroy(ray);
        }
    }

}
