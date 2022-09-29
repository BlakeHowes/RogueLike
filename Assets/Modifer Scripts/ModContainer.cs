using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "ModContainer", menuName = "Items/ModContainer")]
public class ModContainer : ItemAbstract
{
    public override bool Call(Vector3Int position, Vector3Int origin) {
        return false;
    }

    public bool ModItem(ItemAbstract item) {
        foreach (ItemAbstract modifier in Modifiers) {
            item.Modifiers.Add(modifier);
        }
        return true;
    }

    public override string Description() {
        return "Adds the modifactions";
    }
}
