using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.XR;

public class Blinker : MonoBehaviour
{
    /// <summary> Prefab of the ray indicator </summary>
    [SerializeField]
    GameObject rayPrefab;

    /// <summary> GameObject of the instantiated ray </summary>
    GameObject ray;

    /// <summary> GameObject that is supposed to blink (player by default) </summary>
    GameObject player;
    


    void Start()
    {
        // Find player object
        player = GameObject.FindGameObjectWithTag("Player");
    }
    void Update()
    {
        // If right touchpad is pressed, create ray object and assign it to hand object, so it follows hand movement
        if (HTCController.RightHandInput.TouchpadButton.Down)
        {
            ray = GameObject.Instantiate(rayPrefab);                        // Create ray
            ray.transform.SetParent(HTCController.RightHand.transform);     // Set its parent
            ray.transform.localPosition = Vector3.zero;                     // Reset its local position
            ray.transform.localRotation = Quaternion.Euler(90, 0, 0);       // Reset its local rotation, rotate by 90 degrees so it points in the right direction
        }

        // If right touchpad is released, send raycats to check if ray hit something, blink player if yes, and destroy ray object
        if (HTCController.RightHandInput.TouchpadButton.Released)
        {
            if (Physics.Raycast(origin: ray.transform.position, direction: ray.transform.up, maxDistance: 10, layerMask: LayerMask.GetMask("Terrain"), hitInfo: out RaycastHit hit))
            {
                // Camera position is not equal to player position (moving in real world doesn't change player's position, only camera's offset)
                // So for player to appear in pointed location, we have to sutract that offset from location's position
                player.transform.position = new Vector3(hit.point.x - Camera.main.transform.localPosition.x, 0, hit.point.z - Camera.main.transform.localPosition.z);
            }

            Destroy(ray);
        }
    }

}
