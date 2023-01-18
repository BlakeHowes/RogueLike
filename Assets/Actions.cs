using System.Collections.Generic;
using UnityEngine;
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

    public void ChangeActionPoints(float amount) {
        var currentCharacter = PartyManager.i.currentCharacter;
        if (PartyManager.i.state == PartyManager.State.Exploring) {
            actionPoints = currentCharacter.GetComponent<Stats>().actionPoints;
        }
        else {
            actionPoints -= amount;
            if (actionPoints <= 0) {
                PartyManager.i.EndTurn();
            }
        }

        GameUIManager.i.actionPointsText.text = actionPoints.ToString();
    }

    public void SetActionPoints(float amount) {
        actionPoints = amount;
        GameUIManager.i.actionPointsText.text = actionPoints.ToString();
    }

    public void Wait() {
        ChangeActionPoints(1);
    }

    public bool Walk(Vector3Int postion,Vector3Int origin) {
        var walked =PathingManager.i.MoveOneStep(postion, origin);
        if (walked) { ChangeActionPoints(walkCost); }
        return walked;
    }

    public bool WalkLeader(Vector3Int postion, Vector3Int origin) {
        var walked = PathingManager.i.MoveOneStepLeader(postion, origin);
        if (walked) { ChangeActionPoints(walkCost); }
        return walked;
    }

    public void MoveUpEnemy(Vector3Int postion, Vector3Int origin) {
        PathingManager.i.EnemyMoveup(postion, origin);
        ChangeActionPoints(walkCost);
        Debug.Log("Moved Up");
    }

    public void PickUpItem(Vector3Int position) {
        var inventory = position.gameobjectSpawn().GetComponent<Inventory>();
        if (inventory.items.Count < inventory.MaxInventory) {
            var item = GridManager.i.itemMethods.RemoveItem(position);
            inventory.AddItem(item);
        }
        ChangeActionPoints(pickupCost);
    }

    public bool Punch(Vector3Int position, Vector3Int origin) {
        if(position == origin) {
            return false;
        }
        if (InMeleeRange(position, origin)) {
            var damage = origin.gameobjectSpawn().GetComponent<Stats>().GetAttack();
            position.gameobjectSpawn().GetComponent<Stats>().Damage(damage,origin);
            ChangeActionPoints(handCost);
            return true;
        }
        return false;
    }

    public void Die(Vector3Int position) {
        var character = position.gameobjectSpawn();
        PartyManager.i.RemoveDeadEnemy(character);
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
        if (origin == position) {
            return false;
        }

        var range = CalculateRange(origin,null);
        if (!inRange(position,origin, range)) return false;
        var mainHandItem = character.GetComponent<Inventory>().mainHand;
        if (mainHandItem != null) {
            if (position.gameobjectSpawn() != null) {
                bool used =mainHandItem.Call(position, origin);
                if(used == true) {
                    ChangeActionPoints(handCost);
                    return true;
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
        ChangeActionPoints(handCost);
    }

    public void UseItemFromInventory(Vector3Int position,Vector3Int origin, ItemAbstract item) {
        if (item.destroyOnUse) {
            item.Call(position, origin);
            var inventory = origin.gameobjectSpawn().GetComponent<Inventory>().items;
            if (inventory.Contains(item)) {
                inventory.Remove(item);
            }
            ChangeActionPoints(handCost);
            return;
        }
        if (!inRange(position, origin, throwRange)) return;
        if (item.destroyOnUse) {
            RangedAttack(position,origin,item);
            ChangeActionPoints(handCost);
            return;
        }
        ThrowItem(position, origin, item);
    }

    public int CalculateRange(Vector3Int position,ItemAbstract item) {
        var range = 1;
        if(item == null) {
            var currentCharacter = position.gameobjectSpawn();
            currentCharacter.GetComponent<Stats>().RecalculateStats();
            item = currentCharacter.GetComponent<Inventory>().mainHand;
            if (item != null) {
                var weapon = item as Weapon;
                range = weapon.range + weapon.rangeBonus;
            }
        }
        else {
            range = item.range;
        }
        return range;
    }

    public List<Vector3Int> CreateRange(Vector3Int position, int range) {
        var cells = new List<Vector3Int>();
        if (range == 1) {
            cells = GridManager.i.tools.MeeleeRange(position);
        }
        else {
            cells = GridManager.i.tools.Circle(range, position);
        }
        return cells;
    }

    public bool inRange(Vector3Int position, Vector3Int origin, int range) {
        var cells = CreateRange(origin, range);
        foreach (Vector3Int cell in cells) {
            if (position == cell) return true;
        }
        return false;
    }
}
