using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bow_ReleasedArrow : MonoBehaviour
{
    /// <summary> List of indicators </summary>
    List<GameObject> indicators = new List<GameObject>();

    float velocityReductor = .2f;
    float arrowsLength;

    void Start()
    {
        arrowsLength = 2 * this.transform.GetChild(0).transform.position.y;
    }

    public void ReleaseArrow(float velocity)
    {
        ClearPath();
        StartCoroutine(MakeArrowFly(velocity));
    }
    public void MarkPath(float velocity)
    {
        ClearPath();

        for (int i = 0; i < 30; i++)
        {
            float time = Time.deltaTime * i;

            GameObject p = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            p.transform.position = CalculatePosition(this.transform.position, time, velocity);
            p.transform.localScale = new Vector3(.05f, .05f, .05f);
            p.GetComponent<Renderer>().material.color = Color.red;

            indicators.Add(p);
        }
    }
    public void ClearPath()
    {
        foreach (var go in indicators)
            Destroy(go);
    }
    IEnumerator MakeArrowFly(float velocity)
    {
        int i = 0;

        Vector3 lastPos = this.transform.position;

        while (true)
        {
            if (i == 500)
            {
                Destroy(this.gameObject);
                StopAllCoroutines();
                yield break;
            }    
            i++;

            Vector3 newPos = CalculatePosition(lastPos, Time.deltaTime, velocity); ;

            this.transform.LookAt(newPos);
            this.transform.Rotate(new Vector3(90, 0, 0), Space.Self);

            float distance = Mathf.Max(Vector3.Distance(lastPos, newPos), arrowsLength);
            if (Physics.Raycast(origin: lastPos, direction: (newPos - lastPos), maxDistance: distance, layerMask: LayerMask.GetMask("Terrain"), hitInfo: out RaycastHit hit))
            {
                this.transform.position = hit.point - ((newPos - lastPos).normalized * arrowsLength * .5f);
                yield break;
            }

            this.transform.position = newPos;

            lastPos = newPos;
            yield return null;
        }
    }

    Vector3 CalculatePosition(Vector3 prevPos, float deltaTime, float velocity)
    {
        return prevPos + (this.transform.up.normalized * velocity * velocityReductor * deltaTime) + Physics.gravity * .1f * deltaTime * deltaTime;
    }
}
