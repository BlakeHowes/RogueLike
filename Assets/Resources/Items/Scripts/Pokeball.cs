using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "Pokeball", menuName = "Items/Pokeball")]
public class Pokeball : ItemAbstract
{
    [NonSerialized] GameObject caughtCharacter;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal != Signal.Attack) { return; }
        var character = position.GameObjectSpawn();
        var originCharacter = origin.GameObjectSpawn();

        if (caughtCharacter) {

            return;
        }


    }
    public override IEnumerator Action() {
        yield return null;
    }
   
    public override string Description() {
        return "Throw at weak enemies to convert them lol";
    }
}
