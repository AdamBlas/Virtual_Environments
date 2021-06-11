using MLAPI;
using MLAPI.SceneManagement;
using MLAPI.Transports.UNET;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ConnectionManager : MonoBehaviour
{
    public NetworkManager networkManager;
    public UNetTransport uNetTransport;

    public TextMesh ipMesh;
    string ip = string.Empty;

    public Button hostButton;
    public Button connectButton;
    public GameObject numericKeyboard;


    public void Start()
    {
        hostButton.onPress += Host;
        connectButton.onPress += Connect;
        foreach (Button b in numericKeyboard.GetComponentsInChildren<Button>())
        {
            b.onPress += NumericPress;
        }
    }

    public void Host(GameObject _)
    {
        SceneManager.LoadScene("TestGround");
        networkManager.StartHost();
    }

    public void Connect(GameObject _)
    {
        string[] address = ip.Split(':');
        if (address.Length != 2)
        {
            ipMesh.text = "ERROR validating address: " + ip;
            return;
        }

        // Regex matches correct ip addresses
        Regex rx = new Regex(@"^((25[0-5]|(2[0-4]|1\d|[1-9]|)\d)(\.(?!$)|$)){4}$");
        var match = rx.Match(address[0]);
        if (!match.Success)
        {
            ipMesh.text = "ERROR validating ip: " + address[0];
            return;
        }

        // Regex matches correct connection ports
        rx = new Regex(@"^((6553[0-5])|(655[0-2][0-9])|(65[0-4][0-9]{2})|(6[0-4][0-9]{3})|([1-5][0-9]{4})|([0-5]{0,5})|([0-9]{1,4}))$");
        match = rx.Match(address[1]);
        if (!match.Success)
        {
            ipMesh.text = "ERROR validating port: " + address[1];
            return;
        }

        uNetTransport.ConnectAddress = address[0];
        uNetTransport.ConnectPort = int.Parse(address[1]);

        NetworkSceneManager.SwitchScene("TestGround");
        networkManager.StartClient();
    }

    public void NumericPress(GameObject button)
    {
        if (button.name.Equals("Backspace"))
        {
            if (ip.Length > 0)
                ip = ip.Substring(0, ip.Length - 1);
        }
        else
            ip += button.name;

        ipMesh.text = ip;
    }
}
