using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

[CustomPropertyDrawer(typeof(SubItemOptions))]
public class InspectorWeaponCustom : PropertyDrawer {
    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
        EditorGUI.BeginProperty(position, label, property);

        SerializedProperty subItem = property.FindPropertyRelative("subItem");
        SerializedProperty after = property.FindPropertyRelative("after");
        Rect labelPosition = new Rect(position.x, position.y, position.width, position.height);
        position = EditorGUI.PrefixLabel(labelPosition,
            EditorGUIUtility.GetControlID(FocusType.Passive),
            new GUIContent(subItem.objectReferenceValue != null ? (subItem.objectReferenceValue as ItemAbstract).name : "Empty"));
        int indent = EditorGUI.indentLevel;
        EditorGUI.indentLevel = 0;
        float widthSize = position.width / 1.1f;
        Rect pos1 = new Rect(position.x, position.y, widthSize, position.height);
        Rect pos2 = new Rect(position.x + widthSize +1, position.y, widthSize, position.height);

        EditorGUI.PropertyField(pos1, subItem, GUIContent.none);
        EditorGUI.PropertyField(pos2, after, GUIContent.none);
        EditorGUI.indentLevel = indent;
        EditorGUI.EndProperty();
    }
}