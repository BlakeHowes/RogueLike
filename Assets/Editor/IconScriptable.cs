using UnityEngine;
using UnityEditor;
using System.Reflection;
[CustomEditor(typeof(ItemAbstract))]
class IconScriptable : Editor {
    
    public static ItemAbstract[] GetItems() {
        var items = Resources.LoadAll<ItemAbstract>("Items");
        return items;
    }

    [MenuItem("test/test")]
    public static void test() {

        var items = GetItems();
        Debug.Log("item length " + items.Length);
        if (!items[1]) { return; }
        var texture = items[1].tile.sprite.texture;
        EditorGUI.BeginChangeCheck();
        // Example has a single arg called PreviewIcon which is a Texture2D
        items[1].PreviewIcon = (Texture2D) EditorGUILayout.ObjectField( items[1].name, texture, typeof(Texture2D), false );

        if (EditorGUI.EndChangeCheck()) {
            EditorUtility.SetDirty(items[1]);
            AssetDatabase.SaveAssets();
            HandleUtility.Repaint();
        }
    }

}