using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public static class ItemImporter
{
    [MenuItem("Tools/Generate Items From Text")]
    public static void GenerateItems() {
        if(Selection.activeObject == null) { return; }
        string path = System.IO.Path.Combine(System.IO.Directory.GetCurrentDirectory(), AssetDatabase.GetAssetPath(Selection.activeObject));
    }
}
