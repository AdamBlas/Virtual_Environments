using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static VRController;

public class DayTimeController : MonoBehaviour
{
    [SerializeField]
    Light directionalLight;

    [Header("Sun colors")]

    /// <summary> Sun color at in-game 6 AM </summary>
    [SerializeField]
    public Color sunDawnColor;

    /// <summary> Sun color at in-game 12 AM </summary>
    [SerializeField]
    public Color sunNoonColor;

    /// <summary> Sun color at in-game 6 PM </summary>
    [SerializeField]
    public Color sunDuskColor;

    /// <summary> "Sun" (Moon) color at in-game 0 AM </summary>
    [SerializeField]
    public Color sunNightColor;


    [Space]
    [Header("Skybox")]

    /// <summary> Skybox color at day </summary>
    [SerializeField]
    public Color skyboxDayColor;

    /// <summary> Skybox color at night </summary>
    [SerializeField]
    public Color skyboxNightColor;


    float prevAngle = 0;
    float currInGameTime = 12;

    void Start()
    {
        LeftHand.TouchpadPos.onMove += ManageTime;
        SetLightColor();
    }

    void ManageTime(Device d, Vector2 currPos)
    {
        float angle = (Vector2.SignedAngle(-LeftHand.TouchpadPos.startValue, currPos) - 180) * -1;
        float diff = angle - prevAngle;

        if (diff > 300)
        {
            diff -= 360;
        }
        else if (diff < -300)
        {
            diff += 360;
        }

        currInGameTime += diff / 50;
        currInGameTime %= 24;
        currInGameTime = Mathf.Abs(currInGameTime);

        prevAngle = angle;
        print("Hour: " + currInGameTime);
        SetLightColor();
    }

    void SetLightColor()
    {
        float intensity = Toolbox.Remap01(-Mathf.Abs(currInGameTime - 12) + 12, 0, 12);
        directionalLight.intensity = intensity * .9f + .1f;
        RenderSettings.ambientIntensity = intensity * .9f + .1f;


        if (currInGameTime < 4 || currInGameTime > 20)
        {
            // Night
            Camera.main.backgroundColor = skyboxNightColor;
            directionalLight.color = sunNightColor;
        }
        else if (currInGameTime < 8)
        {
            // Dawn
            float remap = Toolbox.Remap01(currInGameTime, 4, 8);
            Camera.main.backgroundColor = Color.Lerp(skyboxNightColor, skyboxDayColor, remap);

            if (currInGameTime < 6)
            {
                // Early dawn
                directionalLight.color = Color.Lerp(sunNightColor, sunDawnColor, remap / 2);
            }
            else
            {
                // Late dawn
                directionalLight.color = Color.Lerp(sunDawnColor, sunNoonColor, remap / 2 + .5f);
            }
        }
        else if (currInGameTime < 16)
        {
            // Day
            Camera.main.backgroundColor = skyboxDayColor;
            directionalLight.color = sunNoonColor;
        }
        else
        {
            // Dusk
            float remap = Toolbox.Remap01(currInGameTime, 16, 20);
            Camera.main.backgroundColor = Color.Lerp(skyboxDayColor, skyboxNightColor, remap);

            if (currInGameTime < 18)
            {
                // Early dusk
                directionalLight.color = Color.Lerp(sunNoonColor, sunDuskColor, remap / 2);
            }
            else
            {
                // Late dusk
                directionalLight.color = Color.Lerp(sunDuskColor, sunNightColor, remap / 2 + .5f);
            }
        }
    }
}
