using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

public class Taunt : ItemAbstract {
    [HideInInspector]public GameObject target;
    bool sayTaunt;
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        if (signal == Signal.SetTarget) {
            target = origin.GameObjectGo();
        }

        if (target == null) { return; }
        var character = position.GameObjectGo();
        if (signal == Signal.OnSwitchFactionTurn) { sayTaunt = true; }

        if (signal != Signal.CalculateStats) { return; }
        
        if (!character) { return; }
        character.TryGetComponent(out Behaviours behaviour);
        if (!behaviour) { return; }

        if (GridManager.i.goMethods.IsGameObjectInRange(behaviour.sightRange, origin, target)) {
            if (PathingManager.i.IsPathable(target.transform.position.FloorToInt(), origin)) {
                behaviour.target = target;
                if(sayTaunt) {
                    character.GetComponent<Stats>().SpawnHitNumber("Taunt", Color.red, 1.5f);
                    sayTaunt = false;
                }
            }
        }
    }

    public override IEnumerator Action() {
        yield return null;
    }

    public override string Description() {
        return "";
    }
}