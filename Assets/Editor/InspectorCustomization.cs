using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.Presets;
using UnityEngine;
[CustomEditor(typeof(CCOptions))]
public class InspectorCustomization : Editor
{
    private Preset preset;
    public override void OnInspectorGUI() {
        DrawDefaultInspector();
        CCOptions options = (CCOptions)target;
        if(GUILayout.Button("Save Character To File")) {
            var sprite = CharacterSpriteGenerator.CreateCharacterIconTexture(options, options.gameObject.GetComponent<Inventory>());
            if (!sprite) { return; }
            CharacterSpriteGenerator.SaveTextureToFolder(sprite.texture);

        }
    }
}
