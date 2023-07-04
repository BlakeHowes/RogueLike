using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "Equipment", menuName = "Items/Equipment")]
public class Equipment : ItemAbstract {
    public int shopValue;
    public EquipmentType equipmentType;
    //Optional sprite for overlying onto character model
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    public Sprite wornSprite;
    public bool hideHair;
    public Vector3Int wornOffset;

    [Header("Stats")]
    public int maxHealthBase;
    public int armourBase;

    public override void Call(Vector3Int position, Vector3Int origin,Signal signal) {
        var originCharacter = origin.GameObjectSpawn();
        if (originCharacter == null) { return; }
        if(signal == Signal.CreateSkill) {
        }
        foreach (ItemAbstract item in subItems) {
            item.Call(position, origin, signal);
        }

        if (signal != Signal.CalculateStats) { return; }
        var stats = originCharacter.GetComponent<Stats>();
        stats.maxHealthTemp += maxHealthBase;
        stats.armourTemp += armourBase;
    }

    public override IEnumerator Action() {
        yield return null;
    }

    public override string Description() {
        var description = "";
        if(armourBase > 0) { description += "+" + armourBase + " Armour\n"; }
        foreach (ItemAbstract item in subItems) {
            description += item.Description();
        }
        return description;
    }
}
