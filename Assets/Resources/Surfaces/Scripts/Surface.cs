using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

[CreateAssetMenu(fileName = "Surface", menuName = "Surface")]
public class Surface : ScriptableObject
{
    public TileBase tile;
    public Color iconColour = Color.white;
    public List<Combination> combinations = new List<Combination>();
    public List<Ability> abilities = new List<Ability>();
    public StatusEffect StatusEffect;
    [Tooltip("If values are zero, surface will only combine not set on ground")]public Vector2 duration;
    [HideInInspector]public int counter = 0;
    public GameObject effectPrefab;
    GameObject effectClone;
    public Surface dryUpSurface;
    public bool dryUp = true;
    public bool tryToSpread;

    public void Spread(Vector3Int position) {
        if (counter < 2) { return; }
        var walkableTilemap = GridManager.i.floorTilemap;
        var circle = position.Circle(1);
        foreach (var cell in circle) {
            if (!walkableTilemap.GetTile(cell)) { continue; }
            if(GridManager.i.CombineSurface(cell, this)) {
                if(cell.x > position.x || cell.y > position.y) {
                    GridManager.i.GetOrSpawnSurface(cell).counter--;
                }
                continue;
            }
            var targetGo = cell.GameObjectGo();
            if (targetGo) {
                if (targetGo.tag == "Passive") {
                    if(GridManager.i.GetOrSpawnSurface(cell) != this) { GridManager.i.SetSurface(cell, this); }
                    
                    if (cell.x > position.x || cell.y > position.y) {
                        GridManager.i.GetOrSpawnSurface(cell).counter--;
                    }
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
            var surfaceTilemap = GridManager.i.surfaceTilemap;
            var circle = GridManager.i.tools.Circle(1, position);
            foreach (var cell in circle) {
                if (FloorManager.i.IsWall(cell)) { continue; }
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
            GridManager.i.surfaceTilemap.SetColor(position,Color.clear);
        }
        if (tryToSpread) {
            Spread(position);
        }
        DryUp(position);
        



        if (!position.GameObjectGo()) { return; }
        var character = position.GameObjectGo();

        if (StatusEffect) {
            character.GetComponent<Inventory>().AddStatusEffect(position, position, StatusEffect);
        }

        foreach(var ability in abilities) {
            foreach(var actionContainer in ability.actionContainers) {
                actionContainer.action.Condition(position, position, null, null, ability, actionContainer);
            }
        }
    }

    public bool Combine(Vector3Int position,Surface surface) {
        foreach (var combination in combinations) {
            if(!combination.inputSurface) { continue; }
            if (combination.inputSurface.name+"(Clone)" == surface.name||
                combination.inputSurface.name == surface.name + "(Clone)"||
                combination.inputSurface.name == surface.name) {
                GridManager.i.SetSurface(position, combination.resultingSurface);
                if (combination.subItem) { combination.subItem.Call(position, position,null, combination.callType); }
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
    public ItemStatic.CallType callType;
    public ItemAbstract subItem;
}
