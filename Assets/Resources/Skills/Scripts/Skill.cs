
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;

[CreateAssetMenu(fileName = "Skill", menuName = "Items/Skill")]
public class Skill : ItemAbstract{
    public RangeType rangeType;
    public Tags targetsTags;
    [Range(0, 16)]
    public int range = 5;
    public int AOE = 0;
    [Range(0, 6)]
    public int actionPointCost = 2;
    [HideInInspector] public int actionPointCostTemp;
    [Range(0, 17)]
    public int coolDown = 2;

    public Vector3Int targetedStartPosition;
    public bool startPositionSet = false;

    public int totalTargets = 0;

    public Vector2Int skillDamage;
    public WeaponType weaponType;
    public enum RangeType {
        None,
        CircleUnderMouse,
        Cone,
        Multi,
        TwoTargets,
    }

    public int GetDamage() {
        var damage = Random.Range(skillDamage.x, skillDamage.y + 1);
        return damage;
    }

    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        if(rangeType == RangeType.Cone) {
            //Targets = cone;
        }

        if (callType == CallType.AddSkillToHotbar) {
            InventoryManager.i.AddSkill(this);
        }
        if (MouseManager.i.itemSelected != this) { return; }
        if (callType == CallType.OnActivate) {
            var inventory = parentGO.GetComponent<Inventory>();
            if (inventory.GetCoolDown(this) > 0) { return; }
            inventory.AddCoolDown(coolDown +1, this);
        }

        if (rangeType == RangeType.Multi && callType == CallType.OnActivate) {
            foreach(var target in MouseManager.i.targets) {
                foreach (var ability in abilities) {
                    if (ability.callType == callType) {
                        ability.Call(target, origin, parentGO, this);
                    }
                }
            }
            return;
        }


        if (rangeType == RangeType.TwoTargets && callType == CallType.OnActivate) {
            abilities[0].Call(MouseManager.i.targets[0], MouseManager.i.targets[1], parentGO, this);
            abilities[1].Call(MouseManager.i.targets[1], MouseManager.i.targets[0], parentGO, this);
            return;
        }

        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }

    public List<string> GetTags(GameObject parentGO) {
        return ConvertFlagsEnumToStringList(targetsTags, parentGO);
    }

    public bool CheckValidity(Vector3Int position, Vector3Int origin, GameObject parentGO) {
        var coolDownTimer = parentGO.GetComponent<Inventory>().GetCoolDown(this);
        if (parentGO.GetComponent<Stats>().actionPoints < actionPointCost) { return false; }
        if (coolDownTimer > 0) { return false; }
        if (rangeType == RangeType.CircleUnderMouse) {
            if (!position.InRange(origin, range)) { return false; }
        }

        return true;
    }
}
