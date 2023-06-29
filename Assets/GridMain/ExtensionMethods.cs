using System.Collections;
using System.Collections.Generic;
using UnityEngine;

static class ExtensionMethods
 {
    static GoMethod goMethods;
    static itemMethods itemMethods;
    static GridTools tools;
    static GridGraphics graphics;
    static GridManager gridManager;
    public static void SetReferences() {
        goMethods = GridManager.i.goMethods;
        itemMethods = GridManager.i.itemMethods;
        tools = GridManager.i.tools;
        graphics = GridManager.i.graphics;
        gridManager = GridManager.i;
    }
     public static Vector3 Round(this Vector3 vector3, int decimalPlaces = 2)
     {
         float multiplier = 1;
         for (int i = 0; i < decimalPlaces; i++) { multiplier *= 10f;}
         return new Vector3(
             Mathf.Round(vector3.x * multiplier) / multiplier,
             Mathf.Round(vector3.y * multiplier) / multiplier,
             0);
     }

    public static Vector3Int FloorToInt(this Vector3 vector3) {
        return new Vector3Int(Mathf.FloorToInt(vector3.x), Mathf.FloorToInt(vector3.y), 0);
    }

    public static GameObject gameobjectSpawn(this Vector3Int position) {
        return goMethods.GetGameObjectOrSpawnFromTile(position);
    }

    public static GameObject gameobjectGO(this Vector3Int position) {
        return goMethods.GetGameObject(position);
    }

    public static void lerp(this GameObject go, Vector3Int startPos, Vector3Int endPos,float duration) {
        gridManager.StartCoroutine(graphics.LerpPosition(startPos, endPos, go, duration));
    }

    public static Vector3Int position(this ItemAbstract item) {
        return itemMethods.FindItemOnGrid(item);
    }

    public static Vector3Int position(this GameObject gameobject) {
        return goMethods.FindGameObjectOnGrid(gameobject);
    }


    public static List<Vector3Int> circle(this Vector3Int position,int radius) {
        return tools.Circle(radius, position);
    }

    public static ItemAbstract mech(this Vector3Int position) {
        return GridManager.i.mechMethods.GetMechanism(position);
    }

    public static ItemAbstract item(this Vector3Int position) {
        return itemMethods.GetItemOrSpawnFromTile(position);
    }

    public static Vector3Int Drop(this ItemAbstract item,Vector3Int position) {
        return itemMethods.FloodFillDropSingle(position,item);
    }

    public static float Drop(this List<ItemAbstract> items, Vector3Int position, Vector3Int origin) {
        return itemMethods.FloodFillDropItems(position, origin, items);
    }

    public static Vector3Int RayCast(this Vector3Int hit,Vector3Int position, Vector3Int origin) {
        return goMethods.FirstGameObjectInSight(position, origin);
    }

    public static bool inbounds(this Vector3Int position) {
        return GridManager.i.tools.InBounds(position);
    }
}
