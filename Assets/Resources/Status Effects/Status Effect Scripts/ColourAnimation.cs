using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "ColourAnimation", menuName = "Mods/ColourAnimation")]
public class ColourAnimation : ItemAbstract
{
    public Color colour;
    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        var character = position.gameobjectGO();
        Actions.i.FlashAnimation(character, origin, colour);
        position.gameobjectGO().GetComponent<Inventory>().statusEffectsToRemove.Add(this);
    }

    public override string Description() {
        return "";
    }
}
