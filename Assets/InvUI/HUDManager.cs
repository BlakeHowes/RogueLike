using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class HUDManager : MonoBehaviour
{
    public static HUDManager i;
    public Tilemap inventoryTilemap;
    public void Awake() {
        i = this;
    }

    public void ToggleInventory() {
        inventoryTilemap.gameObject.SetActive(!inventoryTilemap.gameObject.activeSelf);
    }

    public void CreateAPIcons() {

    }
}
