using UnityEngine;

public class LootGenerator : MonoBehaviour
{
    public LootGroup lootGroup;
    public LootGroup lootGroup2;
    public enum LootGroup {
        None,
        Props,
        Enemies,
        Trinkets,
        TraitItems,
        Equipment
    }

    public void OnEnable() {
        if (lootGroup != LootGroup.None) {
            var items = GetComponent<Inventory>().items;
            var item = Manager.GetGlobalValues().GetRandomLootItem(lootGroup);
            if (item) { items.Add(item); }
        }
        if (lootGroup2 != LootGroup.None) {
            var items = GetComponent<Inventory>().items;
            var item = Manager.GetGlobalValues().GetRandomLootItem(lootGroup2);
            if (item) { items.Add(item); }
        }
    }
}
