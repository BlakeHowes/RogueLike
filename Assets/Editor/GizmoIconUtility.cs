using UnityEditor;
using UnityEngine;
using UnityEditor.Callbacks;
using Unity.VisualScripting;

namespace FolderIcons {
    public class GizmoIconUtility {

        [DidReloadScripts]
        static GizmoIconUtility() {
            EditorApplication.projectWindowItemOnGUI += ItemOnGUI;
            EditorApplication.projectWindowItemOnGUI += RaceOnGUI;
            EditorApplication.projectWindowItemOnGUI += SurfaceOnGUI;
        }

        static void RaceOnGUI(string guid, Rect rect) {
            string assetPath = AssetDatabase.GUIDToAssetPath(guid);
            CCRace race = AssetDatabase.LoadAssetAtPath(assetPath, typeof(CCRace)) as CCRace;
            if (race != null && race is CCRace) {
                if(race.bodyPalettes.Count <= 0) { return; }
                var colour = race.bodyPalettes[0].lightColour;
                Rect rbase = rect;
                if (rbase.height >= rbase.width) {
                    rbase.height -= 14; }
                else { rbase.width = 20; }

                DrawGUIRoundedBasicColour(rbase, colour);
            }
        }

        public static Texture2D CropTexture(Texture2D texture,Sprite sprite) {
            if (sprite.rect.size == texture.Size()) { return sprite.texture; }
            var rect = sprite.textureRect;
            Color[] colours = texture.GetPixels(Mathf.FloorToInt(rect.xMin), Mathf.FloorToInt(rect.yMin), Mathf.FloorToInt(rect.size.x), Mathf.FloorToInt(rect.size.y));
            Texture2D croppedTexture = new Texture2D(Mathf.FloorToInt(rect.size.x), Mathf.FloorToInt(rect.size.y));
            croppedTexture.filterMode = FilterMode.Point;
            croppedTexture.SetPixels(colours);
            croppedTexture.Apply();
            return croppedTexture;
        }

        static void ItemOnGUI(string guid, Rect rect) {
            string assetPath = AssetDatabase.GUIDToAssetPath(guid);
            ItemAbstract item = AssetDatabase.LoadAssetAtPath(assetPath, typeof(ItemAbstract)) as ItemAbstract;
            if (item != null && item is ItemAbstract) {
                if (!item.tile) { return; }
                if (!item.tile.sprite) { return; }
                if (!item.tile.sprite.texture) { return; }
                var texture = CropTexture(item.tile.sprite.texture, item.tile.sprite);
                //var texture = item.tile.sprite.texture;
                Rect rbase = rect;
                if (rbase.height >= rbase.width) {
                    rbase.height -= 14; }
                else { rbase.width = 20; }

                DrawGUIRoundedBasicTexture(rbase, texture);
            }
        }

        static void SurfaceOnGUI(string guid, Rect rect) {
            string assetPath = AssetDatabase.GUIDToAssetPath(guid);
            Surface item = AssetDatabase.LoadAssetAtPath(assetPath, typeof(Surface)) as Surface;
            if (item != null && item is Surface) {
                var texture = MakeTinyTex(item.iconColour);
                Rect rbase = rect;
                if (rbase.height >= rbase.width) {
                    rbase.height -= 14;
                }
                else { rbase.width = 20; }

                DrawGUIRoundedBasicTexture(rbase, texture);
            }
        }

        static void DrawGUIRoundedBasicTexture(Rect _pos, Texture2D texture) {
            var colourFloat = 0.45f;
            Color colour = new Color(colourFloat, colourFloat, colourFloat);
            GUI.DrawTexture(_pos, MakeTinyTex(colour), ScaleMode.ScaleToFit, true, 1, colour, 0, _pos.width * 0.2f);
            GUI.DrawTexture(_pos, texture, ScaleMode.ScaleToFit, true, 1, Color.white, 0, _pos.width * 0.2f);
        }

        static void DrawGUIRoundedBasicColour(Rect _pos, Color colour) {
            GUI.DrawTexture(_pos, MakeTinyTex(colour), ScaleMode.ScaleToFit, true, 1, colour, 0, _pos.width * 0.2f);
        }


        static Texture2D _tex;
        static Texture2D MakeTinyTex(Color _col) {
            _tex = new Texture2D(1, 1);
            _tex.SetPixel(0, 0, _col);
            _tex.Apply();
            return _tex;
        }


    }
}
