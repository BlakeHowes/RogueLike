using System;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;

[CreateAssetMenu(fileName = "Skill", menuName = "Items/Skill")]
public class Skill : ItemAbstract {
    public Type type;
    public Tags targetsTags;
    [Range(0, 16)]
    public int range = 5;
    public int AOE = 0;
    [Range(0, 6)]
    public int actionPointCost = 2;
    [NonSerialized] public int actionPointCostTemp;
    [Range(0, 17)]
    public int coolDown = 2;

    public Vector3Int targetedStartPosition;
    public bool startPositionSet = false;

    public List<Vector3Int> targets = new List<Vector3Int>();

    public enum Type {
        SingleTileUnderMouse,
        SelectTwoGOUnderMouse,
        AreaUnderMouse,
        JustTheUserTile,
        AreaAroundUser
    }

    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        if (callType == CallType.AddSkillToHotbar) {
            InventoryManager.i.AddSkill(this);
        }
        if (MouseManager.i.itemSelected != this) { return; }
        if (callType == CallType.OnActivate) {
            var inventory = parentGO.GetComponent<Inventory>();
            if (inventory.GetCoolDown(this) > 0) { return; }
            inventory.AddSkillCoolDown(coolDown +1, this);
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
        if (type == Type.SingleTileUnderMouse) {
            if (!position.InRange(origin, range)) { return false; }
        }

        return true;
    }
}
