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
    public GameObject PartyIconLayout;
    public GameObject skillLayout;
    public GameObject iconLayout;
    public Tilemap groundUI;
    public Texture2D boarderEffectTexture;
    public GameObject enemyInCombatUI;
    public Color notInRangeColour;
    public GlobalValues globalValues;
    public void Awake() {
        i = this;
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
        uiTilemap.ClearAllTiles();
        if (!FloorManager.i.IsWalkable(position)) { HideHighlight(); return; }
        var origin = PartyManager.i.GetCurrentTurnCharacter().Position();
        uiTilemap.SetTile(position, globalValues.mouseHighlight);
        var character = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(position);

        if (character != null) {
            uiTilemap.SetTileFlags(position, TileFlags.None);
            if (PartyManager.i.party.Contains(character)) {
                uiTilemap.SetColor(position, globalValues.partyHightlightColour);
            }
            else {
                if(character.GetComponent<Stats>().faction == PartyManager.Faction.Interactable) { uiTilemap.SetColor(position, globalValues.interactableHightlightColour); }
                if (character.GetComponent<Stats>().faction == PartyManager.Faction.Passive) { uiTilemap.SetColor(position, globalValues.passiveHightlightColour); }
                if (character.GetComponent<Stats>().faction == PartyManager.Faction.Enemy) {
                    uiTilemap.SetColor(position, globalValues.enemyHightlightColour);
                    var inventory = PartyManager.i.currentCharacter.GetComponent<Inventory>();
                    inventory.CallEquipment(origin, origin, Signal.CalculateStats);
                    if (MouseManager.i.itemSelected) { return; }
                    var weapon = inventory.mainHand as Weapon;
                    if (!weapon) { ShowRange(origin, 1); }
                    else { ShowRange(origin, weapon.rangeTemp); }
                }
            }
        }
        else {
            uiTilemap.SetColor(position, Color.white);
        }
    }

    public void ShowRange(Vector3Int position,int range) {
        groundUI.ClearAllTiles();
        var cells =CreateRange(position, range);
        var goMethods = GridManager.i.goMethods;
        foreach (Vector3Int cell in cells) {
            var hit =goMethods.FirstLightBlockingThingInSight(cell,position );
            if(cell == hit) {
                groundUI.SetTile(cell, globalValues.rangeTile);
                var go = cell.GameObjectGo();

                if (go) go.GetComponent<SpriteRenderer>().color = Color.white;
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

    public void AddSkill(ItemAbstract skill) {
        if (PartyManager.i.currentCharacter.GetComponent<Inventory>().skills.Contains(skill)){ return; }
        var clone = Instantiate(globalValues.skillSlotPrefab, skillLayout.transform);
        clone.GetComponent<SkillSlot>().AddSkill(skill);
    }

    public void CreateSkills() {
        foreach(Transform child in skillLayout.transform) {
            Destroy(child.gameObject);
        }
        var currentCharacter = PartyManager.i.currentCharacter;
        if (!currentCharacter) { return; }
        var position = currentCharacter.Position();
        var inventory = currentCharacter.GetComponent<Inventory>();
        foreach (ItemAbstract skill in inventory.skills) {
            AddSkill(skill);
        }
        inventory.CallEquipment(position, position, Signal.CreateSkill);
    }

    public void ShowGameOverUI() {
        globalValues.gameOverLayout.SetActive(true);
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
        foreach (Transform child in iconLayout.transform) {
            Destroy(child.gameObject);
        }
        foreach(GameObject member in party) {
            if(member == null) continue;
            
            var clone = Instantiate(globalValues.partyIconPrefab,iconLayout.transform);
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

    public void ShowSight(Vector3Int position) {
        uiTilemap.ClearAllTiles();

        List<Vector3Int> cells = new List<Vector3Int>();
        Vector3Int playerpos = PartyManager.i.currentCharacter.Position();
        position =GridManager.i.goMethods.FirstGameObjectInSight(position, playerpos);
        cells = GridManager.i.tools.BresenhamLine(playerpos.x, playerpos.y, position.x, position.y);
        foreach (Vector3Int cell in cells) {
            uiTilemap.SetTile(cell, globalValues.mouseHighlight);
        }
    }

    public void HideHighlight() {
        uiTilemap.ClearAllTiles();
    }
}
