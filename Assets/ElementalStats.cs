using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ElementalStats : MonoBehaviour
{
    public List<ItemAbstract> immunites;
    public List<Action> actionImmunities;
    public List<ElementalInteractions> elementalInteractions;
    public bool IsImmune(ItemAbstract item) {
        if (!item) { return false; }
        foreach (var immunity in immunites) {
            if (immunity.GetType() == item.GetType()) { return true; }
        }
        return false;
    }

    public bool IsImmune(Action item) {
        if (!item) { return false; }
        foreach (var immunity in actionImmunities) {
            if (immunity.GetType() == item.GetType()) { return true; }
        }
        return false;
    }
}
[System.Serializable]
public struct ElementalInteractions {
    public Surface surface;
    public float damageMultiplier;
}
