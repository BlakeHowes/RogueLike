using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Tilemaps;
using DungeonGen;

public class RoomGenerator : MonoBehaviour {
    public static RoomGenerator i;
    public int width;
    public int height;
    public int startRadius = 4;
    public int roomSizeX = 5;
    public int roomSizeY = 7;
    [Range(0, 2.5f)] public float spacing = 1;
    public int roomScaleVariation = 14;
    public int roomRatioVariation = 20;
    public int roomTotal = 30;
    public float mainRoomSizeThreshhold = 19;
    public float secondaryRoomMaxDistance = 8;
    public int loops = 1;
    public float waitTime = 0.8f;
    public GameObject box;
    private List<Bounds> rooms = new List<Bounds>();
    private List<GameObject> boxes = new List<GameObject>();

    public TileBase floorTile;
    public TileBase wallTile;
    public TileBase doorTile;
    public TileBase entranceTile;
    public TileBase exitTile;
    public Tilemap floorTilemap;
    public Tilemap goTilemap;
    public Tilemap mechTilemap;


    private HashSet<Point> points;
    private List<Edge> tree = new List<Edge>();
    private List<Vector3IntPair> corridors = new List<Vector3IntPair>();

    Vector3Int up = new Vector3Int(0, 1);
    Vector3Int down = new Vector3Int(0, -1);
    Vector3Int right = new Vector3Int(1, 0);
    Vector3Int left = new Vector3Int(-1, 0);
    public void Awake() {
        i = this;
    }
    public void Start() {
        var values = Manager.GetGlobalValues();
        width = values.width;
        height = values.height;
        StartCoroutine(Main());
    }

    public IEnumerator Main() {
        foreach (var box in boxes) {
            Destroy(box.gameObject);
        }

        floorTilemap.ClearAllTiles();
        goTilemap.ClearAllTiles();
        boxes.Clear();
        rooms.Clear();
        points = new HashSet<Point>();
        rooms.Clear();
        corridors.Clear();
        tree.Clear();

        Generate();
        yield return new WaitForSeconds(waitTime);
        var grid = CreateMainRooms();
        RemoveDoubleWalls(grid);
        CreateEntranceExit();
        grid = CreateCorridors(tree, grid);
        floorTilemap.ClearAllTiles();
        GridToTilemap(grid);
        //GridManager.i.BeginGame();
    }

    public void OnDrawGizmos() {
        foreach (var pair in corridors) {
            Gizmos.color = Color.red;
            Gizmos.DrawLine(pair.a, pair.b);
        }
        if (tree != null) {
            foreach (var edge in tree) {
                Gizmos.color = Color.blue;
                Gizmos.DrawLine(new Vector3(edge.a.x, edge.a.y), new Vector3(edge.b.x, edge.b.y));
            }
        }
    }

