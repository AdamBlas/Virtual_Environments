using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootingRange : MonoBehaviour
{
    public Button spawnMoreArrowsButton;
    public Transform spawnArrowsPoint;

    public GameObject arrowPrefab;

    void Start()
    {
        spawnMoreArrowsButton.onPress += SpawnArrows;
    }

    void SpawnArrows(GameObject _)
    {
        float offset = 0.1f;

        for (int i = -1; i < 2; i++)
        {
            for (int j = -1; j < 2; j++)
            {
                var arrow = GameObject.Instantiate(arrowPrefab);
                arrow.transform.position = spawnArrowsPoint.position + (new Vector3(i, 0, j) * offset);
                arrow.transform.rotation = Quaternion.Euler((i + 2) * -3, 0, 0);
            }
        }
    }
}
