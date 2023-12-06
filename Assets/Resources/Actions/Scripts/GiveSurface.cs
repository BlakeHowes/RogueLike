using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using static DealDamage;

[CreateAssetMenu(fileName = "GiveSurface", menuName = "Actions/GiveSurface")]
public class GiveSurface : Action,IDescription {
    [HideInInspector]public Surface surface;
    [HideInInspector] public int radius;
    public bool area = false;
    public bool randomSurface = false;
    public bool justCombine = false;
    public bool newSurface = false;

    public void ConditionWithoutAC(Vector3Int position) {
        this.position = position;
        if (randomSurface) { surface = GridManager.i.assets.RandomSurface(); }
        this.AddToStack();
    }
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = position;
        surface = actionContainer.surfaceValue;
        radius = actionContainer.intValue;
        if (randomSurface) { surface = GridManager.i.assets.RandomSurface(); }
        if (newSurface) { 
            surface = GridManager.i.InstaniateSurface(surface,actionContainer.colorValue); 
            surface.name = parentItem.name;
            foreach(var parentAbility in parentItem.abilities) {
                if(parentAbility != ability) {
                    surface.abilities.Add(parentAbility);
                }
            }
        }
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        var circle = position.PositionsInSight(radius);
        if(surface == null && area == false) { GridManager.i.SetSurface(position, null);yield break; }
        if (area) {
            foreach (var cell in circle) {
                GridManager.i.CombineOrSetSurface(cell, surface,justCombine);
            }
        }
        else {
            GridManager.i.CombineOrSetSurface(position, surface, justCombine);
        }

        yield return null;
    }

    public string Description(ItemAbstract parentItem, ActionContainer actionContainer) {
        if(actionContainer.surfaceValue == null) { Debug.LogError("Forgot to set surface in " + parentItem.name); return "SURFACE MISSING!!!"; }
        var description = "Creates " + actionContainer.surfaceValue.name;
        if (area) { description += " in an area of " + radius; }
        return description;
    }
}
