using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Charge", menuName = "Mods/Charge")]
public class ChargeMod : ItemAbstract
{
    public int actionPointCost;
    public float speed;
    public int rangeAddition;

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        var currentCharacter = PartyManager.i.currentCharacter;
        var item = currentCharacter.GetComponent<Inventory>().mainHand;
        var weapon = item as Weapon;
        if (weapon != null) {
            if(weapon.rangeTemp > 1) {
                return false;
            }
        }

        if (GridManager.i.tools.InMeeleeRange(position, origin)) { return false; }
        var enemy = GridManager.i.goMethods.FirstGameObjectInSightIncludingAllies(position, origin).gameobjectGO();
        if (!enemy) { return false; }
        if (enemy.GetComponent<Stats>().faction == PartyManager.i.GetCurrentTurnCharacter().GetComponent<Stats>().faction) {
            return false;
        }
        return true;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        var mainHandWeapon = origin.gameobjectGO().GetComponent<Inventory>().mainHand;

        if (signal == Signal.ActionPointSum) {
            if (ConditionsMet) { PartyManager.i.currentCharacter.GetComponent<Stats>().actionPointsSum += actionPointCost; }
            return;
        }
        Weapon weapon = null;
        if (mainHandWeapon) {
            weapon = mainHandWeapon as Weapon;
        }
        
        if (signal == Signal.CalculateStats) { 
            
            if (weapon == null) { return; }

            //Add Range to Weapon
            if (signal == Signal.CalculateStats) {
                weapon.rangeTemp += rangeAddition;
                Debug.Log("range added");
            }
        }
        

        if (signal != Signal.Attack) { return; }
        if (!ConditionsMet) { return; }
        var enemy = GridManager.i.goMethods.FirstGameObjectInSight(position, origin);

        if (enemy == null) { return; }
        var originCharacter = origin.gameobjectGO();
        var line = GridManager.i.tools.BresenhamLine(position.x, position.y, origin.x, origin.y);
        PathingManager.i.Jump(line[0], origin, speed);
        originCharacter.GetComponent<Stats>().SpawnHitNumber("CHARGE", Color.yellow, 2);
        if (weapon) {
            if (weapon.ConditionsMet == false) {
                enemy.gameobjectGO().GetComponent<Stats>().TakeDamage(weapon.damage, line[0]);
            }
        }

        Debug.Log("CHARGE");
        return;
    }

    public override string Description() {
        return "CHARGE: When attacking launch youself to the target";
    }
}
