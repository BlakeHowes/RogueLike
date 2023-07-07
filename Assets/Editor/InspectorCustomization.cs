using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.Presets;
using UnityEngine;
[CustomEditor(typeof(CCOptions))]
public class InspectorCustomization : Editor
{
    public override void OnInspectorGUI() {
        DrawDefaultInspector();
        CCOptions options = (CCOptions)target;
        if(GUILayout.Button("Create Sprite")) {
            var sprite = CharacterSpriteGenerator.CreateCharacterIconTexture(options, options.gameObject.GetComponent<Inventory>());
            if (!sprite) { return; }

            var path = CharacterSpriteGenerator.SaveTextureToFolder(sprite.texture,options.gameObject.name);
            Sprite loadedSprite = Resources.Load<Sprite>(path);
            Debug.Log("Created sprite " + loadedSprite + " at " + path);
            options.gameObject.GetComponent<SpriteRenderer>().sprite = loadedSprite;

            var preset = Resources.Load<Preset>("GameObjects/Character Sprites/Character");
            var spriteImporter = AssetImporter.GetAtPath("Assets/Resources/"+path + ".png");
            preset.ApplyTo(spriteImporter);
        }
    }
}