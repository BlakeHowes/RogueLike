using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Trait", menuName = "Items/Trait")]
public class Trait : ItemAbstract {
    public CharacterClass characterClass;
    public Sprite cardBack;
    [TextArea] public string notes;
    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }
}
