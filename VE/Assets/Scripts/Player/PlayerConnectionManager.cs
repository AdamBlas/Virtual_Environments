using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System.IO;

public class PlayerConnectionManager : MonoBehaviour
{
    public PlayerInstance playerPrefab;
    PhotonView pv;

    private void Awake()
    {
        pv = GetComponent<PhotonView>();
    }

    private void Start()
    {
        if (pv.IsMine)
        {
            CreatePlayer();
        }
    }

    void CreatePlayer()
    {
        PlayerInstance newPlayer = PhotonNetwork.Instantiate(Path.Combine("Prefabs", "PlayerPrefab"), Vector3.zero, Quaternion.identity).GetComponent<PlayerInstance>();
        newPlayer.pv = pv;
    }

}
