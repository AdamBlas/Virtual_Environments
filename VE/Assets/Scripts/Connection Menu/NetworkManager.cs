using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;

public class NetworkManager : MonoBehaviourPunCallbacks
{

    public Button hostButton;
    public Button connectButton;

    string gameVersion = "1.0.0";

    #region CLASS METHODS

    public void Host(GameObject _)
    {
        print("Creating room...");
        PhotonNetwork.JoinLobby();
    }
    public void Connect(GameObject _)
    {
        print("Joining to room...");
        PhotonNetwork.JoinRoom("Room");
    }

    #endregion

    #region UNITY CALLBACKS

    void Start()
    {
        hostButton.onPress += Host;
        connectButton.onPress += Connect;

        PhotonNetwork.AutomaticallySyncScene = true;
        PhotonNetwork.ConnectUsingSettings();
        PhotonNetwork.GameVersion = gameVersion;

        print("Connecting to PUN server...");
    }

    #endregion

    #region PHOTON CALLBACKS

    public override void OnConnectedToMaster()
    {
        print("Succesfullt connected to PUN server.");
    }
    public override void OnJoinedLobby()
    {
        PhotonNetwork.CreateRoom("Room");
    }
    public override void OnJoinedRoom()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            print("Created room successfully.");
            PhotonNetwork.LoadLevel(1);
        }
        else
        {
            print("Joined room successfully.");
        }
    }
    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        print("Failed to create room. Reason: " + message);
    }
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        print("Player joined the room.");
    }

    #endregion
}
