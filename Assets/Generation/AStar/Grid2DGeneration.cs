using UnityEngine;

[System.Serializable]
public class Grid2DGeneration {
    public int width, length;

    public CellGeneration[] cells;


    private Grid2DGeneration() { }

    public Grid2DGeneration(int width, int length) {
        this.width = width;
        this.length = length;
    }

    public void Initialize() {
        cells = new CellGeneration[width * length];
        for (int w = 0; w < width; w++) {
            for (int l = 0; l < length; l++) {
                int index = w * length + l;
                var cell = new CellGeneration(new Vector3Int(w, l));
                //cell.heuristic = 3;
                cells[index] = cell;
            }
        }
    }


    public void Generate() {
        for (int w = 0; w < width; w++) {
            for (int l = 0; l < length; l++) {
                int index = w * length + l;
                cells[index].parent = null;
                cells[index].cost = 0;
                cells[index].heuristic = 0;
            }
        }
    }


    public CellGeneration FindCellByPosition(Vector3Int pos) {
        if (pos.x >= 0 && pos.x < width && pos.y >= 0 && pos.y < length) {
            int index = pos.x * length + pos.y;
            var cell = cells[index];
            return cell;
        }

        throw new System.Exception(string.Format("There is no cell on the grid corresponding to position {0}", pos));
    }

    public CellGeneration[] GetMooreNeighbours(CellGeneration current) {
        var result = new CellGeneration[8];

        int x = (int)current.position.x;
        int y = (int)current.position.y;

        int[] indices = new int[]
        {
            x * length + (y + 1),
            (x + 1) * length + y,
            x * length + (y - 1),
            (x - 1) * length + y,
            (x - 1) * length + (y + 1),
            (x + 1) * length + (y + 1),
            (x - 1) * length + (y - 1),
            (x + 1) * length + (y - 1)
        };


        // North
        if (y < length - 1)
            result[0] = cells[indices[0]];

        // East
        if (x < width - 1)
            result[1] = cells[indices[1]];

        // South
        if (y > 0)
            result[2] = cells[indices[2]];

        // West
        if (x > 0)
            result[3] = cells[indices[3]];

        return result;
    }

    public Vector2 GetNeighbourCount(CellGeneration current) {
        Vector2 count = Vector2.zero;

        int x = (int)current.position.x;
        int y = (int)current.position.y;

        int[] indices = new int[]
        {
            x * length + (y + 1),
            (x + 1) * length + y,
            x * length + (y - 1),
            (x - 1) * length + y,
            (x - 1) * length + (y + 1),
            (x + 1) * length + (y + 1),
            (x - 1) * length + (y - 1),
            (x + 1) * length + (y - 1)
        };


        // North
        if (y < length - 1) {
            count.x += cells[indices[0]].type;
            count.y += cells[indices[0]].type;
        }



        // East
        if (x < width - 1) {
            count.x += cells[indices[1]].type;
            count.y += cells[indices[1]].type;
        }

        // South
        if (y > 0) {
            count.x += cells[indices[2]].type;
        }


        // West
        if (x > 0) {
            count.y += cells[indices[3]].type;
        }



        // North-West
        if (y < length - 1 && x > 0)
            count.y += cells[indices[4]].type;

        // North-East
        if (y < length - 1 && x < width - 1) {
            count.x += cells[indices[5]].type;
            count.y += cells[indices[5]].type;
        }

        // South-East
        if (y > 0 && x < width - 1)
            count.x += cells[indices[7]].type; ;
        return count;
    }

    public bool IsOccludedByWall(CellGeneration current) {

        int x = (int)current.position.x;
        int y = (int)current.position.y;

        int[] indices = new int[]
        {
            x * length + (y - 1),
            x * length + (y - 2)
        };

        // South
        if (y > 0) {
            if (cells[indices[0]].type == 2) { return true; }
        }
        if (y > 0) {
            if (cells[indices[1]].type == 2) { return true; }
        }

        return false;
    }

    public void RemoveWallsBelowCell(CellGeneration current) {

        int x = (int)current.position.x;
        int y = (int)current.position.y;

        int[] indices = new int[]
        {
            x * length + (y - 1),
            x * length + (y - 2)
        };

        // South
        if (y > 0) {
            if (cells[indices[0]].type == 2) {
                cells[indices[0]].type = 0;
            }
        }
        if (y > 0) {
            if (cells[indices[1]].type == 2) {
                cells[indices[1]].type = 0;
            }
        }
    }

    public void FillNeighbours(CellGeneration current, int fill) {
        int x = (int)current.position.x;
        int y = (int)current.position.y;

        int[] indices = new int[]
        {
            x * length + (y + 1),
            (x + 1) * length + y,
            x * length + (y - 1),
            (x - 1) * length + y,
            (x - 1) * length + (y + 1),
            (x + 1) * length + (y + 1),
            (x - 1) * length + (y - 1),
            (x + 1) * length + (y - 1),
        };


        // North
        if (y < length - 1) {
            if (cells[indices[0]].type == 0) {
                cells[indices[0]].type = fill;
            }
        }



        // East
        if (x < width - 1) {
            if (cells[indices[1]].type == 0)
                cells[indices[1]].type = fill;
        }



        // South
        if (y > 0)
            if (cells[indices[2]].type == 0)
                cells[indices[2]].type = fill;

        // West
        if (x > 0)
            if (cells[indices[3]].type == 0)
                cells[indices[3]].type = fill;


        // North-West
        if (y < length - 1 && x > 0)
            if (cells[indices[4]].type == 0)
                cells[indices[4]].type = fill;

        // North-East
        if (y < length - 1 && x < width - 1)
            if (cells[indices[5]].type == 0)
                cells[indices[5]].type = fill;

        // South-West
        if (y > 0 && x > 0)
            if (cells[indices[6]].type == 0)
                cells[indices[6]].type = fill;

        // South-East
        if (y > 0 && x < width - 1)
            if (cells[indices[7]].type == 0)
                cells[indices[7]].type = fill;
    }

    public bool FillGapsInWall(CellGeneration current) {
        int x = (int)current.position.x;
        int y = (int)current.position.y;

        int[] indices = new int[]
        {
            x * length + (y + 1),
            (x + 1) * length + y,
            x * length + (y - 1),
            (x - 1) * length + y,
            (x - 1) * length + (y + 1),
            (x + 1) * length + (y + 1),
            (x - 1) * length + (y - 1),
            (x + 1) * length + (y - 1),
            x * length + (y + 3),
            x * length + (y + 2),
        };
        bool placeWall = false;

        //North north north
        if (y < length - 1) {
            if (cells[indices[8]].type == 1) {
                placeWall = true;
            }
        }

        // East
        if (x < width - 1) {
            if (cells[indices[1]].type == 1) {
                placeWall = true;
            }

        }
        // South
        if (y > 0) {
            if (cells[indices[2]].type == 1) {
                placeWall = true;
            }

        }

        // West
        if (x > 0) {
            if (cells[indices[3]].type == 1) {
                placeWall = true;
            }

        }






        // North
        if (y < length - 1) {
            if (cells[indices[0]].type == 1) {
                return false;
            }
        }

        // North north
        if (y < length - 1) {
            if (cells[indices[9]].type == 1) {
                return false;
            }
        }

        return placeWall;
    }
}