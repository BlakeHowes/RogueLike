using UnityEngine;

public class LootGenerator : MonoBehaviour
{
    public LootGroup lootGroup;
    public enum LootGroup {
        None,
        Props,
        Enemies,
        Chests,
    }

    public void OnEnable() {
        var items = GetComponent<Inventory>().items;
        var item = Manager.GetGlobalValues().GetRandomLootItem(lootGroup);
        if (item) { items.Add(item); }
    }
}
