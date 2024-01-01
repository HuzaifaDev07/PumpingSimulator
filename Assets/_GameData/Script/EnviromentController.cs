using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[System.Serializable]
public class EnvironmentData
{
    [SerializeField] string Name;
    public bool HaveFog;
    public Skycolor skycolor;
    [System.Serializable]
    public struct Skycolor
    {
        public float R;
        public float G;
        public float B;
    }
    public EquatorColor equatorColor;
    [System.Serializable]
    public struct EquatorColor
    {
        public float R;
        public float G;
        public float B;
    }
    public GroundColor groundColor;
    [System.Serializable]
    public struct GroundColor
    {
        public float R;
        public float G;
        public float B;
    }
}

[CreateAssetMenu(fileName = "Environment_Data")]
public class EnviromentController : ScriptableObject
{
    public EnvironmentData[] environmentData;

    public void LoadEnvironmentPostData(int index)
    {
        RenderSettings.skybox.color = Color.HSVToRGB(environmentData[index].skycolor.R, environmentData[index].skycolor.G, environmentData[index].skycolor.B);
        RenderSettings.ambientEquatorColor = new Color(environmentData[index].equatorColor.R, environmentData[index].equatorColor.G, environmentData[index].equatorColor.B);
        RenderSettings.ambientGroundColor = new Color(environmentData[index].groundColor.R, environmentData[index].groundColor.G, environmentData[index].groundColor.B);

        if (environmentData[index].HaveFog)
        {
            RenderSettings.fog = true;
        }
        RenderSettings.ambientIntensity = 0;
    }
}
