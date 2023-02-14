using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "GenericSkill", menuName = "Items/Skill")]
public class GenericSkill : ItemAbstract {
    public int range;
    public int actionPointCost;
    public int coolDown;
    [NonSerialized]public int coolDownTimer = 0;

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        if (MouseManager.i.itemSelected == this) { return true; }
        return false;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {

        if (signal == Signal.CreateSkill) {
            GameUIManager.i.AddSkill(this);
            return;
        }



        if (signal == Signal.StartOfTurnOrTickOutOfCombat) {
            if (coolDownTimer > 0)
                coolDownTimer--;
            return;
        }
        if (coolDownTimer > 0) { return; }

        if (signal == Signal.ActionPointSum) {
            if (MouseManager.i.itemSelected == this) {
                origin.gameobjectGO().GetComponent<Stats>().actionPointsSum += actionPointCost;
            }
            return;
        }
        if (MouseManager.i.itemSelected != this) { return; }
        if (signal == Signal.CalculateStats) {
            var character = origin.gameobjectGO();
            character.GetComponent<Stats>().skillRangeTemp += range;
            foreach(var mod in Modifiers) {
                mod.Call(position, origin, Signal.CalculateStats);
            }
        }

        if (signal != Signal.Attack) { return; } 
        
        coolDownTimer = coolDown;
        foreach (var mod in Modifiers) {
            if(mod is Weapon) {
                var weapon = mod as Weapon;
                weapon.rangeTemp = range;
                mod.ConditionsMet = true;
                mod.Call(position, origin, Signal.WeaponDamageCalculate);
            }
            mod.Call(position, origin, Signal.SetTarget);
            mod.Call(position, origin, Signal.Attack);
        }
    }
    public override string Description() {
        string description = "";
        foreach (var item in Modifiers) {
            description += item.Description();
        }
        description += " (" + actionPointCost + " AP)";
        return description;
    }
}
