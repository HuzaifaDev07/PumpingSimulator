using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using UnityEditor;
using UnityEngine;

//Debug Firebase Events : https://firebase.google.com/docs/analytics/debugview

public class KZMenuItems : Editor
{
#if UNITY_ANDROID && UNITY_EDITOR
    [MenuItem("KokoZone/Monetization/Firebase/Debug/Start", false, 2)]
    public static void Start()
    {
        //GUIUtility.systemCopyBuffer = $"/k echo adb shell setprop debug.firebase.analytics.app {Application.identifier}";
        //Process.Start("CMD.exe");

        string DebugCommand = $"/c adb shell setprop debug.firebase.analytics.app {Application.identifier}";

        Process process = new Process();
        ProcessStartInfo startInfo = new ProcessStartInfo
        {
            FileName = "cmd.exe",
            Arguments = @DebugCommand,
            WorkingDirectory = @"C:\Users\" + Environment.UserName
        };
        process.StartInfo = startInfo;
        process.Start();

        UnityEngine.Debug.Log("Please Wait... The prompt will close automatically");
    }

    [MenuItem("KokoZone/Monetization/Firebase/Debug/Stop", false, 2)]
    public static void Stop()
    {
        string DebugCommand = $"/c adb shell setprop debug.firebase.analytics.app .none.";

        Process process = new Process();
        ProcessStartInfo startInfo = new ProcessStartInfo
        {
            FileName = "cmd.exe",
            Arguments = @DebugCommand,
            WorkingDirectory = @"C:\Users\" + Environment.UserName
        };
        process.StartInfo = startInfo;
        process.Start();

        UnityEngine.Debug.Log("Please Wait... The prompt will close automatically");
    }

    [MenuItem("KokoZone/Monetization/Resolver/Fix", false, 3)]
    public static void DeleteJarFiles()
    {
        DeleteDependency("org.jetbrains.kotlinx.kotlinx-coroutines-android-1.4.3", ".jar");
        DeleteDependency("org.jetbrains.kotlinx.kotlinx-coroutines-core-1.7.1", ".jar");

        if (DependencyExists("org.jetbrains.kotlinx.kotlinx-coroutines-core-jvm-1.6.4", ".jar"))
            DeleteDependency("org.jetbrains.kotlinx.kotlinx-coroutines-core-jvm-1.7.1", ".jar");
    }

    static bool DependencyExists(string fileName, string fileExtension)
    {
        string filePath = Application.dataPath + "/Plugins/Android/" + fileName + fileExtension;
        return File.Exists(filePath);
    }

    static void DeleteDependency(string fileName, string fileExtension)
    {
        string filePath = Application.dataPath + "/Plugins/Android/" + fileName + fileExtension;

        if (File.Exists(filePath))
        {
            File.Delete(filePath);
            AssetDatabase.Refresh();
            UnityEngine.Debug.Log($"{fileName} deleted successfully...");
        }
    }

    [MenuItem("KokoZone/Monetization/DisableAds", false, 4)]
    public static void DisableAds()
    {
        if (!EditorUtility.DisplayDialog("Disable Ads", "Do you want to disable ads inside Editor?", "Keep Ads", "Remove Anyway"))
        {
            EditorUtility.DisplayDialog("Congratulations!", "Ads are removed!", "I hated it");
            AdConstants.SwitchToDebugMode();
        }
        else
        {
            PlayerPrefs.SetInt("RemoveAds", 0);
            EditorUtility.DisplayDialog("Congratulations!", "Ads are enabled!", "I loved it");
        }

    }
    #region Version
    //[MenuItem("KokoZone/Monetization/v2.1.1", false, 5)]
    //public static void Version() { }

    //[MenuItem("KokoZone/Monetization/v2.1.1", true, 5)]
    //public static bool VersionValidation() { return false; }
    #endregion

    #region GA Symbols

    //[MenuItem("KokoZone/Monetization/GameAnalytics/AddSymbols", false, 2)]
    //static void Add_GA_Symbols()
    //{
    //    UpdateDefines("gameanalytics_admob_enabled", true, new BuildTargetGroup[] { BuildTargetGroup.iOS, BuildTargetGroup.Android });
    //    UpdateDefines("gameanalytics_max_enabled", true, new BuildTargetGroup[] { BuildTargetGroup.iOS, BuildTargetGroup.Android });
    //}

    //private static void UpdateDefines(string entry, bool enabled, BuildTargetGroup[] groups)
    //{
    //    foreach (var group in groups)
    //    {
    //        var defines = new List<string>(PlayerSettings.GetScriptingDefineSymbolsForGroup(group).Split(new[] { ';' }, StringSplitOptions.RemoveEmptyEntries));
    //        var edited = false;
    //        if (enabled && !defines.Contains(entry))
    //        {
    //            defines.Add(entry);
    //            edited = true;
    //        }
    //        else if (!enabled && defines.Contains(entry))
    //        {
    //            defines.Remove(entry);
    //            edited = true;
    //        }
    //        if (edited)
    //        {
    //            PlayerSettings.SetScriptingDefineSymbolsForGroup(group, string.Join(";", defines.ToArray()));
    //        }
    //    }
    //}

    //[MenuItem("KokoZone/GameAnalytics/AddSymbols")]
    //public static void AddSymbols()
    //{
    //    UpdateDefines("gameanalytics_admob_enabled", true, new BuildTargetGroup[] { BuildTargetGroup.iOS, BuildTargetGroup.Android });
    //    UpdateDefines("gameanalytics_max_enabled", true, new BuildTargetGroup[] { BuildTargetGroup.iOS, BuildTargetGroup.Android });
    //}

    //static void UpdateDefines(string entry, bool enabled, BuildTargetGroup[] groups)
    //{
    //    foreach (var group in groups)
    //    {
    //        var defines = new List<string>(PlayerSettings.GetScriptingDefineSymbolsForGroup(group).Split(new[] { ';' }, StringSplitOptions.RemoveEmptyEntries));
    //        var edited = false;
    //        if (enabled && !defines.Contains(entry))
    //        {
    //            defines.Add(entry);
    //            edited = true;
    //        }
    //        else if (!enabled && defines.Contains(entry))
    //        {
    //            defines.Remove(entry);
    //            edited = true;
    //        }
    //        if (edited)
    //        {
    //            PlayerSettings.SetScriptingDefineSymbolsForGroup(group, string.Join(";", defines.ToArray()));
    //        }
    //    }
    //}
    #endregion

#endif
}