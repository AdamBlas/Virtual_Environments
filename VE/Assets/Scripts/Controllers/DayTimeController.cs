using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DayTimeController : MonoBehaviour
{
    [SerializeField]
    Light directionalLight;

    [Header("Sun colors")]

    /// <summary> Sun color at in-game 6 AM </summary>
    [SerializeField]
    private Color sunDawnColor;

    /// <summary> Sun color at in-game 12 AM </summary>
    [SerializeField]
    private Color sunNoonColor;

    /// <summary> Sun color at in-game 6 PM </summary>
    [SerializeField]
    private Color sunDuskColor;

    /// <summary> "Sun" (Moon) color at in-game 0 AM </summary>
    [SerializeField]
    private Color sunNightColor;


    [Space]
    [Header("Skybox")]

    /// <summary> Skybox color at day </summary>
    [SerializeField]
    private Color skyboxDayColor;

    /// <summary> Skybox color at night </summary>
    [SerializeField]
    private Color skyboxNightColor;

    Color currBackgroundColor;
    float currInGameTime = 19;

    void Start()
    {
        //PlayersManager.LeftHand.TouchpadPos.onMove += ManageTime;
        SetLightColor();
    }

    void ManageTime(VRDevice d, Vector2 vStart, Vector2 vPrev, Vector2 vCurr)
    {
        float angle = (Vector2.SignedAngle(-vPrev, vCurr) - 180) * -1;

        if (angle > 300)
        {
            angle -= 360;
        }
        else if (angle < -300)
        {
            angle += 360;
        }

        currInGameTime += angle / 50;
        currInGameTime += 24;
        currInGameTime %= 24;

        //print("Hour: " + currInGameTime);
        SetLightColor();
    }

    void SetLightColor()
    {
        float intensity;

        if (currInGameTime < 4 || currInGameTime > 20)
        {
            // Night
            currBackgroundColor = skyboxNightColor;
            directionalLight.color = sunNightColor;
            intensity = 0;
        }
        else if (currInGameTime < 8)
        {
            // Dawn
            float remap = Utils.Remap01(currInGameTime, 4, 8);
            currBackgroundColor = Color.Lerp(skyboxNightColor, skyboxDayColor, remap);
            intensity = remap;

            if (currInGameTime < 6)
            {
                // Early dawn
                directionalLight.color = Color.Lerp(sunNightColor, sunDawnColor, remap * 2);
            }
            else
            {
                // Late dawn
                directionalLight.color = Color.Lerp(sunDawnColor, sunNoonColor, (remap - .5f) * 2);
            }
        }
        else if (currInGameTime < 16)
        {
            // Day
            currBackgroundColor = skyboxDayColor;
            directionalLight.color = sunNoonColor;
            intensity = 1;
        }
        else
        {
            // Dusk
            float remap = Utils.Remap01(currInGameTime, 16, 20);
            currBackgroundColor = Color.Lerp(skyboxDayColor, skyboxNightColor, remap);
            intensity = -remap + 1;

            if (currInGameTime < 18)
            {
                // Early dusk
                directionalLight.color = Color.Lerp(sunNoonColor, sunDuskColor, remap * 2);
            }
            else
            {
                // Late dusk
                directionalLight.color = Color.Lerp(sunDuskColor, sunNightColor, (remap - .5f) * 2);
            }
        }

        intensity = intensity * .9f + .1f;
        directionalLight.intensity = intensity;
        RenderSettings.ambientIntensity = intensity;

        foreach (var p in PlayersManager.playersList)
        {
            p.Camera.backgroundColor = currBackgroundColor;
        }
    }
}
