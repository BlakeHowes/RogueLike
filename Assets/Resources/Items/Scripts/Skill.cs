using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;

[CreateAssetMenu(fileName = "Skill", menuName = "Items/Skill")]
public class Skill : ItemAbstract {
    public Type type;
    public Tags targetsTags;
    [Range(0,16)]
    public int range = 5;
    public int AOE = 0;
    [Range(0, 6)]
    public int actionPointCost = 2;
    [NonSerialized] public int actionPointCostTemp;
    [Range(0, 17)]
    public int coolDown = 2;
    [Range(0f, 3f)]
    public float CameraZoomDuration;

    public bool requireTarget = true;
    public GameObject particles;
    public bool useParticlesInWholeArea;

    public List<ItemAbstract> subItems;
    public List<ItemAbstract> statusEffects = new List<ItemAbstract>();
    public string customDescription;

    private List<string> targetStrings = new List<string>();

     public Vector3Int targetedStartPosition;
     public bool startPositionSet = false;
    [HideInInspector] public GameObject parentGO;
    public void OnValidate() {
        actionPointCostTemp = actionPointCost;
    }


    public enum Type {
        SingleTileUnderMouse,
        SelectTwoGOUnderMouse,
        AreaUnderMouse,
        JustTheUserTile,
        AreaAroundUser
    }

    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        this.parentGO = parentGO;

        if (signal == Signal.CreateSkill) { InventoryManager.i.AddSkill(this); return; }
        var coolDownTimer = parentGO.GetComponent<Inventory>().GetCoolDown(this);
        if (coolDownTimer > 0) { return; }
        if (signal == Signal.ActionPointSum) {
            if (MouseManager.i.itemSelected != this) { return; }
            parentGO.GetComponent<Stats>().actionPointsSum += actionPointCostTemp;
            return;
        }

        if (MouseManager.i.itemSelected != this) { return; }
        if (signal == Signal.CalculateStats) { CalculateStats(position,origin, parentGO); }
        if (signal != Signal.Attack) { return; }
        
        if(CameraZoomDuration > 0) { SmoothCamera.i.ActionZoomIn(origin + new Vector3(0,0.5f,0), CameraZoomDuration,0.03f); }
        this.position = position;
        this.origin = origin;
        if (type == Type.AreaAroundUser || type == Type.JustTheUserTile) { this.position = origin; }
        parentGO.GetComponent<Inventory>().AddSkillCoolDown(coolDown, this);
        GridManager.i.AddToStack(this);
    }

    public bool CheckValidity(Vector3Int position,Vector3Int origin,GameObject parentGO) {
        var coolDownTimer = parentGO.GetComponent<Inventory>().GetCoolDown(this);
        if (parentGO.GetComponent<Stats>().actionPoints < actionPointCost) { return false; }
        if(coolDownTimer > 0) { return false; }
        if(type == Type.SingleTileUnderMouse) {
            if (!position.InRange(origin, range)) { return false; }
        }
      
        return true;
    }

    public void CalculateStats(Vector3Int position,Vector3Int origin, GameObject parentGO) {
        if (!parentGO) { return; }
        parentGO.GetComponent<Stats>().skillRangeTemp += range;
        foreach (var item in subItems) {
            item.Call(position, origin, Signal.CalculateStats, parentGO, this);
        }
    }

    public void SingleTarget(Vector3Int position, Vector3Int origin) {
        var target = position.GameObjectGo();


        foreach (var item in subItems) {
            item.Call(position, origin, Signal.Attack, parentGO, this);
        }
        if (!target && requireTarget) { return; }
        //if (!targetStrings.Contains(target.tag)) { return; }
        foreach (var item in statusEffects) {
            position.GameObjectGo().GetComponent<Inventory>().AddStatusEffect(position, origin, item);
        }
        if(target)target.GetComponent<Stats>().RefreshCharacter(position);
        if (particles) { EffectManager.i.CreateSingleParticleEffect(position, particles); }
    }

    public void MultiTarget(Vector3Int position, Vector3Int origin) {
        targetStrings = ConvertFlagsEnumToStringList(targetsTags,parentGO);
        var circle = GridManager.i.goMethods.PositionsInSight(origin.GameObjectGo().GetComponent<Stats>().skillRangeTemp, position);
        if (type == Type.AreaUnderMouse) { circle = GridManager.i.goMethods.PositionsInSight(AOE, position); }
        foreach (var pos in circle) {
            if (particles && useParticlesInWholeArea) { EffectManager.i.CreateSingleParticleEffect(pos, particles); }
            var target = pos.GameObjectGo();
            if (target) {
                if (!targetStrings.Contains(target.tag)) { continue; }
                foreach (var item in statusEffects) {
                    target.GetComponent<Inventory>().AddStatusEffect(pos, origin, item);
                }
            }

            foreach (var item in subItems) {
                item.Call(pos, origin, Signal.Attack, parentGO, this);
            }
            if (target) target.GetComponent<Stats>().RefreshCharacter(pos);
            if (particles && !useParticlesInWholeArea) { EffectManager.i.CreateSingleParticleEffect(pos, particles); }
        }
    }
    public override IEnumerator Action() {
        if (type == Type.SingleTileUnderMouse || type == Type.JustTheUserTile) { SingleTarget(position, origin); }
        if(type == Type.SelectTwoGOUnderMouse) { SingleTarget(position, targetedStartPosition); }
        if (type == Type.AreaUnderMouse || type == Type.AreaAroundUser) { MultiTarget(position, origin); }
        yield return new WaitForSeconds(0.2f);
        GameUIManager.i.ClearRange();
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
