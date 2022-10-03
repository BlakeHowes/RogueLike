using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using static PartyManager;

public class GridTools
{
    public bool InBounds(Vector3Int position) {
        if (position.x < 0 || position.x >= GridManager.i.width || position.y < 0 || position.y >= GridManager.i.height) {
            return false;
        }
        return true;
    }

    public Vector3Int Difference(Vector3Int position1,Vector3Int position2) {
        Vector3 difference = new Vector3(Mathf.Abs(position1.x - position2.x), Mathf.Abs(position1.y - position2.y), 0);
        return difference.FloorToInt();
    }

    public List<Vector3Int> Circle(int radius,Vector3Int position) {
        List<Vector3Int> cellsInsideShape = new List<Vector3Int>();
        for (int y = -radius; y <= radius; y++) {
            for (int x = -radius; x <= radius; x++) {
                if (x * x + y * y <= radius * radius) {
                    var cell = new Vector3Int(position.x +x, position.y+y, 0);
                    if (cell.inbounds()) {
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
            if (cell.inbounds()) {
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

    public List<Vector3Int> BresenhamLine(int x0, int y0, int x1, int y1) {
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

    public void FloodFill(Vector3Int position,Tilemap goTilemap,Tilemap fogTilemap) {
        Queue<Vector3Int> cellstocheck = new Queue<Vector3Int>();
        cellstocheck.Enqueue(position);
        List<Vector3Int> WallsToClear = new List<Vector3Int>();
        int breaker = 0;
        var checkpos = position;
        while(cellstocheck.TryDequeue(out checkpos)) {

            breaker++;
            if(breaker > 1000) {
                Debug.Log("Flood fill break");
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
                    if (fogTilemap.GetTile(pos)) {
                        if (goTilemap.GetTile(pos)) {
                            WallsToClear.Add(pos);
                        }
                        else {
                            fogTilemap.SetTile(pos, null);
                            cellstocheck.Enqueue(pos);
                        }
                    }
                }
            }
        }
        foreach (Vector3Int pos in WallsToClear) {
            fogTilemap.SetTile(pos, null);
        }
    }
}
