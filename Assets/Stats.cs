using Panda;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;
using static ItemAbstract;

public class Stats : MonoBehaviour {
    public TileBase tile;
    public PartyManager.Faction faction = PartyManager.Faction.Enemy;
    public PartyManager.State state = PartyManager.State.Idle;
    public List<ItemAbstract> deathAction;
    public bool blocksLight;

    [Header("Base Stats")]
    public int maxHealthBase;
    public int armourBase;
    public int actionPointsBase;
    public int throwingRangeBase;
    public int fistDamageBase;
    public int walkCostBase;
    public int enemyAlertRangeBase;
    public int skillRangeBase;

    [Header("Temporary Stats")]
    [NonSerialized] public int maxHealthTemp;
    public int armourTemp;
    [NonSerialized] public int actionPointsTemp;
    [NonSerialized] public int throwingRangeTemp;
    [NonSerialized] public int fistDamageTemp;
    [NonSerialized] public int walkCostTemp;
    [NonSerialized] public int enemyAlertRangeTemp;
    [NonSerialized] public int skillRangeTemp;

    [Header("Dynamic Stats")]
    public int health;
    public float actionPoints;
    public int actionPointsSum;

    [Header("Options")]
    public bool infiniteHealth = false;
    public bool showHealthBar = true;

    [Header("Resources")]
    public GameObject healthbar;
    private Slider healthbarSlider;

    public void ResetTempStats() {
        actionPointsSum = 0;
        actionPointsTemp = actionPointsBase;
        maxHealthTemp = maxHealthBase;
        armourTemp = armourBase;
        throwingRangeTemp = throwingRangeBase;
        fistDamageTemp = fistDamageBase;
        walkCostTemp = walkCostBase;
        enemyAlertRangeTemp = enemyAlertRangeBase;
        skillRangeTemp = skillRangeBase;
    }

    public void OnEnable() {
        if(faction == PartyManager.Faction.Party) {
            DontDestroyOnLoad(this);
        }

        if (faction != PartyManager.Faction.Wall && faction != PartyManager.Faction.Interactable) {
            var inventory = GetComponent<Inventory>();
            InventoryManager.i.UpdateSpriteFromItems(inventory);
        }
        if (maxHealthTemp == 0) {
            maxHealthTemp = maxHealthBase;
            health = maxHealthTemp;
        }
        if (!GridManager.i) return;
        ResetTempStats();
        ResetActionPoints();
        CreateHealthBar();
        ResetTempStats();
    }

    public void TakeDamage(int damage,Vector3Int origin) {
        var position = gameObject.position();
        var inventory = GetComponent<Inventory>();

        inventory.CallEquipment(position, position, Signal.CalculateStats);
        inventory.CallEquipment(position, position, Signal.TakeDamage);

        if (infiniteHealth) {
            Actions.i.FlashAnimation(gameObject, origin, Color.white);
            SpawnHitNumber(damage.ToString(), Color.red, 1);
            return; 
        }

        if(damage < 0) { damage = 0; SpawnHitNumber(damage.ToString(), Color.red, 1); Actions.i.FlashAnimation(gameObject, origin,Color.white); return;}
        damage -= armourTemp;
        if (damage < 1) { damage = 1; }
        health -= damage;
        //Create hit number
        if (faction != PartyManager.Faction.Interactable) {
            if (damage == 0) { SpawnHitNumber("Dodge", Color.yellow, 1); }
            SpawnHitNumber(damage.ToString(),Color.red,1);
        }
        UpdateHealthBar();
        if(health > 0) {
            Actions.i.FlashAnimation(gameObject, origin, Color.white);
            return;
        }
        inventory.CallEquipment(position, position, Signal.Death);
        foreach (var item in deathAction) {
            item.Call(position, position, Signal.Death);
        }
        Actions.i.Die(gameObject.position());
    }

    public void SpawnHitNumber(string value,Color colour,float scale) {
        string text = value.ToString();
        var hitNumber = Instantiate(GameUIManager.i.hitNumberPrefab, GameUIManager.i.canvasWorld);
        hitNumber.transform.position = gameObject.transform.position + new Vector3(0, 0.5f, 0);
        hitNumber.GetComponent<HitNumber>().Set(text, colour, scale);
    }

    public void Heal(int amount) {
        var position = gameObject.position();
        var inventory = GetComponent<Inventory>();

        inventory.CallEquipment(position, position, Signal.Heal);

        var healthTemp = health;
        health += amount;
        if (health >= maxHealthTemp) {
            health = maxHealthTemp;
        }
        SpawnHitNumber((health - healthTemp).ToString(), Color.green,1);
        UpdateHealthBar();
    }

    public void UpdateHealthBar() {
        if (!showHealthBar) { return; }
        if(health < maxHealthTemp) {
            healthbar.SetActive(true);
            healthbarSlider.maxValue = maxHealthTemp;
            healthbarSlider.value = health;
            healthbar.transform.position = transform.position;
        }
        else {
            healthbar.SetActive(false);
        }
    }

    public void ResetActionPoints() {
        actionPoints = actionPointsTemp;
    }

    public void RecalculateStats() {
        ResetTempStats();
        var position = gameObject.position();
        GetComponent<Inventory>().CallEquipment(position,position, Signal.CalculateStats);
        if (health < maxHealthTemp) { 
            UpdateHealthBar();
        }
    }

    public void OnDestroy() {
        Destroy(healthbar.gameObject);
    }

    public void CreateHealthBar() {
        if (!showHealthBar) { return; }

        healthbar = Instantiate(GameUIManager.i.healthBarPrefab,GameUIManager.i.canvasWorld);
        healthbar.transform.position = transform.position;
        healthbarSlider = healthbar.GetComponent<Slider>();
        healthbar.SetActive(false);
        UpdateHealthBar();
    }
}
