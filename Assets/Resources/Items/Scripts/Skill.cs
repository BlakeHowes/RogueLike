using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Skill", menuName = "Items/Skill")]
public class Skill : ItemAbstract {
    public int range = 5;
    public int actionPointCost = 2;
    [NonSerialized]public int actionPointCostTemp;
    [NonSerialized]public int coolDown;

    public string customDescription;
    public int coolDownTimer = 0;
    public List<ItemAbstract> subItems;
    public SkillDescriptionForAI skillDescriptionForAI;

    public float CameraZoomDuration;
    public void OnValidate() {
        actionPointCostTemp = actionPointCost;
    }

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {

        if (signal == Signal.CreateSkill) { GameUIManager.i.AddSkill(this); return; }
        if (signal == Signal.StartOfTurn) { if (coolDownTimer > 0) { coolDownTimer--; } return; }
        if (coolDownTimer > 0) { return; }

        if (signal == Signal.ActionPointSum) {
            if (MouseManager.i.itemSelected != this) { return; }
            origin.gameobjectGO().GetComponent<Stats>().actionPointsSum += actionPointCostTemp;
            return;
        }

        if (MouseManager.i.itemSelected != this) { return; }
        if (signal == Signal.CalculateStats) { CalculateStats(position, origin); }
        if (signal != Signal.Attack) { return; }

        coolDownTimer = coolDown;
        if(CameraZoomDuration > 0) { SmoothCamera.i.ActionZoomIn(origin + new Vector3(0,0.5f,0), CameraZoomDuration,0.03f); }
        foreach (var item in subItems) {
            if (item is Weapon) {
                var weapon = item as Weapon;
                weapon.rangeTemp = range;
                item.Call(position, origin, Signal.WeaponDamageCalculate);
            }
            item.Call(position, origin, Signal.SetTarget);
            item.Call(position, origin, Signal.Attack);
            GridManager.i.AddToStack(this);
        }
    }

    public void CalculateStats(Vector3Int position, Vector3Int origin) {
        var character = origin.gameobjectGO();
        character.GetComponent<Stats>().skillRangeTemp += range;
        foreach (var item in subItems) {
            item.Call(position, origin, Signal.CalculateStats);
        }
    }

    public override IEnumerator Action() {
        yield return new WaitForSeconds(0.1f);
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
