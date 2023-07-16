using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LootGenerator : MonoBehaviour
{
    public List<Loot> loot = new List<Loot>();
    public List<DeathActions> deathActions = new List<DeathActions>();
    [Tooltip("Pool 0 = always include")]
    public WorldLootScriptable worldLootScriptable;
    public bool useGridCounter = false;
    public void OnEnable() {
        var inventory =GetComponent<Inventory>();
        int pools = 0;
        foreach (Loot lootItem in loot) {
            if (lootItem.pool > pools) {
                pools = lootItem.pool;
            }
        }
        var lootPool = GridManager.i.lootCounter;
        var poolRoll = 0;
        if (lootPool < pools+1 && useGridCounter) {
            poolRoll = lootPool;
            GridManager.i.lootCounter++;
        }
        else {
            poolRoll = Random.Range(1, pools + 1);
        }

        if (worldLootScriptable) { 
            loot.Clear();
            var currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
            var lootList = worldLootScriptable.loot[currentSceneIndex - 1];
            foreach(Loot item in lootList.loot) {
                loot.Add(item);
            }
        }
        foreach (Loot lootItem in loot) {
            if(lootItem == null) {
                Debug.LogError("Loot item is null on prefab " + gameObject.name);
                continue;
            }
            float roll = Random.Range(0.000f, 1.000f);
            if(roll <= lootItem.rarity) {
                if (lootItem.pool == poolRoll)
                inventory.AddItem(lootItem.item);
            }
        }
        RollDeathActions();
        //Destroy(this);
    }

    public void RollDeathActions() {
        var stats = GetComponent<Stats>();
        int pools = 0;
        foreach (DeathActions deathaction in deathActions) {
            if (deathaction.pool > pools) {
                pools = deathaction.pool;
            }
        }

        var poolRoll = Random.Range(1, pools + 1);
        if (worldLootScriptable) {
            loot.Clear();
            var currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
            var lootList = worldLootScriptable.loot[currentSceneIndex - 1];
            foreach (Loot item in lootList.loot) {
                loot.Add(item);
            }
        }
        foreach (DeathActions deathaction in deathActions) {
            if (deathaction == null) {
                Debug.LogError("Loot item is null on prefab " + gameObject.name);
                continue;
            }
            float roll = Random.Range(0.000f, 1.000f);
            if (roll <= deathaction.rarity) {
                if (deathaction.pool == 0 || deathaction.pool == poolRoll)
                    stats.deathAction.Add(deathaction.item);
            }
        }
    }

    [System.Serializable]
    public class Loot {
        public ItemAbstract item;
        [Range(0.001f, 1.000f)]
        public float rarity = 0.5f;
        public int pool;
    }
    [System.Serializable]
    public class DeathActions {
        public ItemAbstract item;
        [Range(0.001f, 1.000f)]
        public float rarity = 0.5f;
        public int pool;

    }
}
