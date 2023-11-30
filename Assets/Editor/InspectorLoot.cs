using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
/*
[CustomPropertyDrawer(typeof(LootPool))]
public class InspectorLoot : PropertyDrawer {
    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
        EditorGUI.BeginProperty(position, label, property);

        SerializedProperty items = property.FindPropertyRelative("items");
        label.text = "Floor " + label.text;
        label.text = label.text.Replace("Element ","");
        Rect pos = new Rect(position.x - 10, position.y, position.width + 12, position.height);
        EditorGUI.PropertyField(pos, items, label);
        EditorGUI.EndProperty();
    }

    public override float GetPropertyHeight(SerializedProperty property, GUIContent label) {
        SerializedProperty predicate = property.FindPropertyRelative("items");
        float propHeight = EditorGUI.GetPropertyHeight(predicate);
        return propHeight;
    }
}
*/