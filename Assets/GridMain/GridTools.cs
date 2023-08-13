using System.Collections;
using System.Collections.Generic;
using Unity.Burst;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Tilemaps;

public class GridTools
{
    public GlobalValues globalValues;

    public GridTools(GlobalValues globalValues) {
        this.globalValues = globalValues;
    }

    public bool InBounds(Vector3Int position) {
        if (position.x < 0 || position.x >= globalValues.width || position.y < 0 || position.y >= globalValues.height) {
            return false;
        }
        return true;
    }

    public Vector3Int Difference(Vector3Int position1,Vector3Int position2) {
        Vector3 difference = new Vector3(Mathf.Abs(position1.x - position2.x), Mathf.Abs(position1.y - position2.y), 0);
        return difference.FloorToInt();
    }

    public bool InRange(Vector3Int position,Vector3Int origin, int range) {
        var cells = new List<Vector3Int>();
        if (range == 1) { cells = MeeleeRange(origin); }
        else { cells = Circle(range, origin); }
        if (cells.Contains(position)) { return true; }
        return false;
    }

    public bool InMeeleeRange(Vector3Int position, Vector3Int origin) {
        var cells = MeeleeRange(origin);
        if (cells.Contains(position)) { return true; }
        return false;
    }

    [BurstCompile]public List<Vector3Int> Circle(int radius,Vector3Int position) {
        List<Vector3Int> cellsInsideShape = new List<Vector3Int>();
        for (int y = -radius; y <= radius; y++) {
            for (int x = -radius; x <= radius; x++) {
                if (x * x + y * y <= radius * radius) {
                    var cell = new Vector3Int(position.x +x, position.y+y, 0);
                    if (cell.InBounds()) {
                        cellsInsideShape.Add(cell);
                    }
                }
            }
        }
        return cellsInsideShape;
    }

    public List<Vector3Int> Line(int length,Vector3Int position,Vector3Int target) {
        List<Vector3Int> cellsInsideShape = new List<Vector3Int>();
        int x1 = target.x;
        int y1 = target.y;

        int dx = Mathf.Abs(x1 - position.x);
        int dy = Mathf.Abs(y1 - position.y);
        int x = position.x;
        int y = position.y;
        int n = 1 + dx + dy; //Add 20 or something to make it not stop at mouse
        int x_inc = (x1 > position.x) ? 1 : -1;
        int y_inc = (y1 > position.y) ? 1 : -1;
        int error = dx - dy;
        dx *= 2;
        dy *= 2;

        for (; n > 0; --n) {
            var cell = new Vector3Int(x, y, 0);
            if (cell.InBounds()) {
                cellsInsideShape.Add((cell));

            }
            if (error > 0) {
                x += x_inc;
                error -= dy;
            }
            else if (error < 0) {
                y += y_inc;
                error += dx;
            }
            else if (error == 0) {
                // Ensure that perfectly diagonal lines don't take up more tiles than necessary.
                x += x_inc;
                y += y_inc;
                error -= dy;
                error += dx;
                --n;
            }
        }
        return cellsInsideShape;
    }

    [BurstCompile]public List<Vector3Int> BresenhamLine(int x0, int y0, int x1, int y1) {
        List<Vector3Int> cellsInsideShape = new List<Vector3Int>();
        int dx = Mathf.Abs(x1 - x0), sx = x0 < x1 ? 1 : -1;
        int dy = -Mathf.Abs(y1 - y0), sy = y0 < y1 ? 1 : -1;
        int err = dx + dy, e2; /* error value e_xy */

        for (; ; ) {  /* loop */
            cellsInsideShape.Add(new Vector3Int(x0, y0));
            if (x0 == x1 && y0 == y1) break;
            e2 = 2 * err;
            if (e2 >= dy) { err += dy; x0 += sx; } /* e_xy+e_x > 0 */
            if (e2 <= dx) { err += dx; y0 += sy; } /* e_xy+e_y < 0 */
        }
        cellsInsideShape.Remove(cellsInsideShape[0]);
        return cellsInsideShape;
    }

    public List<Vector3Int> BresenhamLineLength(int x0, int y0, int x1, int y1,int length) {
        List<Vector3Int> cellsInsideShape = new List<Vector3Int>();
        int dx = Mathf.Abs(x1 - x0), sx = x0 < x1 ? 1 : -1;
        int dy = -Mathf.Abs(y1 - y0), sy = y0 < y1 ? 1 : -1;
        int err = dx + dy, e2; /* error value e_xy */
        int i = 0;
        for (; ; ) {  /* loop */
            cellsInsideShape.Add(new Vector3Int(x0, y0));
            if (i >= length) break;
            e2 = 2 * err;
            if (e2 >= dy) { err += dy; x0 += sx; } /* e_xy+e_x > 0 */
            if (e2 <= dx) { err += dx; y0 += sy; } /* e_xy+e_y < 0 */
            i++;
        }
        cellsInsideShape.Remove(cellsInsideShape[0]);
        return cellsInsideShape;
    }

    [BurstCompile]public void FloodFill(Vector3Int position, int[,] fogMap,int fillTotal,TileBase tile,Tilemap tilemap) {
        Queue<Vector3Int> cellstocheck = new Queue<Vector3Int>();
        cellstocheck.Enqueue(position);
        List<Vector3Int> WallsToClear = new List<Vector3Int>();
        HashSet<Vector3Int> checkedCells = new HashSet<Vector3Int>();
        Vector3Int offset = new Vector3Int(0, -1);
        Vector3Int offset2 = new Vector3Int(0, -2);
        int breaker = 0;
        var walkableTilemap = GridManager.i.floorTilemap;
        while(cellstocheck.TryDequeue(out Vector3Int checkpos)) {
            breaker++;
            if(breaker > fillTotal) {
                break;
            }

            for (int x = checkpos.x - 1; x <= checkpos.x + 1; x++) {
                for (int y = checkpos.y - 1; y <= checkpos.y + 1; y++) {
                    Vector3Int pos = new Vector3Int(x, y);
                    if (InBounds(pos)) {
                        if (x == checkpos.x && y == checkpos.y) {
                            continue;
                        }
                    }
               
                    if (checkedCells.Contains(pos)) {
                        continue;
                    }
                    GridManager.i.InstantiateCell(pos);
                    checkedCells.Add(pos);
                    if(fogMap[x, y] == 0) {
                        tilemap.SetTile(pos, tile);
                        continue;
                    }
                    if (fogMap[x, y] == 1) {
                        tilemap.SetTile(pos, tile);
                        if(tilemap.GetTile(pos + offset)) {
                            tilemap.SetTile(pos + offset, tile);
                            tilemap.SetTile(pos + new Vector3Int(1,-1), tile);
                            tilemap.SetTile(pos + new Vector3Int(-1,-1), tile);
                            tilemap.SetTile(pos + new Vector3Int(1, -2), tile);
                            tilemap.SetTile(pos + new Vector3Int(-1, -2), tile);
                            tilemap.SetTile(pos + offset2, tile);
                        }

                        continue;
                    }
                    if (fogMap[x,y] == 2) {
                        tilemap.SetTile(pos, tile);
                        cellstocheck.Enqueue(pos);
                        continue;
                    }
                }
            }
        }
    }

    public List<Vector3Int> MeeleeRange(Vector3Int position) {
        List<Vector3Int> cells = new List<Vector3Int>();
        for (int x = position.x - 1; x <= position.x + 1; x++) {
            for (int y = position.y - 1; y <= position.y + 1; y++) {
                cells.Add(new Vector3Int(x, y));
            }
        }
        return cells;
    }
}
