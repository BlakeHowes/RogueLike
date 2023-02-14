using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;
using static ItemAbstract;
using static UnityEngine.UI.Image;

public class GameUIManager : MonoBehaviour {
    public static GameUIManager i;
    public Tile mouseHighlight;
    public Tilemap uiTilemap;
    public GameObject healthBarPrefab;
    public GameObject hitNumberPrefab;
    public Transform canvasOverlay;
    public Transform canvasWorld;
    public ItemToolTip itemtooltip;
    public GameObject tooltipGameObject;
    public Text actionPointsText;
    public GameObject PartyIconLayout;
    public Material outlineMaterial;
    public Material enemyoutlineMaterial;
    public Material normalMaterial;
    public Material hitMaterial;
    public GameObject skillSlotPrefab;
    public GameObject skillLayout;
    public GameObject iconLayout;
    public GameObject iconPrefab;
    public TileBase rangeTile;
    public Tilemap groundUI;
    public Sprite defaultSkillSprite;
    public Texture2D boarderEffectTexture;
    public GameObject enemyInCombatUI;
    public void Awake() {
        i = this;
    }

    public void HighlightMouseTile(Vector3Int position) {
        if (!MouseManager.i.itemSelected) {
            groundUI.ClearAllTiles();
        }
        uiTilemap.ClearAllTiles();
        var origin = PartyManager.i.GetCurrentTurnCharacter().position();
        uiTilemap.SetTile(position, mouseHighlight);
        var character = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(position);
       

        if (character != null) {
            uiTilemap.SetTileFlags(position, TileFlags.None);
            if (PartyManager.i.party.Contains(character)) {
                uiTilemap.SetColor(position, Color.green);
            }
            else {
                if(character.GetComponent<Stats>().faction == PartyManager.Faction.Interactable) { uiTilemap.SetColor(position, Color.yellow); }
                if (character.GetComponent<Stats>().faction == PartyManager.Faction.Enemy) {
                    uiTilemap.SetColor(position, Color.red);
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
            var hit =goMethods.FirstGameObjectInSight(cell,position );
            if(cell == hit)
            groundUI.SetTile(cell, rangeTile);
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
        var clone = Instantiate(skillSlotPrefab, skillLayout.transform);
        clone.GetComponent<SkillSlot>().AddSkill(skill);
    }

    public void CreateSkills() {
        foreach(Transform child in skillLayout.transform) {
            Destroy(child.gameObject);
        }
        var currentCharacter = PartyManager.i.currentCharacter;
        var position = currentCharacter.position();
        var inventory = currentCharacter.GetComponent<Inventory>();
        foreach (ItemAbstract skill in inventory.skills) {
            AddSkill(skill);
        }
        inventory.CallEquipment(position, position, ItemAbstract.Signal.CreateSkill);
    }

    public void DisableUI() {
        uiTilemap.ClearAllTiles();
        canvasOverlay.gameObject.SetActive(false);
    }

    public void EnableUI() {
        canvasOverlay.gameObject.SetActive(true);
    }

    public void UpdatePartyIcons(List<GameObject> party) {
        foreach (Transform child in iconLayout.transform) {
            Destroy(child.gameObject);
        }
        foreach(GameObject member in party) {
            if(member == null) continue;
            var clone = Instantiate(iconPrefab,iconLayout.transform);
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
        Vector3Int playerpos = PartyManager.i.currentCharacter.position();
        position =GridManager.i.goMethods.FirstGameObjectInSight(position, playerpos);
        cells = GridManager.i.tools.BresenhamLine(playerpos.x, playerpos.y, position.x, position.y);
        foreach (Vector3Int cell in cells) {
            uiTilemap.SetTile(cell, mouseHighlight);
        }
    }

    public void HideHighlight() {
        uiTilemap.ClearAllTiles();
    }
}
