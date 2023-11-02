using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DevHotkeys : MonoBehaviour
{
    public bool suspendStack;
    public static DevHotkeys i;
    public void Awake() {
        i = this;
    }

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

        if (Input.GetKeyDown(KeyCode.A)) {
            Debug.Log("Toggle stack");
            suspendStack = !suspendStack;
            if(suspendStack == false) { GridManager.i.StartStack(); }
        }

        if (Input.GetKeyDown(KeyCode.C)) {
            CharacterSpriteGenerator.CreateCharacterSprite(PartyManager.i.currentCharacter);
        }

        if (Input.GetKeyDown(KeyCode.V)) {
            PartyManager.i.EndTurn();
        }

        if (Input.GetKeyDown(KeyCode.S)) {
            var stack = GridManager.i.itemsInActionStack;
            if(stack.Count == 0) { return; }
            Action action = stack[0];
            //if (itemsCheckedHack.Contains(action)) { itemsInActionStack.Remove(action); continue; }
            //itemsCheckedHack.Add(action);
            StartCoroutine(action.StackAction());
            stack.Remove(action);
        }


        if (Input.GetKeyDown(KeyCode.W)) {
            PartyManager.i.currentCharacter.GetComponent<Stats>().SpawnHitNumber("Wait", Color.blue, 1);
            //currentStats.actionPoints -= 1;
            MouseManager.i.EndOfAction(PartyManager.i.currentCharacter, PartyManager.i.currentCharacter.GetComponent<Stats>());
        }

        if (Input.GetKeyDown(KeyCode.B)) {
            var mousePos = MouseManager.i.MousePositionOnGrid();
            Debug.Log("Position: "+ mousePos +" GameObject: "+ mousePos.GameObjectGo() + " Item: "+ mousePos.Item() + " Surface: " + GridManager.i.GetOrSpawnSurface(mousePos));
        }
        if (Input.GetKeyDown(KeyCode.N)) {
            var pos = MouseManager.i.MousePositionOnGrid();
            var character = pos.GameObjectGo();
            if (character) { character.GetComponent<Stats>().TakeDamage(1000000, pos); }
            GridManager.i.StartStack();
        }
    }
}
