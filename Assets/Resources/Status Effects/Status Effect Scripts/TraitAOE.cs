using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "TraitAOE", menuName = "Mods/TraitAOE")]
public class TraitAOE : ItemAbstract {
    [SerializeField]private Faction faction;

    public enum Faction {
        Allies,
        Enemies
    }

    public bool targetSelf;
    public override bool Condition(Vector3Int position, Vector3Int origin) {
        if(MouseManager.i.itemSelected == this) { return true; }
        return false;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal != Signal.Attack) { return; }
        var currentCharacter = PartyManager.i.currentCharacter;
        position = currentCharacter.position();
        var circle = GridManager.i.tools.Circle(origin.gameobjectGO().GetComponent<Stats>().skillRangeTemp, position);
        foreach (var pos in circle) {
            var target = pos.gameobjectGO();
            if (target == null) { continue; }
            var factionFound = target.GetComponent<Stats>().faction;
            if (faction == Faction.Allies) {if (factionFound != currentCharacter.GetComponent<Stats>().faction) { continue; }}
            if (factionFound == PartyManager.Faction.Interactable || factionFound == PartyManager.Faction.Wall) { continue; }
            if (faction == Faction.Enemies) { if (factionFound == currentCharacter.GetComponent<Stats>().faction) { continue; }}
            foreach (var item in Modifiers) {
                if (targetSelf) {
                    target.GetComponent<Inventory>().AddStatusEffect(item, origin);
                }
                else {
                    target.GetComponent<Inventory>().AddStatusEffect(item, pos);
                }
               
            }
            if (particles) { EffectManager.i.CreateSingleParticleEffect(pos, origin, particles); }
            }
        }
    public override string Description() {
        string description = "All Enemies in range \n";
        foreach (var item in Modifiers) {
            description += item.Description();
        }
        return description;
    }
}
