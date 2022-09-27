using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class AssetManager {
    List<ItemAbstract> mechs = new List<ItemAbstract>();
    List<ItemAbstract> items = new List<ItemAbstract>();
    List<GameObject> gos = new List<GameObject>();
    List<GameObject> characters = new List<GameObject>();

    public AssetManager() {
        //LOAD RESOURCES
        var mechResources = Resources.LoadAll<ItemAbstract>("Mechs");
        foreach (ItemAbstract mech in mechResources) {
            mechs.Add(mech);
        }
        var itemResources = Resources.LoadAll<ItemAbstract>("Items");
        foreach (ItemAbstract item in itemResources) {
            items.Add(item);
        }
        var goResources = Resources.LoadAll<GameObject>("GameObjects");
        foreach (GameObject go in goResources) {
            gos.Add(go);
        }
        foreach (GameObject go in goResources) {
            if(go.GetComponent<Stats>().faction == PartyManager.Faction.Enemy)
                characters.Add(go);
        }
    }
    public ItemAbstract TiletoMech(Tile tile) {
        foreach (ItemAbstract item in mechs) {
            if (item.tile == tile)
                return item;
        }
        Debug.LogError("Cant find Mech corrosponding with "+ tile + " in AssetManager CHECK TILEMAP LAYER AND RESOURCE");
        return null;
    }
    public ItemAbstract TiletoItem(Tile tile) {
        foreach (ItemAbstract item in items) {
            if (item.tile == tile)
                return item;
        }
        Debug.LogError("Cant find Item corrosponding with "+ tile + " in AssetManager CHECK TILEMAP LAYER AND RESOURCE");
        return null;
    }
    public GameObject TiletoGameObject(Tile tile) {
        foreach (GameObject go in gos) {
            if (go.GetComponent<Stats>().tile == tile)
                return go;
        }

        var gameobject =SearchTileSpriteInstead(tile);
        if (gameobject != null) {
            Debug.Log("Found " + gameobject + " using sprite lookup :)");
            return gameobject;
        }

        Debug.LogError("Cant find GameObject corrosponding with " + tile + " in AssetManager CHECK TILEMAP LAYER AND RESOURCE");
        return null;
    }

    public GameObject SearchTileSpriteInstead(Tile tile) {
        var sprite = tile.sprite;
        foreach (GameObject go in gos) {
            if (go.GetComponent<SpriteRenderer>()) {
                if (go.GetComponent<SpriteRenderer>().sprite == sprite)
                    return go;
            }
        }
        return null;
    }

    public bool IsCharacter(Tile tile) {
        foreach(var character in characters) {
            if(character.GetComponent<Stats>().tile == tile) {
                return true;
            }
        }
        return false;
    }
}
