using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public abstract class ItemAbstract : ScriptableObject
{
    [Header("Main")]
    public Type type;
    public Tile tile;
    public GameObject particles;
    public bool destroyOnUse,ranged;
    public List<ItemAbstract> Modifiers = new List<ItemAbstract>();
    [Header("Stats")]
    public int stack = 1;
    public abstract bool Call(Vector3Int position,Vector3Int origin);
    public abstract string Description();

    public void DestoryItem() {
        var inventory =PartyManager.i.currentCharacter.GetComponent<Inventory>().items;
        if (inventory.Contains(this)) {
            inventory.Remove(this);
        }
        this.position();
    }
    public enum Type {
        Consumable,
        Weapon,
        OffHand,
        Armour,
        Trinket,
        WeaponModifier,
        EquipmentModifier
    }
}
