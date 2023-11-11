using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;
using static ItemStatic;

public class GameUIManager : MonoBehaviour {
    public int coins;
    public Text coinsText;
    public static GameUIManager i;
    public Tilemap uiTilemap;
    public Transform canvasOverlay;
    public Transform canvasWorld;
    public ItemToolTip itemtooltip;
    public GameObject tooltipGameObject;
    public Text actionPointsText;
    public GameObject partyIconLayout;
    public GameObject gameOverLayout;
    public Tilemap groundUI;
    public Texture2D boarderEffectTexture;
    public GameObject enemyInCombatUI;
    private GlobalValues globalValues;
    public APUIElement apUIElement;
    public AbilitySelection abilitySelection;
    public GameObject AbilitySelectLayout;
    public TraitAnimation traitAnimation;
    public void SetAP(float amount) {
        apUIElement.ChangeAP(Mathf.FloorToInt(amount));
    }
    public void Awake() {
        i = this;
        globalValues = Manager.GetGlobalValues();
        coinsText.text = coins.ToString();
    }

    public bool ChangeCoinsValue(int amount) {
        if (coins + amount < 0) { return false; }
        coins += amount;
        coinsText.text = coins.ToString();
        return true;
    }

    public void HighlightMouseTile(Vector3Int position) {
        if (!MouseManager.i.itemSelected) {
            groundUI.ClearAllTiles();
        }
        ResetGos();
        uiTilemap.ClearAllTiles();
        if (!FloorManager.i.IsWalkable(position)) { HideHighlight(); return; }
        //var origin = PartyManager.i.GetCurrentTurnCharacter().Position();
        uiTilemap.SetTile(position, globalValues.mouseHighlight);
        var character = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(position);

        if (character != null) {
            uiTilemap.SetTileFlags(position, TileFlags.None);
            if (PartyManager.i.party.Contains(character)) {
                uiTilemap.SetColor(position, globalValues.partyHightlightColour);
            }
            else {
                if(character.tag == "Interactable") { uiTilemap.SetColor(position, globalValues.interactableHightlightColour); }
                if (character.tag == "Passive") { uiTilemap.SetColor(position, globalValues.passiveHightlightColour); }
                if (character.tag == "Enemy") {
                    uiTilemap.SetColor(position, globalValues.enemyHightlightColour);
                    var inventory = PartyManager.i.currentCharacter.GetComponent<Inventory>();
                    //inventory.CallEquipment(origin, origin, Signal.CalculateStats);
                    if (MouseManager.i.itemSelected) { return; }
                    var weapon = inventory.mainHand as Weapon;
                    var origin = inventory.gameObject.Position();
                    if (!weapon) { ShowRange(origin, 1); }
                    else { ShowRange(origin, weapon.GetRange(character)); }
                }
            }
        }
        else {
            uiTilemap.SetColor(position, Color.white);
        }
    }

    public void ClearRange() {
        groundUI.ClearAllTiles();
    }

    public void ResetGos() {
        foreach(Transform go in GridManager.i.gameObject.transform) {
            go.gameObject.GetComponent<SpriteRenderer>().color = Color.white;
        }
    }

    public void ShowRange(Vector3Int position,int range) {
        ClearRange();
        var cells =CreateRange(position, range);
        var goMethods = GridManager.i.goMethods;
        var inSight = goMethods.PositionsInSight(range, position);
        if (range == 1) {
            inSight = GridManager.i.tools.MeeleeRange(position);
        }
        foreach (Vector3Int cell in cells) {
            var gameobject = cell.GameObjectGo();
            if (gameobject) {
                if (gameobject.tag == "Enemy") {
                    gameobject.GetComponent<SpriteRenderer>().color = globalValues.fadedColour;
                }

            }
        }

        foreach(Vector3Int cell in inSight) {
            if (goMethods.IsInSight(cell, position)) {
                groundUI.SetTile(cell, globalValues.rangeTile);
                var go = cell.GameObjectGo();

                if (go) go.GetComponent<SpriteRenderer>().color = Color.white;
            }
        }
    }

    public void ShowRange(Vector3Int position, int range,bool useUITilemap) {
        if (useUITilemap) {
            uiTilemap.ClearAllTiles();
        }
        var cells = CreateRange(position, range);
        var goMethods = GridManager.i.goMethods;

        foreach (Vector3Int cell in cells) {
            if (goMethods.IsInSight(cell, position)) {
                uiTilemap.SetTile(cell, globalValues.rangeTile);
            }
        }
    }

    public List<Vector3Int> CreateRange(Vector3Int position, int range) {
        var cells = new List<Vector3Int>();
        if (range == 1) {
            cells = GridManager.i.tools.MeeleeRange(position);
        }
        else {
            cells = GridManager.i.tools.Circle(range, position);
        }
        return cells;
    }

    public void ShowGameOverUI() {
        gameOverLayout.SetActive(true);
        uiTilemap.ClearAllTiles();
        canvasOverlay.gameObject.SetActive(false);
        MouseManager.i.disableMouse = true;
    }

    public void DisableUI() {
        uiTilemap.ClearAllTiles();
        canvasOverlay.gameObject.SetActive(false);
    }

    public void EnableUI() {
        canvasOverlay.gameObject.SetActive(true);
    }

    public void UpdatePartyIcons(List<GameObject> party) {
        if (!globalValues.partyIconPrefab) { Debug.LogError("Party Icon not set"); return; }
        foreach (Transform child in partyIconLayout.transform) {
            Destroy(child.gameObject);
        }
        foreach(GameObject member in party) {
            if(member == null) continue;
            if (member.CompareTag("Summon")) { continue; }
            var clone = Instantiate(globalValues.partyIconPrefab,partyIconLayout.transform);
            var partyicon = clone.gameObject.GetComponent<PartyIcon>();
            var state = member.GetComponent<Stats>().state;
            var colour = Color.black;
            if (state == PartyManager.State.Combat) {
                colour = Color.red;
            }
            partyicon.GetComponent<Image>().color = colour;
            partyicon.SetIcon(member);
            partyicon.DisableHighlight();
            if (partyicon.GetCharacter() == PartyManager.i.currentCharacter) {
                partyicon.EnableHighlight();
            }
        }
    }

    public void HideHighlight() {
        uiTilemap.ClearAllTiles();
    }
}
