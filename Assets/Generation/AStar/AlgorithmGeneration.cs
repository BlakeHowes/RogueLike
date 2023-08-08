using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using System.Linq;
public class AlgorithmGeneration {
    private Grid2DGeneration grid;
    private List<CellGeneration> openList;
    private List<CellGeneration> closedList;
    private AlgorithmGeneration() { }

    public AlgorithmGeneration(Grid2DGeneration grid) {
        this.grid = grid;
        openList = new List<CellGeneration>();
        closedList = new List<CellGeneration>();
    }


    public Vector3[] AStarSearch(Vector3Int startpos1, Vector3Int endpos1) {
        var startpos = new Vector3Int(startpos1.x, startpos1.y);
        var endpos = new Vector3Int(endpos1.x, endpos1.y);

        if (startpos == endpos) {
            return null;
        }
        openList.Clear();
        closedList.Clear();
        grid.Generate();
        Vector3Int gameobjectcell = Vector3Int.zero;

        var startCell = grid.FindCellByPosition(startpos);
        var goalCell = grid.FindCellByPosition(endpos);

        startCell.heuristic = (endpos - startCell.position).magnitude;
        openList.Add(startCell);
        while (openList.Count > 0) {
            var bestCell = GetBestCell();
            openList.Remove(bestCell);

            var neighbours = grid.GetMooreNeighbours(bestCell);
            for (int i = 0; i < 8; i++) {
                var curCell = neighbours[i];

                if (curCell == null)
                    continue;
                if (curCell == goalCell) {
                    curCell.parent = bestCell;
                    var positions = new List<Vector3>();
                    ConstructPath(curCell).ToList().ForEach(c => positions.Add(new Vector3(c.position.x, c.position.y, 0)));
                    return positions.ToArray();
                }

                var g = bestCell.cost + (curCell.position - bestCell.position).magnitude;
                var h = (endpos - curCell.position).magnitude;

                if (openList.Contains(curCell) && curCell.f < (g + h))
                    continue;
                if (closedList.Contains(curCell) && curCell.f < (g + h))
                    continue;

                curCell.cost = g + curCell.speed;
                curCell.heuristic = h;
                curCell.parent = bestCell;
                if (!neighbours[i].walkable) {
                    closedList.Add(neighbours[i]);
                    continue;
                }
                if (!openList.Contains(curCell))
                    openList.Add(curCell);
            }

            if (!closedList.Contains(bestCell))
                closedList.Add(bestCell);
        }

        return null;
    }

    private CellGeneration GetBestCell() {
        CellGeneration result = null;
        float currentF = float.PositiveInfinity;

        for (int i = 0; i < openList.Count; i++) {
            var cell = openList[i];

            if (cell.f < currentF) {
                currentF = cell.f;
                result = cell;
            }
        }

        return result;
    }


    private CellGeneration[] ConstructPath(CellGeneration destination) {
        var path = new List<CellGeneration>() { destination };
        int breaker = 0;
        var current = destination;
        while (current.parent != null) {
            breaker++;
            if (breaker > 100) {
                Debug.LogError("Cannot Construct Path");
                return null;
            }
            current = current.parent;
            path.Add(current);
        }

        path.Reverse();
        return path.ToArray();
    }
}
