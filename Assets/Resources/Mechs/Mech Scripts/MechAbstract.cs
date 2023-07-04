using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using static MechStatic;
public abstract class MechAbstract : ScriptableObject {
    public TileBase tile;
    public abstract void Call(Vector3Int position,Signal signal);
}

public static class MechStatic {
    public enum Signal {
        Tick,
        ClickOnWhileStandingOntopOf,
        ItemThrownOnto
    }
}
