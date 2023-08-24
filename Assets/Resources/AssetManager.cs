using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class AssetManager {
    readonly List<MechAbstract> mechs = new();
    readonly List<Surface> surfaces = new();
    readonly List<ItemAbstract> items = new();
    readonly List<GameObject> gos = new();
    readonly List<GameObject> characters = new();
    public AssetManager() {
        //LOAD RESOURCES
        var mechResources = Resources.LoadAll<MechAbstract>("Mechs");
        foreach (MechAbstract mech in mechResources) { mechs.Add(mech); }

        var surfaceResources = Resources.LoadAll<Surface>("Surfaces");
        foreach (Surface surface in surfaceResources) { surfaces.Add(surface); }

        var itemResources = Resources.LoadAll<ItemAbstract>("Items");
        foreach (ItemAbstract item in itemResources) { items.Add(item); }

        var goResources = Resources.LoadAll<GameObject>("GameObjects");
        foreach (GameObject go in goResources) {
            Stats stats;
            go.TryGetComponent<Stats>(out stats);
            if (!stats) { continue; }
            gos.Add(go); 
        }

        foreach (GameObject go in gos) {
            if (go.tag == "Enemy"|| go.tag == "Party")
                characters.Add(go);
        }
    }

    public void AddSurface(Surface surface) {
        surfaces.Add(surface);
    }

    public Surface RandomSurface() {
        int i = Random.Range(0, surfaces.Count);
        return surfaces[i];
    }

    public Surface TiletoSurface(TileBase tile) {
        foreach (Surface item in surfaces) {
            if (item.tile == tile) return item;
        }

        Debug.LogError("Cant find Surface " + tile + " on surfaceTilemap, CHECK ACTIVE TILEMAP AND ASSET");
        return null;
    }
    public MechAbstract TiletoMech(TileBase tile) {
        foreach (MechAbstract item in mechs) {
            if (item.tile == tile) return item; }

        Debug.LogError("Cant find Mech " + tile + " on mechTilemap, CHECK ACTIVE TILEMAP AND ASSET");
        return null;
    }
    public ItemAbstract TiletoItem(TileBase tile) {
        foreach (ItemAbstract item in items) {
            if (item.tile == tile) return item; }

        Debug.LogError("Cant find ItemAbstract " + tile + " on itemTilemap, CHECK ACTIVE TILEMAP AND ASSET");
        return null;
    }
    public GameObject TiletoGameObject(TileBase tile) {
        foreach (GameObject go in gos) {
            if (go.GetComponent<Stats>().tile == tile) return go; }

        var gameobject =SearchTileSpriteInstead(tile);
        if (gameobject != null) {
            Debug.Log("Found " + gameobject + " using sprite lookup :)");
            return gameobject; }

        Debug.LogError("Cant find GameObject " + tile + " on goTilemap, CHECK ACTIVE TILEMAP AND ASSET");
        return null;
    }

    public GameObject SearchTileSpriteInstead(TileBase tilebase) {
        var tile = tilebase as Tile;
        if (!tile) { return null; }
        var sprite = tile.sprite;
        foreach (GameObject go in gos) {
            if (go.GetComponent<SpriteRenderer>()) {
                if (go.GetComponent<SpriteRenderer>().sprite == sprite) return go; }
        }
        return null;
    }

    public bool IsDoor(TileBase tile) {
        foreach (var go in gos) {
            if (go.GetComponent<Stats>().tile == tile) {
                if(go.CompareTag("Door"))
                return true;
            }
        }
        return false;
    }

    public bool IsCharacter(TileBase tile) {
        foreach(var character in characters) {
            if(character.GetComponent<Stats>().tile == tile) {
                return true;
            }
        }
        return false;
    }
}
