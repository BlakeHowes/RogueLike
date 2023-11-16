using UnityEngine;

[System.Serializable]
public class Cell {
    public Vector3Int position;
    public bool walkable = true;
    public float cost, heuristic;
    public float f {
        get { return cost + heuristic; }
    }

    public Cell parent;

    private Cell() { }

    public Cell(Vector3Int position) {
        this.position = position;
    }

    public void SetPosition(Vector3Int position) {
        this.position = position;
    }
}
