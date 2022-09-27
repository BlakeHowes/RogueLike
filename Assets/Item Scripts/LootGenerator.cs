using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LootGenerator : MonoBehaviour
{
    public List<Loot> loot = new List<Loot>();
    public void OnEnable() {
        var inventory =GetComponent<Inventory>();
        foreach(Loot lootItem in loot) {
            if(lootItem == null) {
                Debug.LogError("Loot item is null on prefab " + gameObject.name);
                continue;
            }
            float roll = Random.Range(0.000f, 1.000f);
            if(roll <= lootItem.rarity) {
                inventory.AddItem(lootItem.item);
            }
        }
        //Destroy(this);
    }
}
