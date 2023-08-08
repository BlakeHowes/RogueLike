using UnityEngine;

[System.Serializable]
public class CellGeneration {
    public int type;
    public Vector3Int position;
    public bool walkable = true;
    public float cost, heuristic, speed;
    public float f {
        get { return cost + heuristic; }
    }

    public CellGeneration parent;

    private CellGeneration() { }

    public CellGeneration(Vector3Int position) {
        this.position = position;
    }
}
