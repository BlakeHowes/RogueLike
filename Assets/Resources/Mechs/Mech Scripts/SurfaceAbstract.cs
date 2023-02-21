using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public abstract class SurfaceAbstract : ScriptableObject
{
    public TileBase tile;
    public abstract void Call(Vector3Int position);
}
