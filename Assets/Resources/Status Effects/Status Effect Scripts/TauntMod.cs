using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Taunt", menuName = "Status Effects/Taunt")]
public class TauntMod : ItemAbstract {
    public int durationTotal;
    public GameObject target;
    int counter;
    public Color tauntedColour;
    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        var stats = position.gameobjectGO().GetComponent<Stats>();
        if(signal == Signal.SetTarget){ target = origin.gameobjectGO();counter = durationTotal +1;
            position.gameobjectGO().GetComponent<SpriteRenderer>().color = tauntedColour;
            return; }
        if (stats.state != PartyManager.State.Combat) { RemoveTrait(position); return; }
        if (counter <= 0) { 
            stats.gameObject.GetComponent<Inventory>().traitsToRemove.Add(this);
            stats.gameObject.GetComponent<SpriteRenderer>().color = Color.white;
        }
        if (signal == Signal.StartOfTurnOrTickOutOfCombat) { counter--; return; }
        if(signal == Signal.FirstEnemyMove) { stats.SpawnHitNumber("TAUNT", Color.red, 2);
            stats.gameObject.GetComponent<SpriteRenderer>().color = tauntedColour; }
        if(signal == Signal.CalculateStats) {
            if(stats.faction == PartyManager.Faction.Enemy) {
                var behaviours = stats.gameObject.GetComponent<Behaviours>();
                if (GridManager.i.goMethods.IsGameObjectInRange(behaviours.sightRange, origin, target)) {
                    behaviours.target = target;
                }
                if (target == null) { Debug.Log("target null"); }
            }
        }
        
    }

    public void RemoveTrait(Vector3Int position) {
        position.gameobjectGO().GetComponent<Inventory>().traits.Remove(this);
    }
    public override string Description() {
        return "Taunt: Enemies will target this character for " + durationTotal + " turns";
    }
}
