using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using static ItemStatic;
using static PartyManager;

[CreateAssetMenu(fileName = "GiveStatusEffect", menuName = "Mods/Give Status Effect")]
public class GiveStatusEffect : ItemAbstract {
    public GameObject particles;
    public Signal onSignal = Signal.Attack;
    public tags targetFaction;
    public Type type;
    public List<ItemAbstract> statusEffects = new List<ItemAbstract>();
    public List<ItemAbstract> subItems = new List<ItemAbstract>();

    public enum Type {
        SingleGOUnderMouse,
        AreaUnderMouse,
        JustTheUserGO,
        AreaAroundUser
    }

    [Flags]
    public enum tags {
        Party,
        Enemy,
        Interactable,
        Passive
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
            position.GameObjectGo().GetComponent<Inventory>().AddStatusEffect(position, origin, item);
        }
        foreach (var item in subItems) {
            item.Call(position, origin, Signal.Attack);
        }
        target.GetComponent<Stats>().RefreshCharacter(position);
        if (particles) { EffectManager.i.CreateSingleParticleEffect(position, particles); }
    }

    public void MultiTarget(Vector3Int position, Vector3Int origin) {
        var circle = GridManager.i.tools.Circle(origin.GameObjectGo().GetComponent<Stats>().skillRangeTemp, position);
        foreach (var pos in circle) {
            var target = pos.GameObjectGo();
            if (target == null) { continue; }
            tags targetTag = (tags)Enum.Parse(typeof(tags), target.tag);
            if (targetFaction.HasFlag(targetTag)) { continue; }
            foreach (var item in statusEffects) {
                target.GetComponent<Inventory>().AddStatusEffect(pos, origin, item);

            }
            foreach (var item in subItems) {
                item.Call(pos, origin, Signal.Attack);
            }
            target.GetComponent<Stats>().RefreshCharacter(pos);
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
