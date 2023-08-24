using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
//[CreateAssetMenu(fileName = "AddStat", menuName = "Actions/AddStat")]
public class AddStat : Action {
    public Stat stat;
    public bool userGainsStat = true;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        Stats stats = null;
        if (userGainsStat) {
            if (!parentGO) { return true; }
            stats = parentGO.GetComponent<Stats>(); 
        }
        if (!userGainsStat) {
            var go = position.GameObjectGo();
            if (!go) { return true; }
            stats = go.GetComponent<Stats>();
        }
        switch (stat) {
            case Stat.MaxHealth: stats.maxHealthTemp += actionContainer.intValue; break;
            case Stat.Health: stats.Heal(actionContainer.intValue); break;
            case Stat.Armour: stats.armour += actionContainer.intValue; break;
            case Stat.MaxActionPoints: stats.actionPointsTemp += actionContainer.intValue; break;
            case Stat.meleeDamage: stats.meleeDamage += actionContainer.intValue; break;
            case Stat.ActionPoints: stats.actionPoints += actionContainer.intValue; break;
            case Stat.DamageTaken: stats.damageTaken = actionContainer.intValue; break;
        }
        return true;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }
}
