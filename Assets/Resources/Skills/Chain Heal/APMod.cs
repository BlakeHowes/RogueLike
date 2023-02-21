using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "APMod", menuName = "Mods/AP")]
public class APMod : ItemAbstract {
    public int aP;
    int apTemp;
    public Vector2 chance;
    public int chanceThreshold;
    public Signal onSignal;
    bool setAPTemp;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (onSignal != signal) { return; }
        ItemAbstract item = InventoryManager.i.GetWeaponOrSkill(origin); 
        if (Random.Range(chance.x,chance.y) > chanceThreshold) {
            var skill = item as GenericSkill;
            if (skill) {
                skill.actionPointCostTemp = aP;
            }
        }
        else {
            var skill = item as GenericSkill;
            if (skill) {
                skill.actionPointCostTemp = skill.actionPointCost;
            }
        }
    }

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }

    public override string Description() {
        return "trades place with target";
    }
}
