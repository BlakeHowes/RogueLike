using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

public class ActionPointStack : MonoBehaviour
{
    public List<ActionPoint> basePoints = new List<ActionPoint>();
    public List<ActionPoint> points = new List<ActionPoint>();
    private Stats stats;
    public void OnEnable() {
        stats = GetComponent<Stats>();  
    }
    public void UseActionPoints(int amount) {
        APElementCombiner.elements.Clear();
        if (stats.state == PartyManager.State.Idle) { return; }
        int amountRemoved = 0;
        for (int i = points.Count -1; i >= 0; i--) {
            if (points[i].type == ActionPointType.Movement) {continue;}
            if (points[i].type == ActionPointType.Custom) {
                CallItem(points[i].item,false);
            }
            points.Remove(points[i]);
            amountRemoved++;
            if(amountRemoved >= amount) {
                break;
            }
        }
        APElementCombiner.CallElement();
    }

    public bool IsMySkillTargetingMe() {
        var item = MouseManager.i.itemSelected;
        if (item) {
            if (item is Skill) {
                var skill = item as Skill;
                if (skill.rangeType == Skill.RangeType.ClickAnywhere) {
                    return true;
                }
            }
        }
        return false;
    }


    public void CallItem(ItemAbstract item,bool walk) {
        var position = MouseManager.i.MousePositionOnGrid();
        var origin = gameObject.Position();
        if (walk || IsMySkillTargetingMe()) { position = MouseManager.i.positionBeforeWalk; }

        if (item is ActionPointElement) {
            var element = item as ActionPointElement;
            APElementCombiner.AddElement(element.surface, position, origin,gameObject);
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
        APElementCombiner.elements.Clear();
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
                CallItem(points[i].item,true);
            }
            points.Remove(points[i]);
            amountRemoved++;
            if (amountRemoved >= amount) {
                return;
            }
        }
        APElementCombiner.CallElement();
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
    public ActionPoint(ActionPointType type, ItemAbstract item) { 
    this.type = type;
    this.item = item;
    }
}
