using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using static ItemStatic;
using static PartyManager;

[CreateAssetMenu(fileName = "GiveStatusEffect", menuName = "SubItems/SubItemTargeter")]
public class GiveStatusEffect : ItemAbstract {
    public GameObject particles;
    public Signal onSignal = Signal.Attack;
    public Tags targetsTags;
    public Type type;
    public int range;
    public bool useParticlesInWholeArea;
    private List<string> targetStrings = new List<string>();
    public List<ItemAbstract> statusEffects = new List<ItemAbstract>();
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    [HideInInspector] public GameObject parentGO;
    public enum Type {
        SingleGOUnderMouse,
        AreaUnderMouse,
        JustTheUserGO,
        AreaAroundUser
    }

    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        if (signal != onSignal) { return; }
        this.position = position;
        this.origin = origin;
        this.parentGO = parentGO;
        if (type == Type.AreaAroundUser || type == Type.JustTheUserGO) { this.position = origin; }
        GridManager.i.AddToStack(this);
    }

    public void SingleTarget(Vector3Int position, Vector3Int origin,GameObject parentGO) {
        var target = position.GameObjectGo();
        if (!target) { return; }
        if (!targetStrings.Contains(target.tag)) { return; }
        foreach (var item in statusEffects) {
            position.GameObjectGo().GetComponent<Inventory>().AddStatusEffect(position, origin, item);
        }
        foreach (var item in subItems) {
            item.Call(position, origin, Signal.Attack, parentGO, this);
        }
        target.GetComponent<Stats>().RefreshCharacter(position);
        if (particles) { EffectManager.i.CreateSingleParticleEffect(position, particles); }
    }


    public void MultiTarget(Vector3Int position, Vector3Int origin) {
        targetStrings = ConvertFlagsEnumToStringList(targetsTags, parentGO);
        var circle = GridManager.i.goMethods.PositionsInSight(range, position);
        foreach (var pos in circle) {
            if (particles && useParticlesInWholeArea) { EffectManager.i.CreateSingleParticleEffect(pos, particles); }
            var target = pos.GameObjectGo();
            if (target == null) { continue; }
            if (!targetStrings.Contains(target.tag)) { continue; }
            foreach (var item in statusEffects) {
                target.GetComponent<Inventory>().AddStatusEffect(pos, origin, item);

            }
            foreach (var item in subItems) {
                item.Call(pos, origin, Signal.Attack, parentGO, this);
            }
            target.GetComponent<Stats>().RefreshCharacter(pos);
            if (particles && !useParticlesInWholeArea) { EffectManager.i.CreateSingleParticleEffect(pos, particles); }
        }
    }

    public override IEnumerator Action() {
        if (type == Type.SingleGOUnderMouse || type == Type.JustTheUserGO) { SingleTarget(position, origin, parentGO); }
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
