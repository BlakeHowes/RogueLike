using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Trinket Mod Container", menuName = "Items/Trinket Mod Container")]
public class ModTrinket : ItemAbstract {
    public override bool Call(Vector3Int position, Vector3Int origin) {
        var inventory = origin.gameobjectGO().GetComponent<Inventory>();
        if (inventory != null) {
            if (inventory.mainHand != null) {
                foreach(ItemAbstract mod in Modifiers) {
                    inventory.mainHand.Modifiers.Add(mod);
                }
            }
        }
        return true;
    }

    public override string Description() {
        string description = "";
        foreach (ItemAbstract mod in Modifiers) { 
            description += mod.Description();
        }
        return description;
    }
}
