using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PackAI : MonoBehaviour
{
    // Singleton
    public static PackAI instance;
    private void Awake()
    {
        instance = this;
    }

    List<Animator> pack = new List<Animator>();
    GameObject player;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
