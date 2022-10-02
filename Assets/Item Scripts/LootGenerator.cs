using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LootGenerator : MonoBehaviour
{
    public List<Loot> loot = new List<Loot>();
    [Tooltip("Pool 0 = always include")]
    public void OnEnable() {
        var inventory =GetComponent<Inventory>();
        int pools = 0;
        foreach (Loot lootItem in loot) {
            if (lootItem.pool > pools) {
                pools = lootItem.pool;
            }
        }

        var poolRoll = Random.Range(1, pools+1);

        foreach (Loot lootItem in loot) {
            if(lootItem == null) {
                Debug.LogError("Loot item is null on prefab " + gameObject.name);
                continue;
            }
            float roll = Random.Range(0.000f, 1.000f);
            if(roll <= lootItem.rarity) {
                if (lootItem.pool == 0 || lootItem.pool == poolRoll)
                inventory.AddItem(lootItem.item);
            }
        }
        //Destroy(this);
    }
}
