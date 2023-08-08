using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using static ItemStatic;

public class CloneSkill : ItemAbstract
{
    public SpawnGO spawnSubItem;
    public GameObject prefab;
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        if(signal != Signal.Attack) { return; }
        spawnSubItem.Gos.Clear();
        spawnSubItem.Gos.Add(prefab);
        var origionalGo = origin.GameObjectGo();
        ReplaceComponentValues<CCOptions>(origionalGo.GetComponent<CCOptions>(), prefab);
        ReplaceComponentValues<Inventory>(origionalGo.GetComponent<Inventory>(), prefab);
        
        var clone = spawnSubItem.Gos[0];

        spawnSubItem.Call(position, origin, signal, parentGO, this);
    }

    public override IEnumerator Action() {
        yield return null;
    }

    public override string Description() {
        return "";
    }

    public T ReplaceComponentValues<T>(T original, GameObject destination) where T : Component {
        System.Type type = original.GetType();
        Component copy = destination.GetComponent(type);
        System.Reflection.FieldInfo[] fields = type.GetFields();
        foreach (System.Reflection.FieldInfo field in fields) {
            field.SetValue(copy, field.GetValue(original));
        }
        return copy as T;
    }

    public T CopyComponent<T>(T original, GameObject destination) where T : Component {
        System.Type type = original.GetType();
        Component copy = destination.AddComponent(type);
        System.Reflection.FieldInfo[] fields = type.GetFields();
        foreach (System.Reflection.FieldInfo field in fields) {
            field.SetValue(copy, field.GetValue(original));
        }
        return copy as T;
    }
}
