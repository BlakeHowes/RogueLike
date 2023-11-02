using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using System.Linq;
using Unity.Burst;

public class Algorithm {
    public Grid2D grid;

    private List<Cell> openList;
    private List<Cell> closedList;
    public Tilemap walkableTilemap;
    private Algorithm() { }

    public Algorithm(Grid2D grid) {
        this.grid = grid;
       
        walkableTilemap = GridManager.i.floorTilemap;
        openList = new List<Cell>();
        closedList = new List<Cell>();
    }

    public Vector3[] AStarSearch(Vector3Int startpos1, Vector3Int endpos1,bool ignoreEnemies) {
        //START STOPWATCH
        System.Diagnostics.Stopwatch stopwatch = new System.Diagnostics.Stopwatch();
        stopwatch.Start();
        //START STOPWATCH

        var startpos = new Vector3Int(startpos1.x, startpos1.y); 
        var endpos = new Vector3Int(endpos1.x, endpos1.y);
        int range = 12;
        if (startpos == endpos) {
            return null;
        }
        Debug.Log("ASTAR 1 StopWatch:" + stopwatch.Elapsed);
        grid.Generate();
        openList.Clear();
        closedList.Clear();
        Debug.Log("ASTAR 2 StopWatch:" + stopwatch.Elapsed);
        var goTilemap = GridManager.i.goTilemap;
        var goGrid = GridManager.i.GetGoGrid();
        var go = startpos.GameObjectGo();
        if (!go) { return null; }
        var startPosTag = startpos.GameObjectGo().tag;
        Debug.Log("ASTAR 3 StopWatch:" + stopwatch.Elapsed);
        for (int x = Mathf.Clamp(startpos.x - range, 0, grid.width); x < Mathf.Clamp(startpos.x + range, 0, grid.width); x++) {
            for (int y = Mathf.Clamp(startpos.y - range, 0, grid.length); y < Mathf.Clamp(startpos.y + range, 0, grid.length); y++) {
                Vector3Int gameobjectcell = new Vector3Int(x, y);
                if (gameobjectcell == startpos) {
                    continue;
                }
                if (!gameobjectcell.IsWalkable()) {
                    grid.FindCellByPosition(gameobjectcell).walkable = false;
                    continue;
                }

                if (ignoreEnemies) {
                    var target = gameobjectcell.GameObjectGo();
                    if (target) {
                        if (!target.CompareTag(startPosTag)) {
                            grid.FindCellByPosition(gameobjectcell).walkable = false;
                        }
                    }
                    else {
                        grid.FindCellByPosition(gameobjectcell).walkable = true;
                    }
                    continue;
                }

                if (gameobjectcell.GameObjectGo()) {
                    grid.FindCellByPosition(gameobjectcell).walkable = false;
                }
                else {
                    grid.FindCellByPosition(gameobjectcell).walkable = true;
                }
            }
        }
        Debug.Log("ASTAR 4 StopWatch:" + stopwatch.Elapsed);


        var startCell = grid.FindCellByPosition(startpos);
        var goalCell = grid.FindCellByPosition(endpos);

        startCell.heuristic = (endpos - startCell.position).magnitude;
        openList.Add(startCell);
        Debug.Log("ASTAR 5 StopWatch:" + stopwatch.Elapsed);
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
                    var path = ConstructPath(curCell);
                    if(path == null) { return null; }
                    Debug.Log("ASTAR 6 StopWatch:" + stopwatch.Elapsed);
                    path.ToList().ForEach(c => positions.Add(new Vector3(c.position.x, c.position.y, 0)));
                    return positions.ToArray();
                }

                var g = bestCell.cost + (curCell.position - bestCell.position).magnitude;
                var h = (endpos - curCell.position).magnitude;

                if (openList.Contains(curCell) && curCell.f < (g + h))
                    continue;
                if (closedList.Contains(curCell) && curCell.f < (g + h))
                    continue;

                curCell.cost = g;
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

    private Cell GetBestCell() {
        Cell result = null;
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


    private Cell[] ConstructPath(Cell destination) {
        var path = new List<Cell>() { destination };
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
