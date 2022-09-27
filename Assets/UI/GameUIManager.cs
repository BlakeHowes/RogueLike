using System.Collections;
using System.Collections.Generic;
using UnityEngine;
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
    public void Awake() {
        i = this;
    }
    public void HighlightMouseTile(Vector3Int position) {
        uiTilemap.ClearAllTiles();
        uiTilemap.SetTile(position, mouseHighlight);
    }

    public void DisableUI() {
        uiTilemap.ClearAllTiles();
        canvasOverlay.gameObject.SetActive(false);
    }

    public void EnableUI() {
        canvasOverlay.gameObject.SetActive(true);
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