    public void RemoveDoubleWalls(Grid2DGeneration grid) {
        List<CellGeneration> cells = new List<CellGeneration>();
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                var pos = new Vector3Int(x, y);
                var cell = grid.FindCellByPosition(pos);
                var count = grid.GetNeighbourCount(cell);
                if (count.x == 10) {
                    if (grid.FindCellByPosition(pos + left).type == 1) { cells.Add(cell); }
                }
            }
        }
        foreach (var cell in cells) { cell.type = 1; }
        cells.Clear();
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                var pos = new Vector3Int(x, y);
                var cell = grid.FindCellByPosition(pos);
                var count = grid.GetNeighbourCount(cell);
                if (count.y == 10) {
                    if (grid.FindCellByPosition(pos + down).type == 1) { cells.Add(cell); }
                }
            }
        }


        foreach (var cell in cells) { cell.type = 1; }
    }

    public void GridToTilemap(Grid2DGeneration grid) {

        for (int x = 0; x < width - 1; x++) {
            for (int y = 0; y < height - 1; y++) {
                var pos = new Vector3Int(x, y);
                var cell = grid.FindCellByPosition(pos);

                if (cell.type == 1) {
                    if (grid.IsOccludedByWall(cell))
                        cell.type = 0;
                }

                if (cell.type == 3) {
                    grid.RemoveWallsBelowCell(cell);
                }

                if (cell.type == 4) {

                    grid.FillNeighbours(cell, 1);
                    grid.RemoveWallsBelowCell(cell);
                }
            }
        }

        for (int x = 0; x < width - 1; x++) {
            for (int y = 0; y < height - 1; y++) {
                var pos = new Vector3Int(x, y);
                var cell = grid.FindCellByPosition(pos);

                if (cell.type == 0) {
                    if (grid.FillGapsInWall(cell)) {
                        cell.type = 2;
                    }
                }
                if (cell.type == 4) {
                    floorTilemap.SetTile(pos, floorTile);
                }
                if (cell.type == 1) {
                    if (!grid.IsOccludedByWall(cell))
                        floorTilemap.SetTile(pos, floorTile);
                }
                if (cell.type == 2) { goTilemap.SetTile(pos, wallTile); }
                if (cell.type == 3) {
                    goTilemap.SetTile(pos, doorTile);
                    floorTilemap.SetTile(pos, floorTile);
                }
            }
        }
    }

    public void Generate() {
        var offset = new Vector2(width / 2, height / 2);
        for (int i = 0; i < roomTotal; i++) {
            var pos = Random.insideUnitCircle * startRadius + offset;
            var boxClone = Instantiate(box);
            boxClone.transform.position = pos;
            if (spacing != 1) { boxClone.GetComponent<CircleCollider2D>().radius *= spacing; }
            var scaleVariation = Random.Range(0, roomScaleVariation);
            var ratioVariation = Random.Range(0, roomRatioVariation);
            int roll = Random.Range(0, 2);
            Vector3 scale = Vector3.zero;
            if (roll == 1) { scale = new Vector3(roomSizeX + scaleVariation + ratioVariation, roomSizeY + scaleVariation); }
            else {
                scale = new Vector3(roomSizeX + scaleVariation, roomSizeY + scaleVariation + ratioVariation);
            }

            boxClone.transform.localScale = scale;
            boxes.Add(boxClone);
        }
    }

    public Grid2DGeneration CreateMainRooms() {
        var grid = new Grid2DGeneration(width, height);
        grid.Initialize();
        grid.Generate();
        foreach (var box in boxes) {
            Bounds bounds = new Bounds(box.transform.position, new Vector3(box.transform.localScale.x, box.transform.localScale.y));
            if (box.transform.localScale.magnitude < mainRoomSizeThreshhold) { rooms.Add(bounds); continue; }
            points.Add(new Point(Mathf.FloorToInt(bounds.center.x), Mathf.FloorToInt(bounds.center.y)));
            RasterizeRoom(bounds, grid);
        }
        TriangulateAndTree();
        return grid;
    }

    // 0 = empty
    // 1 = floor
    // 2 = wall
    // 3 = door
    // 4 = corridor

    public void RasterizeRoom(Bounds bounds, Grid2DGeneration grid) {
        var boundsMinX = Mathf.FloorToInt(bounds.min.x);
        var boundsMinY = Mathf.FloorToInt(bounds.min.y);
        var boundsMaxX = Mathf.FloorToInt(bounds.max.x);
        var boundsMaxY = Mathf.FloorToInt(bounds.max.y);

        grid.FindCellByPosition(new Vector3Int(boundsMinX, boundsMinY)).walkable = false;
        grid.FindCellByPosition(new Vector3Int(boundsMinX, boundsMaxY)).walkable = false;
        grid.FindCellByPosition(new Vector3Int(boundsMaxX, boundsMinY)).walkable = false;
        grid.FindCellByPosition(new Vector3Int(boundsMaxX, boundsMaxY)).walkable = false;

        for (int x = boundsMinX; x <= boundsMaxX; x++) {
            for (int y = boundsMinY; y <= boundsMaxY; y++) {
                var pos = new Vector3Int(Mathf.FloorToInt(x), Mathf.FloorToInt(y));
                var cell = grid.FindCellByPosition(pos);
                if (cell.type != 0) { continue; }
                if (pos.x == boundsMinX || pos.y == boundsMinY ||
                    pos.x == boundsMaxX || pos.y == boundsMaxY) {
                    cell.type = 2;
                    cell.speed = 2;
                    continue;
                }
                cell.type = 1;
            }
        }
    }

    public void CreateEntranceExit() {
        var roomCenters = points.ToList();
        var startCenter = new Vector3Int(roomCenters[0].x, roomCenters[0].y);
        mechTilemap.SetTile(startCenter, entranceTile);

        Point furthestRoom = roomCenters[0];
        float distance = 0f;
        foreach (var center in roomCenters) {
            var distanceToCenter = Vector3.Distance(new Vector3Int(center.x, center.y), startCenter);
            if (distanceToCenter > distance) {
                distance = distanceToCenter;
                furthestRoom = center;
            }
        }
        mechTilemap.SetTile(new Vector3Int(furthestRoom.x, furthestRoom.y), exitTile);
    }

    public Grid2DGeneration CreateCorridors(List<Edge> edges, Grid2DGeneration grid) {
        foreach (var edge in edges) {
            var firstVert = edge.a;
            var secondVert = edge.b;

            Vector3Int firstPoint = new Vector3Int(firstVert.x, firstVert.y);
            Vector3Int SecondPoint = new Vector3Int(secondVert.x, secondVert.y);
            int roll = Random.Range(0, 2);
            int direction = 1;
            if (roll == 0) { direction = -1; }
            Vector3 rightAnglePoint = firstPoint + Vector3.Project(SecondPoint - firstPoint, Vector3.right * direction);

            int rightAngleX = Mathf.FloorToInt(rightAnglePoint.x);
            int rightAngleY = Mathf.FloorToInt(rightAnglePoint.y);
            Vector3Int rightAngle = new Vector3Int(rightAngleX, rightAngleY);

            //var line = BresenhamLine(firstVert.x, firstVert.y, rightAngleX, rightAngleY);
            var line2 = BresenhamLine(rightAngleX, rightAngleY, secondVert.x, secondVert.y);
            //RasterizeCorridor(line,grid);
            //RasterizeCorridor(line2, grid);
            //Debug

            if (grid.FindCellByPosition(rightAngle).type == 2) {
                foreach (var pos in line2) {
                    if (grid.FindCellByPosition(pos).type != 2) {
                        rightAngle = pos;
                    }
                }
            }

            corridors.Add(new Vector3IntPair(firstPoint, rightAngle));
            corridors.Add(new Vector3IntPair(rightAngle, SecondPoint));


        }
        var algorithm = new AlgorithmGeneration(grid);
        foreach (var edge in corridors) {
            bool doorCreated = false;
            //Debug.Log(new Vector3Int(edge.a.x, edge.a.y) + " " + new Vector3Int(edge.b.x, edge.b.y));
            var path = algorithm.AStarSearch(new Vector3Int(edge.a.x, edge.a.y), new Vector3Int(edge.b.x, edge.b.y));
            if (path == null) { continue; }

            foreach (var cell in path) {
                var gridCell = grid.FindCellByPosition(new Vector3Int(Mathf.FloorToInt(cell.x), Mathf.FloorToInt(cell.y)));
                if (gridCell.type == 2 && doorCreated == false) { gridCell.type = 3; doorCreated = true; continue; }
                gridCell.type = 4;
                //tilemap.SetTile(new Vector3Int(Mathf.FloorToInt(cell.x),Mathf.FloorToInt(cell.y)), floorTile);
            }
        }
        return grid;
    }

    List<Edge> TriangulateAndTree() {
        tree = new List<Edge>();
        var triangles = BowyerWatson.Triangulate(points);
        var graph = new HashSet<Edge>();
        foreach (var triangle in triangles)
            graph.UnionWith(triangle.edges);



        tree = Kruskal.MinimumSpanningTree(graph);

        int i = 0;
        foreach (var edge in graph) {
            if (i >= loops) break;
            if (!tree.Contains(edge)) { tree.Add(edge); i++; }

        }

        return tree;
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
}

public class Vector3IntPair {
    public Vector3Int a;
    public Vector3Int b;
    public Vector3IntPair(Vector3Int a, Vector3Int b) {
        this.a = a;
        this.b = b;
    }
}