using LlamAcademy.Spring.Runtime;
using Panda;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Tilemaps;
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
            var name = CSVData["Name"].ToString();
            go.tag = CSVData["Faction"].ToString();
            var sprite = Resources.Load<Sprite>($"GameObjects/2 Sprites/{name}");
            if (!sprite) { Debug.LogError("Cant Find Sprite for " + name + $"Items/Sprites/{name}.png");return; }
            go.GetComponent<SpriteRenderer>().sprite = sprite;
            go.GetComponent<HierarchyIcons.HierarchyIcon>().icon = sprite.texture;
            var stats = go.GetComponent<Stats>();
            stats.tile = GetTile(name,sprite);
            stats.maxHealthBase = int.Parse(CSVData["Health"].ToString());
            stats.health = int.Parse(CSVData["Health"].ToString());
            if(bool.Parse(CSVData["Infinite Health"].ToString())) { stats.infiniteHealth = true; }
            stats.maxArmourBase = int.Parse(CSVData["Armour"].ToString());
            stats.actionPointsBase = int.Parse(CSVData["AP"].ToString());
        }

        public static Tile GetTile(string name,Sprite sprite) {
            var tile = Resources.Load<Tile>($"GameObjects/2 Sprites/{name}");
            if (!tile) {
                tile = ScriptableObject.CreateInstance<Tile>();
                tile.sprite = sprite;
                AssetDatabase.CreateAsset(tile, $"Assets/Resources/GameObjects/2 Sprites/{name}.asset");
                return tile;
            }
            tile.sprite = sprite;
            EditorUtility.SetDirty(tile);
            return tile;
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
                UpdateGO(itemData, go);
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


