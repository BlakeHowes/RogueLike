using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.TextCore.Text;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public class GameUIManager : MonoBehaviour
{
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
    public void Awake() {
        i = this;
    }
    public void HighlightMouseTile(Vector3Int position) {
        uiTilemap.ClearAllTiles();
        if (PartyManager.i.state == PartyManager.State.Combat) {
            var origin = PartyManager.i.GetCurrentTurnCharacter().position();
            position = GridManager.i.goMethods.FirstGameObjectInSight(position, origin);
        }
        uiTilemap.SetTile(position, mouseHighlight);
        var character = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(position);


        if (character != null) {
            uiTilemap.SetTileFlags(position, TileFlags.None);
            if (PartyManager.i.party.Contains(character)) {
                uiTilemap.SetColor(position, Color.green);
            }
            else {
                if(character.GetComponent<Stats>().faction == PartyManager.Faction.Openable) {
                    uiTilemap.SetColor(position, Color.yellow);
                }
                else {
                    uiTilemap.SetColor(position, Color.red);
                }
            }
        }
        else {
            uiTilemap.SetColor(position, Color.white);
        }
    }

    public void AddSkill(ItemAbstract skill) {
        var clone = Instantiate(skillSlotPrefab, skillLayout.transform);
        clone.GetComponent<SkillSlot>().AddSkill(skill);
    }

    public void ClearSkills() {
        Debug.Log("Skills Cleared");
        foreach(Transform child in skillLayout.transform) {
            Destroy(child.gameObject);
        }
    }

    public void DisableUI() {
        uiTilemap.ClearAllTiles();
        canvasOverlay.gameObject.SetActive(false);
    }

    public void EnableUI() {
        canvasOverlay.gameObject.SetActive(true);
    }

    public void UpdatePartyIcons(List<GameObject> party) {
        foreach(Transform child in iconLayout.transform) {
            Destroy(child.gameObject);
        }
        foreach(GameObject member in party) {
            var clone = Instantiate(iconPrefab,iconLayout.transform);
            var partyicon = clone.gameObject.GetComponent<PartyIcon>();
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
