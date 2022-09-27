using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.TextCore.Text;

public class MouseManager : MonoBehaviour
{
    public static MouseManager i;
    public ItemAbstract itemSelected;
    public bool disableMouse;
    bool disableToggle = false;
    public void Awake() {
        i = this;
    }
    public void Update() {
        if (disableToggle == true && disableMouse == false) {
            GameUIManager.i.EnableUI();
            disableMouse = false;
        }
        if (disableMouse) {
            GameUIManager.i.DisableUI();
            disableToggle = true;
            return;
        }

        var mousepos = MousePositionOnGrid();

        if (mousepos.inbounds()) {
            if (EventSystem.current.IsPointerOverGameObject()) {
                GameUIManager.i.HideHighlight();
                return;
            }
            GameUIManager.i.HighlightMouseTile(MousePositionOnGrid());
        }
        else {
            GameUIManager.i.HideHighlight();
        }

        if (Input.GetKey(KeyCode.Y)) {
            GameUIManager.i.ShowSight(MousePositionOnGrid());
        }

        if (Input.GetKeyDown(KeyCode.U)) {
            PartyManager.i.currentCharacter.GetComponent<Stats>().SpawnHitNumber("10", Color.red,1);
        }

        if (Input.GetKeyDown(KeyCode.T)) {
            var position = MousePositionOnGrid();
            Debug.Log(position + "Item: "+ position .item()+ "Mech: "+ position.mech() + "GameObject: "+ position.gameobjectGO());
        }

        if (Input.GetKeyDown(KeyCode.I)) {
            PartyManager.i.SwitchToNextCharacter();
        }

        //TEST INPUT
        if (Input.GetMouseButtonDown(0)) {

            if (!mousepos.inbounds()) {
                return;
            }

            if (EventSystem.current.IsPointerOverGameObject()) {
                return;
            }

            var gameobjectundermouse = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(mousepos);
            var currentCharacter = PartyManager.i.currentCharacter;
            var characterPosition = currentCharacter.position();


            //Use Item
            if (itemSelected != null) {
                Actions.i.UseItemFromInventory(mousepos, characterPosition, itemSelected);
                EndOfAction();
                return;
            }
            else {
                var used = false;
                if(gameobjectundermouse != null) {
                    if (gameobjectundermouse.GetComponent<Stats>().faction != PartyManager.Faction.Openable) {
                        used = Actions.i.UseItemMainHand(mousepos, characterPosition);
                        if (used) {
                            EndOfAction();
                            return;
                        }
                    }
                }


                if (gameobjectundermouse != null) {
                    used = Actions.i.Punch(mousepos, characterPosition);
                    if (used) {
                        EndOfAction();
                        return;
                    }
                }
                //Walk
                PartyManager.i.characterFollowPosition = currentCharacter.position();
                Actions.i.Walk(mousepos, characterPosition);
                if (PartyManager.i.state == PartyManager.State.Exploring) {

                    PartyManager.i.Follow();
                }
                //Pick Up Item
                var newpos = PartyManager.i.currentCharacter.position();
                var item = newpos.item();
                if (item != null && mousepos == newpos) {
                    Actions.i.PickUpItem(newpos);
                }
            }
            EndOfAction();
        }
    }

    public void EndOfAction() {
        GridManager.i.UpdateGame();

        PartyManager.i.EnemyPartyState();
        //TEST ACTION POINTS
        if (Actions.i.actionPoints <= 0) {
            PartyManager.i.EndTurn();
        }
    }

    public Vector3Int MousePositionOnGrid() {
        var mousepos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        var mouseposInt = new Vector3Int(Mathf.FloorToInt(mousepos.x), Mathf.FloorToInt(mousepos.y), 0);
        return mouseposInt;
    }
}
