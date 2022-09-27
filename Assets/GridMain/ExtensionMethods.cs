using UnityEngine;

static class ExtensionMethods
 {
     /// <summary>
     /// Rounds Vector3.
     /// </summary>
     /// <param name="vector3"></param>
     /// <param name="decimalPlaces"></param>
     /// <returns></returns>
     public static Vector3 Round(this Vector3 vector3, int decimalPlaces = 2)
     {
         float multiplier = 1;
         for (int i = 0; i < decimalPlaces; i++)
         {
             multiplier *= 10f;
         }
         return new Vector3(
             Mathf.Round(vector3.x * multiplier) / multiplier,
             Mathf.Round(vector3.y * multiplier) / multiplier,
             0);
     }

    public static Vector3Int FloorToInt(this Vector3 vector3) {
        return new Vector3Int(Mathf.FloorToInt(vector3.x), Mathf.FloorToInt(vector3.y), 0);
    }

    public static GameObject gameobjectSpawn(this Vector3Int position) {
        return GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(position);
    }

    public static GameObject gameobjectGO(this Vector3Int position) {
        return GridManager.i.goMethods.GetGameObject(position);
    }

    public static Vector3Int position(this ItemAbstract item) {
        return GridManager.i.itemMethods.FindItemOnGrid(item);
    }

    public static Vector3Int position(this GameObject gameobject) {
        return GridManager.i.goMethods.FindGameObjectOnGrid(gameobject);
    }

    public static ItemAbstract mech(this Vector3Int position) {
        return GridManager.i.mechMethods.GetMechanism(position);
    }

    public static ItemAbstract item(this Vector3Int position) {
        return GridManager.i.itemMethods.GetItemOrSpawnFromTile(position);
    }

    public static bool inbounds(this Vector3Int position) {
        return GridManager.i.tools.InBounds(position);
    }
}
