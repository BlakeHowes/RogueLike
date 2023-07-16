using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;

[CreateAssetMenu(fileName = "Skill", menuName = "Items/Skill")]
public class Skill : ItemAbstract {
    public Type type;
    [Range(1,16)]
    public int range = 5;
    [Range(0, 6)]
    public int actionPointCost = 2;
    [NonSerialized] public int actionPointCostTemp;
    [Range(0, 17)]
    public int coolDown = 2;
    [Range(0f, 3f)]
    public float CameraZoomDuration;


    public GameObject particles;
     public int coolDownTimer = 0;

    public List<ItemAbstract> subItems;
    public List<ItemAbstract> statusEffects = new List<ItemAbstract>();



    public SkillDescriptionForAI skillDescriptionForAI;
    public string customDescription;

    private List<string> targetStrings = new List<string>();
    public Tags targetsTags;

    public void OnValidate() {
        actionPointCostTemp = actionPointCost;
    }


    public enum Type {
        SingleGOUnderMouse,
        AreaUnderMouse,
        JustTheUserGO,
        AreaAroundUser
    }

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {

        if (signal == Signal.CreateSkill) { InventoryManager.i.AddSkill(this); return; }
        if (signal == Signal.StartOfTurn) { if (coolDownTimer > 0) { coolDownTimer--; } return; }
        if (coolDownTimer > 0) { return; }

        if (signal == Signal.ActionPointSum) {
            if (MouseManager.i.itemSelected != this) { return; }
            origin.GameObjectGo().GetComponent<Stats>().actionPointsSum += actionPointCostTemp;
            return;
        }

        if (MouseManager.i.itemSelected != this) { return; }
        if (signal == Signal.CalculateStats) { CalculateStats(position, origin); }
        if (signal != Signal.Attack) { return; }

        coolDownTimer = coolDown;
        if(CameraZoomDuration > 0) { SmoothCamera.i.ActionZoomIn(origin + new Vector3(0,0.5f,0), CameraZoomDuration,0.03f); }
        this.position = position;
        this.origin = origin;
        if (type == Type.AreaAroundUser || type == Type.JustTheUserGO) { this.position = origin; }
        GridManager.i.AddToStack(this);
    }

    public void CalculateStats(Vector3Int position, Vector3Int origin) {
        var character = origin.GameObjectGo();
        character.GetComponent<Stats>().skillRangeTemp += range;
        foreach (var item in subItems) {
            item.Call(position, origin, Signal.CalculateStats);
        }
    }

    public void SingleTarget(Vector3Int position, Vector3Int origin) {
        var target = position.GameObjectGo();
        if (!target) { return; }
        foreach (var item in statusEffects) {
            position.GameObjectGo().GetComponent<Inventory>().AddStatusEffect(position,origin, item);
        }
        foreach (var item in subItems) {
            item.Call(position, origin, Signal.Attack);
        }
        target.GetComponent<Stats>().RefreshCharacter(position);
        if (particles) { EffectManager.i.CreateSingleParticleEffect(position, particles); }
    }

    public void MultiTarget(Vector3Int position, Vector3Int origin) {
        targetStrings = ConvertFlagsEnumToStringList(targetsTags);
        var circle = GridManager.i.tools.Circle(origin.GameObjectGo().GetComponent<Stats>().skillRangeTemp, position);
        foreach (var pos in circle) {
            var target = pos.GameObjectGo();
            if (target == null) { continue; }
            if (targetStrings.Contains(target.tag)) { continue; }
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
        string description = name + ": ";
        description += customDescription;
        if (customDescription == "") {
            foreach (var item in subItems) {
                description += item.Description();
            }
        }
        description += " (" + actionPointCost + " AP)";
        return description;
    }
}
