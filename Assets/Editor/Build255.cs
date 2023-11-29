using UnityEditor;
using UnityEngine;
using UnityEditor.Build.Reporting;
using System.IO;

public class Build255 : MonoBehaviour
{
    [MenuItem("Build/Build %b")]
    public static void MyBuild()
    {
        BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
        //** Custom Open Window Panel to Get locationPath and productName
        //BuildPlayerWindow.DefaultBuildMethods.GetBuildPlayerOptions(buildPlayerOptions);

        string path = Path.Join(buildPlayerOptions.locationPathName, Application.productName);
        if (File.Exists(path + "_BurstDebugInformation_DoNotShip"))
            File.Delete(path + "_BurstDebugInformation_DoNotShip");
        if (File.Exists(path+".apk"))
            File.Delete(path+".apk");

        buildPlayerOptions.locationPathName = path+".apk";
        //** Custom BuildTarget (Android, ios, Windows, Linux ,... )
        buildPlayerOptions.target = BuildTarget.Android;
        buildPlayerOptions.options = BuildOptions.None;
        buildPlayerOptions.options = BuildOptions.AutoRunPlayer;
        BuildReport report = BuildPipeline.BuildPlayer(buildPlayerOptions);
        BuildSummary summary = report.summary;

        if (summary.result == BuildResult.Succeeded)
            Debug.Log("Build succeeded: " + summary.totalSize + " bytes");

        if (summary.result == BuildResult.Failed)
            Debug.Log("Build failed");
    }
}