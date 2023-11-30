using System.Reflection;
using UnityEditor.Tilemaps;
using UnityEngine;
using UnityEditor;

[CustomGridBrush(true, true, true, "Default Brush")]
public class PaletteBrush : GridBrush {

    public override void Pick(GridLayout gridLayout, GameObject brushTarget, BoundsInt position, Vector3Int pickStart) {
        base.Pick(gridLayout, brushTarget, position, pickStart);
        var activeTilemap = Selection.activeObject;
        var paletteName = GetPaletteName();
        var activeTilmapName = "";
        if (activeTilemap) { activeTilmapName = activeTilemap.name; }
        if (activeTilmapName != paletteName) {
            var tilemap = GameObject.Find(paletteName);
            if (tilemap) { Selection.activeObject = tilemap; }
        }
    }

    public string GetPaletteName() {
        var windowType = Assembly.Load("Unity.2D.Tilemap.Editor").GetType("UnityEditor.Tilemaps.GridPaintPaletteWindow");
        var paletteWindow = EditorWindow.GetWindow(windowType, false, "Tile Palette", false);
        PropertyInfo scenePaintTargetProperty = windowType.GetProperty("palette",BindingFlags.Instance | BindingFlags.Public);
        var palette = (GameObject)scenePaintTargetProperty.GetValue(paletteWindow);
        return palette.name;
    }
}

//This is required for previewing and undoing
[CustomEditor(typeof(PaletteBrush))]
public class PaletteBrushEditor : GridBrushEditor {

}
