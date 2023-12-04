using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
public class ActionPointStack : MonoBehaviour
{
    public List<ActionPoint> basePoints = new List<ActionPoint>();
    public List<ActionPoint> points = new List<ActionPoint>();

    public void ChangeActionPoints(int amount) {
        int amountRemoved = 0;
        for (int i = points.Count -1; i >= 0; i--) {
            if (points[i].type == ActionPointType.Movement) {continue;}
            if (points[i].type == ActionPointType.Custom) {
                CallItem(points[i].item);
            }
            points.Remove(points[i]);
            amountRemoved++;
            if(amountRemoved >= amount) {
                break;
            }
        }
    }

    public void CallItem(ItemAbstract item) {
        var mousePos = MouseManager.i.MousePositionOnGrid();
        var origin = gameObject.Position();
        var position = origin; 
        if(item is Weapon) {
            item.Call(mousePos, origin, gameObject, CallType.OnActivate);
            return;
        }
        item.Call(position, origin, gameObject, CallType.OnActivate);
    }

    public bool AmITotallyOutOfActionPoints() {
        if (points.Count <= 0) {
            return true;
        }
        return false;
    }

    public void UseWalkActionPoints(int amount) {
        int amountRemoved = 0;
        for (int i = points.Count - 1; i >= 0; i--) {
            if (points[i].type != ActionPointType.Movement) { continue; }
            points.Remove(points[i]);
            amountRemoved++;
            if (amountRemoved >= amount) {
                return;
            }
        }
        for (int i = points.Count - 1; i >= 0; i--) {
            if (points[i].type == ActionPointType.Custom) {
                CallItem(points[i].item);
            }
            points.Remove(points[i]);
            amountRemoved++;
            if (amountRemoved >= amount) {
                return;
            }
        }
    }

    public bool DoIHaveActionPointsToWalk(int amount) {
        if(points.Count >= amount) { return true; }
        return false;
    }

    public bool DoIHavenEnoughNormalActionPoints(int amount) {
        var normalPoints = 0;
        foreach (var point in points) {
            if (point.type != ActionPointType.Movement) {
                normalPoints++; 
            }
            if (normalPoints >= amount) { return true; }
        }
        return false;
    }

    public void ResetActionPoints() {
        points.Clear();
        foreach (var point in basePoints) {
            points.Add(point);
        }
    }
}
[System.Serializable]
public class ActionPoint {
    public ActionPointType type;
    public ItemAbstract item;
}
