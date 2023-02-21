using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class Actions : MonoBehaviour
{
    public static Actions i;
    public float actionPoints;
    public float walkCost;
    public float pickupCost;
    public float handCost;
    public int throwRange;
    public void Awake() {
        i = this;
    }

    public bool PickUpItem(Vector3Int position) {
        var inventory = position.gameobjectSpawn().GetComponent<Inventory>();
        if (inventory.items.Count < inventory.MaxInventory) {
            var item = GridManager.i.itemMethods.RemoveItem(position);
            inventory.AddItem(item);
            return true;
        }
        return false;
    }

    public void Die(Vector3Int position) {
        var character = position.gameobjectSpawn();
        if(character == null) {
            Debug.LogError("Character is missing before death");
            GridManager.i.graphics.UpdateEverything();
            return;
        }
        PartyManager.i.RemoveDeadEnemy(character);
        GridManager.i.goMethods.RemoveGameObject(position);
        character.GetComponent<Inventory>().DropItems(position);
        GridManager.i.graphics.UpdateEverything();
        //GridManager.i.ClearFog();
        Destroy(character);
    }

    public void RangedAttack(Vector3Int position, Vector3Int origin,ItemAbstract item) {
        position = GridManager.i.goMethods.FirstGameObjectInSight(position, origin);
        item.Call(position, origin,ItemAbstract.Signal.Attack);
    }

    public bool InMeleeRange(Vector3Int target,Vector3Int origin) {
        if (Mathf.Abs(target.x - origin.x) > 1 ||
            Mathf.Abs(target.y - origin.y) > 1) {
            return false;
        }
        return true;
    }

    public void ThrowItem(Vector3Int position,Vector3Int origin,ItemAbstract item) {
        position =GridManager.i.goMethods.FirstGameObjectInSight(position, origin);
        var inventory = origin.gameobjectSpawn().GetComponent<Inventory>().items;
        if (inventory.Contains(item)) {
            inventory.Remove(item);
        }
        //item.Call(position, origin, ItemAbstract.Signal.Attack);
        var landedPosition =GridManager.i.itemMethods.SpawnThrownItem(item, position);
        if (landedPosition == GridManager.i.NullValue) { return; }
        StartCoroutine(GridManager.i.graphics.TileLerp(landedPosition, origin, landedPosition, 0.1f, GridManager.i.itemTilemap,null));
    }

    public void TileLerpPosition(Vector3Int targetTile, Vector3Int startlocation, Vector3Int endlocation, float lerpduration, Tilemap tilemap, GameObject particleEffect) {
        StartCoroutine(GridManager.i.graphics.TileLerp(targetTile, startlocation, endlocation, lerpduration, tilemap, particleEffect));
    }

    public void FlashAnimation(GameObject character, Vector3Int origin, Color colour) {
        StartCoroutine(GridManager.i.graphics.FlashAnimation(character, origin, colour));
    }
}
