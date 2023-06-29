using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DevHotkeys : MonoBehaviour
{
    public void Update() {
        if (Input.GetKeyDown(KeyCode.Z)) {
            foreach(GameObject go in PartyManager.i.party) {
                var stats = go.GetComponent<Stats>();
                stats.health = 99;
                stats.maxHealthBase = 99;
                stats.actionPoints = 10;
                stats.actionPointsBase = 10;
            }
        }

        if (Input.GetKeyDown(KeyCode.C)) {
            InventoryManager.i.CreateCharacterSprite(PartyManager.i.currentCharacter);
        }

        if (Input.GetKeyDown(KeyCode.V)) {
            PartyManager.i.EndTurn();
        }


        if (Input.GetKeyDown(KeyCode.W)) {
            PartyManager.i.currentCharacter.GetComponent<Stats>().SpawnHitNumber("Wait", Color.blue, 1);
            //currentStats.actionPoints -= 1;
            MouseManager.i.EndOfAction();
        }

        if (Input.GetKeyDown(KeyCode.X)) {
            GameUIManager.i.ShowSight(PartyManager.i.currentCharacter.position());
        }
        if (Input.GetKeyDown(KeyCode.B)) {
            var mousePos = MouseManager.i.MousePositionOnGrid();
            Debug.Log("Position: "+ mousePos +" GameObject: "+ mousePos.gameobjectGO() + " Item: "+ mousePos.item() + " Surface: " + GridManager.i.GetOrSpawnSurface(mousePos));
        }
        if (Input.GetKeyDown(KeyCode.N)) {
            var pos = MouseManager.i.MousePositionOnGrid();
            var character = pos.gameobjectGO();
            if (character) { character.GetComponent<Stats>().TakeDamage(1000000, pos); }
        }
    }
}
