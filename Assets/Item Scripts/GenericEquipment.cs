using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenericEquipment : ItemAbstract
{
    public List<GameObject> skills;
    public List<GameObject> mainHandMods;
    public List<GameObject> onTakeDamageMods;
    public override bool Call(Vector3Int position, Vector3Int origin) {
        foreach (ItemAbstract mod in Modifiers) {
            mod.Call(position, origin);
        }
        return true;
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}
