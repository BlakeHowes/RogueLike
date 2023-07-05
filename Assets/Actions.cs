using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using static ItemStatic;
public class Actions : MonoBehaviour
{
    public static Actions i;
    public float actionPoints;
    public float walkCost;
    public float pickupCost;
    public float handCost;
    public int throwRange;
    public ItemAbstract thrownItem;
    public void Awake() {
        i = this;
    }

    public void Die(Vector3Int position) {
        var character = position.GameObjectSpawn();
        if(character == null) {
            Debug.LogError("Character is missing before death");
            GridManager.i.graphics.UpdateEverything();
            return;
        }
        PartyManager.i.RemoveDeadEnemy(character);
        GridManager.i.goMethods.RemoveGameObject(position);
        character.GetComponent<Inventory>().items.Drop(position,position);
        GridManager.i.graphics.UpdateEverything();
        if (!GridManager.i.enumeratingStack) { GridManager.i.StartStack(); }
        //GridManager.i.ClearFog();
        character.GetComponent<Stats>().healthbarGameObject.SetActive(false);
        character.SetActive(false);
    }

    public void RangedAttack(Vector3Int position, Vector3Int origin,ItemAbstract item) {
        position = GridManager.i.goMethods.FirstGameObjectInSight(position, origin);
        item.Call(position, origin,Signal.Attack);
    }

    public void ThrowItem(Vector3Int position,Vector3Int origin,ItemAbstract item,Inventory inventory) {
        if (item is Item) {
            inventory.CallEquipment(position, origin, Signal.Attack);
        }
        else {
            var thrownClone = Instantiate(thrownItem);
            var thrownItemClone = thrownClone as ThrownItem;
            thrownItemClone.item = item;
            thrownItemClone.Call(position, origin, Signal.Attack);
        }

        if (inventory.items.Contains(item)) {
            inventory.items.Remove(item);
        }
    }
}
