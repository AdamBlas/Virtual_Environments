using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.XR;
using static VRDevice;

public class Blinker : MonoBehaviour
{
    /// <summary> Prefab of the ray indicator </summary>
    [SerializeField]
    GameObject rayPrefab;

    /// <summary> GameObject of the instantiated ray </summary>
    GameObject ray;

    /// <summary> GameObject that is supposed to blink (player by default) </summary>
    PlayerInstance player;

    /// <summary> Audio Source </summary>
    AudioSource audioSource;

    /// <summary> Clips to play on blink </summary>
    public List<AudioClip> onBlinkClips;

    void Start()
    {
        // Find player object
        player = GetComponent<PlayerInstance>();
        audioSource = GetComponent<AudioSource>();
        PlayersManager.RightHand.TouchpadButton.onDown += ShowRay;
        PlayersManager.RightHand.TouchpadButton.onRelease += TryToBlink;
    }

    void ShowRay(VRDevice device)
    {
        // When right touchpad is pressed, create ray object and assign it to hand object, so it follows hand movement
        ray = GameObject.Instantiate(rayPrefab);                                // Create ray
        ray.transform.SetParent(device.GameObject.transform);                   // Set its parent
        ray.transform.localPosition = Vector3.zero;                             // Reset its local position
        ray.transform.localRotation = Quaternion.Euler(90, 0, 0);               // Reset its local rotation, rotate by 90 degrees so it points in the right direction
    }
    void TryToBlink(VRDevice _)
    {
        // When right touchpad is released, send raycats to check if ray hit something, blink player if yes, and destroy ray object
        if (ray != null)
        {
            if (Physics.Raycast(origin: ray.transform.position, direction: ray.transform.up, maxDistance: 10, layerMask: LayerMask.GetMask("Terrain"), hitInfo: out RaycastHit hit))
            {
                // Camera position is not equal to player position (moving in real world doesn't change player's position, only camera's offset)
                // So for player to appear in pointed location, we have to sutract that offset from location's position
                player.transform.position = new Vector3(hit.point.x - player.Camera.transform.localPosition.x, hit.point.y, hit.point.z - player.Camera.transform.localPosition.z);
                Utils.PlayRandomSound(audioSource, onBlinkClips);
            }

            Destroy(ray);
        }
    }

}
