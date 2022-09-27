using UnityEngine;
using static UnityEditor.Progress;

public class Actions : MonoBehaviour
{
    public static Actions i;
    public float actionPoints;
    public float walkCost;
    public float pickupCost;
    public float handCost;
    public void Awake() {
        i = this;
    }

    public void Walk(Vector3Int postion,Vector3Int origin) {
        var walked =PathingManager.i.MoveOneStep(postion, origin);
        if (walked) { actionPoints -= walkCost; }
    }

    public void PickUpItem(Vector3Int position) {
        var inventory = position.gameobjectSpawn().GetComponent<Inventory>();
        if (inventory.items.Count < inventory.MaxInventory) {
            var item = GridManager.i.itemMethods.RemoveItem(position);
            inventory.AddItem(item);
        }
        actionPoints -= pickupCost;
    }

    public bool Punch(Vector3Int position, Vector3Int origin) {
        if(position == origin) {
            return false;
        }
        if (InMeleeRange(position, origin)) {
            var damage = origin.gameobjectSpawn().GetComponent<Stats>().GetAttack();
            position.gameobjectSpawn().GetComponent<Stats>().Damage(damage,origin);
            actionPoints -= handCost;
            return true;
        }
        return false;
    }

    public void Die(Vector3Int position) {
        var character = position.gameobjectSpawn();
        GridManager.i.goMethods.RemoveGameObject(position);
        character.GetComponent<Inventory>().DropItems(position);
        Destroy(character);
    }

    public void RangedAttack(Vector3Int position, Vector3Int origin,ItemAbstract item) {
        position = GridManager.i.goMethods.FirstGameObjectInSight(position, origin);
        item.Call(position, origin);
    }

    public bool UseItemMainHand(Vector3Int position,Vector3Int origin) {
        var character = origin.gameobjectSpawn();
        character.GetComponent<Stats>().RecalculateStats();
        if (origin == position) {
            return false;
        }
        var mainHandItem = character.GetComponent<Inventory>().mainHand;
        if (mainHandItem != null) {
            if (position.gameobjectSpawn() != null) {
                if(mainHandItem.ranged == true) {
                    RangedAttack(position,origin,mainHandItem);
                    actionPoints -= handCost;
                    return true;
                }
                else {
                    if (InMeleeRange(position, origin) == true) {
                        mainHandItem.Call(position, origin);
                        actionPoints -= handCost;
                        return true;
                    }
                }
            }
        }
        return false;
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
        item.Call(position, origin);
        GridManager.i.itemMethods.SpawnThrownItem(item, position);
        actionPoints -= handCost;
    }

    public void UseItemFromInventory(Vector3Int position,Vector3Int origin, ItemAbstract item) {
        MouseManager.i.itemSelected = null;
        if (item.destroyOnUse) {
            item.Call(position, origin);
            var inventory = origin.gameobjectSpawn().GetComponent<Inventory>().items;
            if (inventory.Contains(item)) {
                inventory.Remove(item);
            }
            actionPoints -= handCost;
            return;
        }
        if (item.ranged) {
            RangedAttack(position,origin,item);
            actionPoints -= handCost;
            return;
        }
        ThrowItem(position, origin, item);
    }
}
