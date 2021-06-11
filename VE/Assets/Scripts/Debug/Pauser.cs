using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pauser : MonoBehaviour
{
#if UNITY_EDITOR
    void Start()
    {
        PlayersManager.LeftHand.Button.onDown += _ => Debug.Break();
    }
#endif
}
