using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;

[CreateAssetMenu(fileName = "GiveStatusEffect", menuName = "Status Effects/Give Status Effect")]
public class GiveStatusEffect : ItemAbstract {
    public Signal onSignal = Signal.Attack;
    public Faction targetFaction;
    public List<ItemAbstract> statusEffects = new List<ItemAbstract>();
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    public bool statusEffectTargetIsThisCharacter = false;
    public bool areaOfEffect = true;
    public bool positionIsThisCharacter = true;

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal != onSignal) { return; }
        this.position = position;
        this.origin = origin;
        if (positionIsThisCharacter) { this.position = origin; }
        GridManager.i.AddToStack(this);
    }

    public void SingleTarget(Vector3Int position, Vector3Int origin) {
        foreach (var item in statusEffects) {
            if (statusEffectTargetIsThisCharacter) { position.gameobjectGO().GetComponent<Inventory>().AddStatusEffect(item, origin); continue; }
            position.gameobjectGO().GetComponent<Inventory>().AddStatusEffect(item, position);
        }
        foreach (var item in subItems) {
            item.Call(position, origin, Signal.Attack);
        }
    }

    public void MultiTarget(Vector3Int position, Vector3Int origin) {
        var circle = GridManager.i.tools.Circle(origin.gameobjectGO().GetComponent<Stats>().skillRangeTemp, position);
        foreach (var pos in circle) {
            var target = pos.gameobjectGO();
            if (target == null) { continue; }
            var factionFound = target.GetComponent<Stats>().faction;
            if (targetFaction != factionFound) { continue; }
            foreach (var item in statusEffects) {
                if (statusEffectTargetIsThisCharacter) { target.GetComponent<Inventory>().AddStatusEffect(item, origin); continue; }
                target.GetComponent<Inventory>().AddStatusEffect(item, pos);
            }
            foreach (var item in subItems) {
                item.Call(pos, origin, Signal.Attack);
            }
            if (particles) { EffectManager.i.CreateSingleParticleEffect(pos, particles); }
        }
    }
    public override IEnumerator Action() {
        if (!areaOfEffect) { SingleTarget(position, origin); }
        if (areaOfEffect) { MultiTarget(position, origin); }
        yield return new WaitForSeconds(0.2f);
    }

    public override string Description() {
        string description = "";
        if (areaOfEffect) { description += "All Enemies in range \n"; }
        foreach (var item in statusEffects) {
            description += item.Description();
        }
        return description;
    }
}
