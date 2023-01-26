using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Pokeball", menuName = "Items/Pokeball")]
public class Pokeball : ItemAbstract
{
    [NonSerialized] GameObject caughtCharacter;

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return true;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal != Signal.Attack) { return; }
        var character = position.gameobjectSpawn();
        var originCharacter = origin.gameobjectSpawn();

        if (caughtCharacter != null) {
            GridManager.i.SpawnCharacter(caughtCharacter,position,Color.white);
            var stats = position.gameobjectSpawn().GetComponent<Stats>();
            stats.faction = PartyManager.Faction.Party;
            PartyManager.i.AddPartyMember(position.gameobjectSpawn());
            caughtCharacter = null;
            Debug.Log("character is here");
            return;
        }

        if (character != null) {
            var stats = character.GetComponent<Stats>();
            if (stats.faction != PartyManager.Faction.Party && stats.faction != PartyManager.Faction.Wall) {
                stats.faction = PartyManager.Faction.Party;
                PartyManager.i.AddPartyMember(position.gameobjectSpawn());
            }
        }
        return;
    }

    public override string Description() {
        return "Throw at weak enemies to convert them lol";
    }
}
