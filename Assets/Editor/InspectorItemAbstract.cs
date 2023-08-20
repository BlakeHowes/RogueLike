using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;
using static ItemStatic;
[CustomPropertyDrawer(typeof(Ability))]
public class InspectorItemAbstract : PropertyDrawer {
    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
        SerializedProperty signal = property.FindPropertyRelative("callType");

        EditorGUI.BeginProperty(position, label, property);
        SerializedProperty actionContainers = property.FindPropertyRelative("actionContainers");

        Rect pos1 = new Rect(position.x - 0.6f, position.y, position.width - 50, 20);
        Rect pos2 = new Rect(position.x, position.y, position.width, position.height);
        Rect pos3 = new Rect(position.x - 14, position.y, position.width + 18, 18);

        EditorGUI.PropertyField(pos1, signal, GUIContent.none);

        if (pos3.Contains(Event.current.mousePosition)) {
            label.text = "";
        }
        else {
            label.text = signal.enumNames[signal.enumValueFlag].ToString();
        }
        EditorGUI.PropertyField(pos2, actionContainers, label);
        EditorGUI.EndProperty();
    }

    public override float GetPropertyHeight(SerializedProperty property, GUIContent label) {
        SerializedProperty predicate = property.FindPropertyRelative("actionContainers");
        float propHeight = EditorGUI.GetPropertyHeight(predicate);
        return propHeight;
    }
}
[CustomPropertyDrawer(typeof(ActionContainer))]
public class InspectorActionIntPairCustom : PropertyDrawer {
    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
        EditorGUI.BeginProperty(position, label, property);

        SerializedProperty action = property.FindPropertyRelative("action");
        SerializedProperty extraVariable = null;
        SerializedProperty extraVariable2 = null;
        int indent = EditorGUI.indentLevel;
        EditorGUI.indentLevel = 0;
        float actionWidth = 1f;
        float extraWidth = 2;
        if (action.objectReferenceValue) {
            Action actionFound = action.objectReferenceValue as Action;
            if (actionFound.extraVariableType == ExtraVariableType.None) goto Draw;
            actionWidth = 20;
            switch (actionFound.extraVariableType) {
                case ExtraVariableType.Int: extraVariable = property.FindPropertyRelative("intValue"); actionWidth = 1.25f;extraWidth = 5; break;
                case ExtraVariableType.Float: extraVariable = property.FindPropertyRelative("floatValue"); actionWidth = 1.25f; extraWidth = 5; break;
                case ExtraVariableType.Item: extraVariable = property.FindPropertyRelative("itemValue"); actionWidth = 2; break;
                case ExtraVariableType.Prefab: extraVariable = property.FindPropertyRelative("prefabValue"); actionWidth = 2; break;
                case ExtraVariableType.Color: extraVariable = property.FindPropertyRelative("colorValue"); actionWidth = 1.25f; extraWidth = 5; break;
                case ExtraVariableType.Vector2: extraVariable = property.FindPropertyRelative("vector2IntValue"); actionWidth = 2; break;
                case ExtraVariableType.Surface: extraVariable = property.FindPropertyRelative("surfaceValue"); actionWidth = 1.25f; extraWidth = 5; break;
                case ExtraVariableType.Sprite: extraVariable = property.FindPropertyRelative("spriteValue"); actionWidth = 1.25f; extraWidth = 5; break;
                case ExtraVariableType.String: extraVariable = property.FindPropertyRelative("stringValue"); actionWidth = 2; break;
                case ExtraVariableType.SurfaceInt: extraVariable = property.FindPropertyRelative("surfaceValue"); actionWidth = 2; extraWidth = 4; 
                    extraVariable2 = property.FindPropertyRelative("intValue"); break;
            }
        }
        Draw:
        Rect pos1 = new Rect(position.x - 10, position.y, position.width/ actionWidth +12, position.height);
        Rect pos2 = new Rect(position.x + position.width/ actionWidth, position.y, position.width / extraWidth + 2, position.height);
        Rect pos3 = new Rect((position.x + position.width/ actionWidth)+ position.width / extraWidth + 2, position.y, position.width / extraWidth, position.height);

        EditorGUI.PropertyField(pos1, action, GUIContent.none);
        EditorGUI.indentLevel = indent;
        if (extraVariable != null) EditorGUI.PropertyField(pos2, extraVariable, GUIContent.none);
        if (extraVariable2 != null) EditorGUI.PropertyField(pos3, extraVariable2, GUIContent.none);


        EditorGUI.EndProperty();
    }

}