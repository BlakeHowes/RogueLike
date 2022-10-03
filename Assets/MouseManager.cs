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
    private PartyManager.State state;
    private GameObject highlightedGameObbject = null;
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
            /*
var character = mousepos.gameobjectSpawn();

if (character != highlightedGameObbject) {
    if (character != null) {
        if(highlightedGameObbject != null)
        highlightedGameObbject.GetComponent<SpriteRenderer>().material = GameUIManager.i.normalMaterial;

        character.GetComponent<SpriteRenderer>().material = GameUIManager.i.outlineMaterial;
        highlightedGameObbject = character;
    }
}
*/
        }
        else {
            GameUIManager.i.HideHighlight();
        }

        if (Input.GetKey(KeyCode.Y)) {
            GameUIManager.i.ShowSight(MousePositionOnGrid());
        }

        if (Input.GetKey(KeyCode.R)) {
            GridManager.i.tools.FloodFill(PartyManager.i.currentCharacter.position(), GridManager.i.goTilemap, GridManager.i.fogTilemap);
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


            var gameobjectundermouse = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(mousepos);
            var currentCharacter = PartyManager.i.currentCharacter;
            var characterPosition = currentCharacter.position();

            
            if (!mousepos.inbounds()) {
                return;
            }

            if (EventSystem.current.IsPointerOverGameObject()) {
                return;
            }
            //Use Item
            if (itemSelected != null) {
                Actions.i.UseItemFromInventory(mousepos, characterPosition, itemSelected);
                EndOfAction();
                return;
            }
            else {
                var used = false;
                if(gameobjectundermouse != null) {
                    if(gameobjectundermouse.GetComponent<Stats>().faction != PartyManager.Faction.Party) {
                        if (gameobjectundermouse.GetComponent<Stats>().faction != PartyManager.Faction.Openable) {
                            used = Actions.i.UseItemMainHand(mousepos, characterPosition);
                            if (used) {
                                EndOfAction();
                                return;
                            }
                        }

                        if (gameobjectundermouse != null) {
                            used = Actions.i.Punch(mousepos, characterPosition);
                            if (used) {
                                EndOfAction();
                                return;
                            }
                        }
                    }


                }
                //Wait
                if(gameobjectundermouse == currentCharacter&&mousepos.item() == null) {
                    currentCharacter.GetComponent<Stats>().SpawnHitNumber("Wait", Color.blue, 1);
                    Actions.i.Wait();

                    EndOfAction();
                    return;
                }

                //Walk
                PartyManager.i.characterFollowPosition = currentCharacter.position();
                Actions.i.Walk(mousepos, characterPosition);
                if (PartyManager.i.state == PartyManager.State.Exploring) {
                    //THIS NEEDS TO BE CHANGED TO COMBAT OVER
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
        state = PartyManager.i.state;
        GridManager.i.UpdateGame();

        PartyManager.i.EnemyPartyState();
        if (PartyManager.i.state == PartyManager.State.Exploring) {
            if (state == PartyManager.State.Combat) {
                PartyManager.i.partyMemberTurnTaken.Clear();
                PartyManager.i.SetCurrentCharacter(PartyManager.i.party[0]);
            }
        }
    }

    public Vector3Int MousePositionOnGrid() {
        var mousepos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        var mouseposInt = new Vector3Int(Mathf.FloorToInt(mousepos.x), Mathf.FloorToInt(mousepos.y), 0);
        return mouseposInt;
    }
}
