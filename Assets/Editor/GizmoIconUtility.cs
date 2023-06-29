using UnityEditor;
using UnityEngine;
using System.Collections.Generic;
using UnityEditor.Callbacks;
using UnityEngine.UIElements;
using static UnityEditor.Progress;
using UnityEditor.Sprites;
using System;

namespace FolderIcons {
    public class GizmoIconUtility {

        [DidReloadScripts]
        static GizmoIconUtility() {
            EditorApplication.projectWindowItemOnGUI += ItemOnGUI;
            EditorApplication.projectWindowItemOnGUI += RaceOnGUI;
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

        static void ItemOnGUI(string guid, Rect rect) {
            string assetPath = AssetDatabase.GUIDToAssetPath(guid);
            ItemAbstract item = AssetDatabase.LoadAssetAtPath(assetPath, typeof(ItemAbstract)) as ItemAbstract;
            if (item != null && item is ItemAbstract) {
                if (!item.tile) { return; }
                if (!item.tile.sprite) { return; }
                if (!item.tile.sprite.texture) { return; }
                var texture = SpriteUtility.GetSpriteTexture(item.tile.sprite, false);
                Rect rbase = rect;
                if (rbase.height >= rbase.width) {
                    rbase.height -= 14; }
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