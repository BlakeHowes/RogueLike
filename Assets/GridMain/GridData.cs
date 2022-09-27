using UnityEngine;
public class GridData {
    public GameObject[,] gameobject;
    public GridData(int width, int height) {
        gameobject = new GameObject[width, height];
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                gameobject[x, y] = null;
            }
        }
    }
}
