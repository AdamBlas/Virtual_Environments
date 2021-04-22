using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VR_Console : MonoBehaviour
{
    Text console;
    List<string> logs;

    // Start is called before the first frame update
    void Start()
    {
        Application.logMessageReceived += LogCallback;
        console = GetComponent<Text>();
        logs = new List<string>();
        console.text = string.Empty;
    }

    void LogCallback(string condition, string stackTrace, LogType type)
    {
        string log = type.ToString() + ": " + condition + "\n";
        logs.Add(log);
        if (logs.Count == 9)
            logs.RemoveAt(0);

        console.text = string.Empty;
        foreach (var s in logs)
            console.text += s;
    }
}
