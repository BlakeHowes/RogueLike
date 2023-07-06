using Mono.Cecil;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;
using static UnityEditor.PlayerSettings;

[CreateAssetMenu(fileName = "GiveStatusEffect", menuName = "Status Effects/Give Status Effect")]
public class GiveStatusEffect : ItemAbstract {
    public GameObject particles;
    public Signal onSignal = Signal.Attack;
    public Faction targetFaction;
    public Type type;
    public bool statusEffectTargetIsThisCharacter = false;
    public List<ItemAbstract> statusEffects = new List<ItemAbstract>();
    public List<ItemAbstract> subItems = new List<ItemAbstract>();


    public enum Type {
        SingleGOUnderMouse,
        AreaUnderMouse,
        JustTheUserGO,
        AreaAroundUser
    }

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal != onSignal) { return; }
        this.position = position;
        this.origin = origin;
        if (type == Type.AreaAroundUser || type == Type.JustTheUserGO) { this.position = origin; }
        GridManager.i.AddToStack(this);
    }

    public void SingleTarget(Vector3Int position, Vector3Int origin) {
        var target = position.GameObjectGo();
        if (!target) { return; }
        foreach (var item in statusEffects) {
            if (statusEffectTargetIsThisCharacter) { position.GameObjectGo().GetComponent<Inventory>().AddStatusEffect(item, origin); continue; }
            position.GameObjectGo().GetComponent<Inventory>().AddStatusEffect(item, position);
        }
        foreach (var item in subItems) {
            item.Call(position, origin, Signal.Attack);
        }
        target.GetComponent<Stats>().RecalculateStats(position);
        if (particles) { EffectManager.i.CreateSingleParticleEffect(position, particles); }
    }

    public void MultiTarget(Vector3Int position, Vector3Int origin) {
        var circle = GridManager.i.tools.Circle(origin.GameObjectGo().GetComponent<Stats>().skillRangeTemp, position);
        foreach (var pos in circle) {
            var target = pos.GameObjectGo();
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
            target.GetComponent<Stats>().RecalculateStats(pos);
            if (particles) { EffectManager.i.CreateSingleParticleEffect(pos, particles); }
        }
    }
    public override IEnumerator Action() {
        if (type == Type.SingleGOUnderMouse || type == Type.JustTheUserGO) { SingleTarget(position, origin); }
        if (type == Type.AreaUnderMouse || type == Type.AreaAroundUser) { MultiTarget(position, origin); }
        yield return new WaitForSeconds(0.2f);
    }

    public override string Description() {
        string description = "";
        if (type == Type.AreaUnderMouse || type == Type.AreaAroundUser) { description += "AOE \n"; }
        foreach (var item in statusEffects) {
            description += item.Description();
        }
        foreach (var item in subItems) {
            description += item.Description();
        }
        return description;
    }
}
