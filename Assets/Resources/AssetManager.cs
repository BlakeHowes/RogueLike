using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class AssetManager {
    List<SurfaceAbstract> mechs = new List<SurfaceAbstract>();
    List<Surface> surfaces = new List<Surface>();
    List<ItemAbstract> items = new List<ItemAbstract>();
    List<GameObject> gos = new List<GameObject>();
    List<GameObject> characters = new List<GameObject>();
    List<GameObject> walls = new List<GameObject>();
    public AssetManager() {
        //LOAD RESOURCES
        var mechResources = Resources.LoadAll<SurfaceAbstract>("Mechs");
        foreach (SurfaceAbstract mech in mechResources) { mechs.Add(mech); }

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
            var faction = go.GetComponent<Stats>().faction;
            if (faction == PartyManager.Faction.Enemy|| faction==PartyManager.Faction.Party)
                characters.Add(go);

            if (faction == PartyManager.Faction.Wall)
                walls.Add(go);
        }
    }

    public Surface TiletoSurface(TileBase tile) {
        foreach (Surface item in surfaces) {
            if (item.tile == tile) return item;
        }

        Debug.LogError("Cant find Surface corrosponding with " + tile + " in AssetManager CHECK TILEMAP LAYER AND RESOURCE");
        return null;
    }
    public SurfaceAbstract TiletoMech(TileBase tile) {
        foreach (SurfaceAbstract item in mechs) {
            if (item.tile == tile) return item; }

        //Debug.LogError("Cant find Mech corrosponding with "+ tile + " in AssetManager CHECK TILEMAP LAYER AND RESOURCE");
        return null;
    }
    public ItemAbstract TiletoItem(TileBase tile) {
        foreach (ItemAbstract item in items) {
            if (item.tile == tile) return item; }

        Debug.LogError("Cant find Item corrosponding with "+ tile + " in AssetManager CHECK TILEMAP LAYER AND RESOURCE");
        return null;
    }
    public GameObject TiletoGameObject(TileBase tile) {
        foreach (GameObject go in gos) {
            if (go.GetComponent<Stats>().tile == tile) return go; }

        var gameobject =SearchTileSpriteInstead(tile);
        if (gameobject != null) {
            Debug.Log("Found " + gameobject + " using sprite lookup :)");
            return gameobject; }

        Debug.LogError("Cant find GameObject corrosponding with " + tile + " in AssetManager CHECK TILEMAP LAYER AND RESOURCE");
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

    public bool IsCharacter(TileBase tile) {
        foreach(var character in characters) {
            if(character.GetComponent<Stats>().tile == tile) {
                return true;
            }
        }
        return false;
    }

    public bool IsWall(TileBase tile) {
        foreach (var character in walls) {
            if (character.GetComponent<Stats>().tile == tile) {
                return true;
            }
        }
        return false;
    }
}
