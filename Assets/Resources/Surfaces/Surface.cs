using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UIElements;

[CreateAssetMenu(fileName = "Surface", menuName = "Surface")]
public class Surface : ScriptableObject
{
    public TileBase tile;
    public List<Combination> combinations = new List<Combination>();
    public List<ItemAbstract> items = new List<ItemAbstract>();
    public ItemAbstract StatusEffect;
    public Vector2 duration;
    int counter = 0;
    public GameObject effectPrefab;
    GameObject effectClone;
    public bool dryUp = true;
    public Surface dryUpSurface;
    public bool fireSpread;

    public void Spread(Vector3Int position) {
        if (counter == 0) { return; }
        var walkableTilemap = GridManager.i.floorTilemap;
        var circle = position.circle(1);
        Debug.Log("Spread");
        foreach (var cell in circle) {
            if (!walkableTilemap.GetTile(cell)) { continue; }
            GridManager.i.CombineSurface(cell, this);
            var targetGo = cell.gameobjectGO();
            if (targetGo) {
                if (targetGo.GetComponent<Stats>().faction == PartyManager.Faction.Passive) {
                    GridManager.i.SetSurface(cell, this);
                }
            }
        }
    }

    public void DryUp(Vector3Int position) {
        if (counter > Random.Range(duration.x, duration.y)) {
            counter = 0;
            GridManager.i.RemoveSurface(position);
            if (dryUpSurface) { GridManager.i.SetSurface(position, dryUpSurface); }
            return;
        }

        if (dryUp) {
            var floorTilemap = GridManager.i.floorTilemap;
            var surfaceTilemap = GridManager.i.surfaceTilemap;
            var circle = GridManager.i.tools.Circle(1, position);
            foreach (var cell in circle) {
                if (!floorTilemap.GetTile(cell)) { continue; }
                if (surfaceTilemap.GetTile(cell) != tile) {
                    counter++;
                    break;
                }
            }
        }
    }

    public void KillSurface(Vector3Int position) {
        Destroy(effectClone);
    }
    public void Call(Vector3Int position) {
        if(effectClone == null && effectPrefab) {
            effectClone = GridManager.i.InstantiateGo(effectPrefab);
            effectClone.transform.position = position + new Vector3(0.5f,0.5f);
            effectClone.transform.parent = null;
        }
        if (fireSpread) { Spread(position); }
        DryUp(position);
        



        if (!position.gameobjectGO()) { return; }
        var character = position.gameobjectGO();
        if (StatusEffect) {
            character.GetComponent<Inventory>().AddStatusEffect(StatusEffect, position);
        }
    }

    public bool Combine(Vector3Int position,Surface surface) {
        foreach (var combination in combinations) {
            Debug.Log("Combine: "+combination.inputSurface.name + "(clone)"+" " + surface.name);
            if (combination.inputSurface.name+"(Clone)" == surface.name) {
                GridManager.i.SetSurface(position, combination.resultingSurface);
                return true;
            }
            if (combination.inputSurface.name == surface.name + "(Clone)") {
                GridManager.i.SetSurface(position, combination.resultingSurface);
                return true;
            }
            if (combination.inputSurface.name == surface.name) {
                GridManager.i.SetSurface(position, combination.resultingSurface);
                return true;
            }

        }
        return false;
    }
}
[System.Serializable]
public struct Combination {
    public Surface inputSurface;
    public Surface resultingSurface;
}
