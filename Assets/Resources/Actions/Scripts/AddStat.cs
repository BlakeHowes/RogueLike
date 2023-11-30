using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
//[CreateAssetMenu(fileName = "AddStat", menuName = "Actions/AddStat")]
public class AddStat : Action, IDescription {
    public Stat stat;
    public bool userGainsStat = true;
    public bool set;
    [HideInInspector] public int amount;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        amount = actionContainer.intValue;
        SaveValues(position, origin,parentGO,parentItem);
        if(ability.callType == CallType.CalculateStats) { ChangeStats(); return true; }
        this.AddToStack();
        return true;
    }

    public void ChangeStats() {
        Stats stats = null;

        if (amount == 0) {
            var action = GridManager.i.GetNextStackItem(1);
            if(action is ValueOverride) {
                var valueOverride = action as ValueOverride;
                amount = valueOverride.GetValue(parentGO);
            }
        }

        if (userGainsStat) {
            if (!parentGO) { return; }
            stats = parentGO.GetComponent<Stats>();
        }
        if (!userGainsStat) {
            var go = position.GameObjectGo();
            if (!go) { return; }
            stats = go.GetComponent<Stats>();
        }
        switch (stat) {
            case Stat.MaxHealth: stats.maxHealthTemp += amount; break;
            case Stat.Health: stats.Heal(amount); break;
            case Stat.Armour:
                stats.armour += amount;
                if (set) { stats.armour = amount; }
                break;
            case Stat.MaxActionPoints: stats.actionPointsTemp += amount; break;
            case Stat.Damage: stats.meleeDamage += amount; break;
            case Stat.ActionPoints: stats.actionPoints += amount;
                if (set) { stats.actionPoints = amount; }
                break;
            case Stat.DamageTaken: stats.damageTaken = amount; break;
            case Stat.WalkCost: stats.walkCost = amount; break;
            case Stat.ActionPointCost: stats.actionPointSkillCostChange += amount; break;
            case Stat.EnemyAlertRange: stats.enemyAlertRangeTemp += amount; break;
            case Stat.DamageMultiple: stats.meleeDamageMultiple += amount; break;
        }
    }

    public override IEnumerator StackAction() {
        ChangeStats();
        yield return null;  
    }

    public string Description(ItemAbstract parentItem, ActionContainer actionContainer) {
        return "Gain " + actionContainer.intValue + " " + stat;
    }
}
