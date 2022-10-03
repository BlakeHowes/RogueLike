using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Pokeball", menuName = "Items/Pokeball")]
public class Pokeball : ItemAbstract
{
    [NonSerialized] GameObject caughtCharacter;
    public override bool Call(Vector3Int position, Vector3Int origin) {
        var character = position.gameobjectSpawn();
        var originCharacter = origin.gameobjectSpawn();

        if (caughtCharacter != null) {
            GridManager.i.SpawnCharacter(caughtCharacter,position,Color.white);
            var stats = position.gameobjectSpawn().GetComponent<Stats>();
            stats.faction = PartyManager.Faction.Party;
            PartyManager.i.AddPartyMember(position.gameobjectSpawn());
            caughtCharacter = null;
            Debug.Log("character is here");
            return true;
        }

        if (character != null) {
            var stats = character.GetComponent<Stats>();
            if (stats.faction != PartyManager.Faction.Party) {

                if (stats.health < stats.maxHealth / 3||stats.health <3) {
                    stats.faction = PartyManager.Faction.Party;
                    PartyManager.i.AddPartyMember(position.gameobjectSpawn());
                }
            }
        }
        return true;
    }

    public override string Description() {
        return "Throw at weak enemies to convert them lol";
    }
}
