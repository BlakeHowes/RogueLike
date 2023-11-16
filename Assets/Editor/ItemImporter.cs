using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.Tilemaps;

namespace Importers { 
public static class ItemImporter {
    public static List<ItemAbstract> items = new List<ItemAbstract>();
    [MenuItem("Tools/Generate Items From Text")]
    public static void GenerateItems() {
        if (Selection.activeObject == null) { return; }
        string path = System.IO.Path.Combine(System.IO.Directory.GetCurrentDirectory(), AssetDatabase.GetAssetPath(Selection.activeObject));
        if (!path.ToLower().EndsWith("csv")) { Debug.LogError("Not CSV"); return; }

        List<Dictionary<string, object>> rawCSVData = CSVReader.Read(path);
        if (rawCSVData.Count <= 0) { Debug.LogError("No data in CSV"); return; }

        var itemResources = Resources.LoadAll<ItemAbstract>("Items");
        foreach (ItemAbstract item in itemResources) { items.Add(item); }

        Generate(rawCSVData);
    }

    private static void Generate(List<Dictionary<string, object>> CSVData) {
        for (int i = 0; i < CSVData.Count; i++) {
            var itemData = CSVData[i];
            var type = itemData["Type"].ToString();

            //Weapon
            if (type == "melee" || type == "ranged" || type == "magic") {
                    UpdateOrCreateWeapon(itemData);continue;
            }

            //General Item
            if(type == "general") {
                    UpdateOrCreateGeneralItem(itemData);continue;
            }

            //Equipment
            UpdateOrCreateEquipment(itemData);
        }
        AssetDatabase.SaveAssets();
    }

    public static Weapon UpdateWeaponValues(Dictionary<string, object> itemData, Weapon weapon) {
        weapon.name = itemData["Name"].ToString();
        weapon.weaponType = (ItemStatic.WeaponType)System.Enum.Parse(typeof(ItemStatic.WeaponType), itemData["Type"].ToString());
        weapon.damageRange.x = int.Parse(itemData["Damage Min"].ToString());
        weapon.damageRange.y = int.Parse(itemData["Damage Max"].ToString());
        weapon.accuracyBase = int.Parse(itemData["Accuracy"].ToString());
        weapon.rangeBase = int.Parse(itemData["Range"].ToString());
        weapon.twoHanded = bool.Parse(itemData["Two Handed"].ToString());
        weapon.shopValue = int.Parse(itemData["Value"].ToString());

        weapon.tile = GetTile(weapon.name);
        return weapon;
    }

    public static Equipment UpdateEquipmentValues(Dictionary<string, object> itemData, Equipment equipment) {
        equipment.name = itemData["Name"].ToString();
        equipment.equipmentType = (ItemStatic.EquipmentType)System.Enum.Parse(typeof(ItemStatic.EquipmentType), itemData["Type"].ToString());
        equipment.weight = (ItemStatic.Weight)System.Enum.Parse(typeof(ItemStatic.Weight), itemData["Weight"].ToString());
        equipment.shopValue = int.Parse(itemData["Value"].ToString());

        equipment.tile = GetTile(equipment.name);
        return equipment;
    }

        public static GeneralItem UpdateGeneralItemValues(Dictionary<string, object> itemData, GeneralItem item) {
            item.name = itemData["Name"].ToString();
           
            item.endlessUses = bool.Parse(itemData["Endless Uses"].ToString());
            if (!item.endlessUses) { item.totalUses = int.Parse(itemData["Total Uses"].ToString()); }
            Debug.Log(itemData["Value"].ToString());
            item.shopValue = int.Parse(itemData["Value"].ToString());
            item.description = itemData["Description"].ToString();
            item.tile = GetTile(item.name);
            return item;
        }

        public static Tile GetTile(string name) {
        var sprite = Resources.Load<Sprite>($"Items/Sprites/{name}");
        var tile = Resources.Load<Tile>($"Items/Sprites/{name}");
        if (!sprite) { Debug.LogError("Cant Find Sprite for " + name + $"Items/Sprites/{name}.png"); return null; }
        if (!tile) {
            tile = ScriptableObject.CreateInstance<Tile>();
            tile.sprite = sprite;
            AssetDatabase.CreateAsset(tile, $"Assets/Resources/Items/Sprites/{name}.asset");
            return tile;
        }
        tile.sprite = sprite;
        EditorUtility.SetDirty(tile);
        return tile;
        }

        private static void UpdateOrCreateWeapon(Dictionary<string, object> itemData) {
            var name = itemData["Name"].ToString();
            if (name == "") { return; }
            foreach (var item in items) {
                if (item.name == name) {
                    UpdateWeaponValues(itemData, item as Weapon);
                    EditorUtility.SetDirty(item);
                    return;
                }
            }
            var newWeapon = ScriptableObject.CreateInstance<Weapon>();

            UpdateWeaponValues(itemData, newWeapon);
            AssetDatabase.CreateAsset(newWeapon, $"Assets/Resources/Items/{newWeapon.name}.asset");
        }

        private static void UpdateOrCreateGeneralItem(Dictionary<string, object> itemData) {
            var name = itemData["Name"].ToString();
            if (name == "") { return; }
            foreach (var item in items) {
                if (item.name == name) {
                    UpdateGeneralItemValues(itemData, item as GeneralItem);
                    EditorUtility.SetDirty(item);
                    return;
                }
            }
            var newGeneralItem = ScriptableObject.CreateInstance<GeneralItem>();

            UpdateGeneralItemValues(itemData, newGeneralItem);
            AssetDatabase.CreateAsset(newGeneralItem, $"Assets/Resources/Items/{newGeneralItem.name}.asset");
        }


        private static void UpdateOrCreateEquipment(Dictionary<string, object> itemData) {
            var name = itemData["Name"].ToString();
            if (name == "") { return; }
            foreach (var item in items) {
                if (item.name == name) {
                    UpdateEquipmentValues(itemData, item as Equipment);
                    EditorUtility.SetDirty(item);
                    return;
                }
            }
            var newEquipment = ScriptableObject.CreateInstance<Equipment>();

            UpdateEquipmentValues(itemData, newEquipment);
            AssetDatabase.CreateAsset(newEquipment, $"Assets/Resources/Items/{newEquipment.name}.asset");
        }
    }
}
