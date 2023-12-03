using System.Collections.Generic;
using UnityEngine;

public class LootGenerator : MonoBehaviour
{
    public LootGroup lootGroup;
    public LootGroup lootGroup2;
    public List<Drop> Drops = new();
    public enum LootGroup {
        None,
        Props,
        Enemies,
        Trinkets,
        TraitItems,
        Equipment
    }

    public void OnEnable() {
        var items = GetComponent<Inventory>().items;
        if (lootGroup != LootGroup.None) {
            var item = Manager.GetGlobalValues().GetRandomLootItem(lootGroup);
            if (item) { items.Add(item); }
        }
        if (lootGroup2 != LootGroup.None) {

            var item = Manager.GetGlobalValues().GetRandomLootItem(lootGroup2);
            if (item) { items.Add(item); }
        }

        foreach(var drop in Drops) {
            var roll = Random.Range(0, 101);
            if(roll < drop.chance) {
                items.Add(drop.item);
            }
        }
    }
}

[System.Serializable]
public struct Drop {
    [Range(0,100)]public int chance;
    public ItemAbstract item;
}
