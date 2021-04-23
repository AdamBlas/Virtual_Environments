using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootingTarget : MonoBehaviour
{
    [SerializeField]
    public GameObject pointZero;

    public void AnalyzeHit(Vector3 hitPoint)
    {
        float d = Vector3.Distance(pointZero.transform.position, hitPoint);
        int score = Mathf.RoundToInt((1 - d * 2) * 100);
        print("Score: " + score);
    }

}
