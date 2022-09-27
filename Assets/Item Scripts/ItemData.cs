
using UnityEngine;

public class ItemData {
    public ItemAbstract[,] item;
    public ItemData(int width, int height) {
        item = new ItemAbstract[width, height];
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                item[x, y] = null;
            }
        }
    }
}
