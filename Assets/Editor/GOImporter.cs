using LlamAcademy.Spring.Runtime;
using Panda;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace Importers {
    public static class GOImporter {
        public static List<GameObject> goList = new List<GameObject>();
        [MenuItem("Tools/Generate GameObjects from Text")]

        public static void GenerateGos() {
            if (Selection.activeObject == null) { return; }
            string path = System.IO.Path.Combine(System.IO.Directory.GetCurrentDirectory(), AssetDatabase.GetAssetPath(Selection.activeObject));
            if (!path.ToLower().EndsWith("csv")) { Debug.LogError("Not CSV"); return; }

            List<Dictionary<string, object>> rawCSVData = CSVReader.Read(path);
            if (rawCSVData.Count <= 0) { Debug.LogError("No data in CSV"); return; }

            var goResources = Resources.LoadAll<GameObject>("GameObjects");
            foreach (GameObject go in goResources) { goList.Add(go); }
            Generate(rawCSVData);
            AssetDatabase.SaveAssets();
        }

        public static void UpdateGO(Dictionary<string, object> CSVData,GameObject go ) {

        }



        public static void Generate(List<Dictionary<string, object>> CSVData) {
            for (int i = 0; i < CSVData.Count; i++) {
                var itemData = CSVData[i];
                var name = itemData["Name"].ToString();
                var go = CheckForGoInList(name);
                if(go == null) { 
                    go = new GameObject();
                    go.AddComponent<Stats>();
                    go.AddComponent<Inventory>();
                    go.AddComponent<SpriteRenderer>();
                    go.AddComponent<SpringToTarget3D>();
                    go.AddComponent<HierarchyIcons.HierarchyIcon>();

                    var faction = itemData["Faction"].ToString();

                    if (faction == "Enemy") {AddAI(go,Manager.GetGlobalValues().defaultEnemyBehaviour);}
                    if (faction == "Passive") {AddAI(go, Manager.GetGlobalValues().defaultEPassiveBehaviour); }
                    if (faction == "Summon") { AddAI(go, Manager.GetGlobalValues().defaultSummonBehaviour); }
                }
            }
        }

        public static void AddAI(GameObject go, TextAsset script) {
            var panda = go.AddComponent<PandaBehaviour>();
            panda.scripts = new TextAsset[1];
            panda.scripts[0] = script;
            go.AddComponent<Behaviours>();
        }

        public static GameObject CheckForGoInList(string name) {
            foreach (var go in goList) {
                if (go.name == name) {
                    return go;
                }
            }
            return null;
        }
    }
}


