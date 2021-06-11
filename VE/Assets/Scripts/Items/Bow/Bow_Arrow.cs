using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bow_Arrow : MonoBehaviour
{
    /// <summary> List of indicators </summary>
    List<GameObject> indicators = new List<GameObject>();
    Transform parent;
    Vector3 posOffset;
    Vector3 rotOffset;

    float velocityReductor = .5f;
    float arrowsLength;

    AudioSource audioSource;
    public List<AudioClip> onFlightAudios;
    public AudioClip onHitAudio;

    void Start()
    {
        // Get arrow's length
        arrowsLength = 2 * this.transform.GetChild(0).transform.position.y;

        // If arrow is grabbed, remove object it was attached to, as parent
        // Note that this isn't transform.parent (attaching rescaled object as transform.parent was generating issuees)
        GetComponent<Grabbable>().onGrab += ((_) => { parent = null; });
        audioSource = GetComponent<AudioSource>();
    }

    void Update()
    {
        // Update position based on parent's position
        if (parent != null)
        {
            transform.position = parent.transform.position + posOffset;
            transform.rotation = Quaternion.Euler(parent.transform.rotation.eulerAngles + rotOffset);
        }
    }

    public void OnGrab(Grabber _)
    {
        // Note that this isn't transform.parent (attaching rescaled object as transform.parent was generating issuees)
        parent = null;
    }

    /// <summary> Releases arrow and makes it fly </summary>
    /// <param name="velocity"> Initial velocity of the arrow </param>
    public void ReleaseArrow(float velocity)
    {
        ClearPath();
        StartCoroutine(MakeArrowFly(velocity));
        Utils.PlayRandomSound(audioSource, onFlightAudios);
    }

    /// <summary> Creates marker path that indicates flight path if arrow were to be relased this instant </summary>
    /// <param name="velocity"> Initial velocity of the arrow </param>
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

    /// <summary> Clears flight path markers </summary>
    public void ClearPath()
    {
        foreach (var go in indicators)
            Destroy(go);
    }

    /// <summary> Moves arrow with given speed </summary>
    /// <param name="velocity"> Initial velocity of the arrow </param>
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
                this.transform.position = hit.point - ((newPos - lastPos).normalized * arrowsLength * .3f);
                Utils.StopSound(audioSource);
                Utils.PlaySound(audioSource, onHitAudio);
                
                if (hit.collider.CompareTag("Target"))
                {
                    SetParent(hit.collider.transform);
                    hit.collider.GetComponent<ShootingTarget>().AnalyzeHit(hit.point);
                }
                else if (hit.collider.CompareTag("Movable Terrain"))
                {
                    SetParent(hit.collider.transform);
                }

                yield break;
            }

            this.transform.position = newPos;

            lastPos = newPos;
            yield return null;
        }
    }

    void SetParent(Transform parent)
    {
        this.parent = parent;
        posOffset = this.transform.position - parent.transform.position;
        rotOffset = this.transform.rotation.eulerAngles - parent.transform.rotation.eulerAngles;
    }

    Vector3 CalculatePosition(Vector3 prevPos, float deltaTime, float velocity)
    {
        return prevPos + (this.transform.up.normalized * velocity * velocityReductor * deltaTime) + Physics.gravity * .1f * deltaTime * deltaTime;
    }
}
