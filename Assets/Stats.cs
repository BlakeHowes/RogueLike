using LlamAcademy.Spring.Runtime;
using Mono.Cecil.Cil;
using Panda;
using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;
using static ItemStatic;

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
    public int enemyAlertRangeTemp;
    public int skillRangeTemp;
    public int directDamage;

    [Header("Dynamic Stats")]
    public int health;
    public float actionPoints;
    public int actionPointsSum;

    [Header("Options")]
    public bool infiniteHealth = false;
    public bool showHealthBar = true;
    public bool setInactiveOnDeath = true;

    [Header("Resources")]
    public GameObject healthbar;
    private Slider healthbarSlider;
    private Transform statusEffectUI;
    private Inventory inventory;

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
        directDamage = 0;
    }

    public void OnEnable() {
        if(faction == PartyManager.Faction.Party) {
            DontDestroyOnLoad(this);
        }
        InitializeCharacter();
    }

    public void InitializeCharacter() {
        inventory = GetComponent<Inventory>();
        InventoryManager.i.CreateCharacterSprite(gameObject);
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
     
        var position = gameObject.Position();

        RecalculateStats();
        inventory.CallEquipment(position, position, Signal.TakeDamage);
        Debug.Log("Take damage");
        if (infiniteHealth) {
            GridManager.i.StartCoroutine(GridManager.i.graphics.FlashAnimation(gameObject, origin, Color.white));
            SpawnHitNumber(damage.ToString(), Color.red, 1);
            return; 
        }

        if(damage < 0) { damage = 0; SpawnHitNumber(damage.ToString(), Color.red, 1); GridManager.i.StartCoroutine(GridManager.i.graphics.FlashAnimation(gameObject, origin, Color.white)); ; return;}
        damage -= armourTemp;
        if (damage < 1) { damage = 1; }
        health -= damage;

        if (faction == PartyManager.Faction.Enemy) {
            if (state != PartyManager.State.Combat) {
                state = PartyManager.State.Combat;
                PartyManager.i.enemyParty.Add(gameObject);
            }
            var originCharacter = origin.GameObjectGo();

            if (originCharacter) {
                var stats = originCharacter.GetComponent<Stats>();
                stats.state = PartyManager.State.Combat;
                if (origin != position) {
                    stats.directDamage += damage;
                }
            }
        }
        var spring = GetComponent<SpringToTarget3D>();
        if (spring && position != origin) {
            Vector3 cellOffsetPosition = new Vector3(0.5f, 1) + (Vector3)position;
            Vector3 cellOffsetOrigin = new Vector3(0.5f, 1) + (Vector3)origin;
            Vector3 direction = Vector3.Normalize(cellOffsetPosition - cellOffsetOrigin);
            Vector3 offset = cellOffsetOrigin + direction * -6;
            Vector3 amount = gameObject.transform.position - offset;
            if(!GridManager.i.graphics.lerping)spring.Nudge(amount,24,1000);
        }


        //EffectManager.i.HitParticleEffect(position);

        //Create hit number
        if (faction != PartyManager.Faction.Interactable) {
            if (damage == 0) { SpawnHitNumber("Dodge", Color.yellow, 1); }
            SpawnHitNumber(damage.ToString(),Color.red,1);
        }
        UpdateHealthBar();
        if(health > 0) {
            GridManager.i.StartCoroutine(GridManager.i.graphics.FlashAnimation(gameObject, origin, Color.white));
            return;
        }
        inventory.CallEquipment(position, position, Signal.Death);
        foreach (var item in deathAction) {
            if(item)
            item.Call(position, position, Signal.Death);
        }

        PartyManager.i.RemoveDeadEnemy(gameObject);
        GridManager.i.goMethods.RemoveGameObject(position);
        inventory.items.Drop(position, position);
        GridManager.i.graphics.UpdateEverything();
        if (!GridManager.i.enumeratingStack) { GridManager.i.StartStack(); }
        healthbar.SetActive(false);
        if(setInactiveOnDeath) gameObject.SetActive(false);
    }

    public void SpawnHitNumber(string value,Color colour,float scale) {
        string text = value.ToString();
        var hitNumber = Instantiate(GameUIManager.i.hitNumberPrefab, GameUIManager.i.canvasWorld);
        hitNumber.transform.position = gameObject.transform.position + new Vector3(0, 0.5f, 0);
        hitNumber.GetComponent<HitNumber>().Set(text, colour, scale);
    }

    public void Heal(int amount) {
        var position = gameObject.Position();

        inventory.CallEquipment(position, position, Signal.Heal);

        var healthTemp = health;
        health += amount;
        if (health >= maxHealthTemp) {
            health = maxHealthTemp;
        }
        Debug.Log("Stat recieve heal");
        SpawnHitNumber((health - healthTemp).ToString(), Color.green,1);
        UpdateHealthBar();
    }

    public void UpdateHealthBar() {
        if (!showHealthBar) { return; }
        if (healthbar == null) { Debug.LogError("Health Bar UI Missing"); return; }
        if (health < maxHealthTemp) {
            healthbar.SetActive(true);
            healthbarSlider.maxValue = maxHealthTemp;
            healthbarSlider.value = health;
            healthbar.transform.position = transform.position;
        }
        else {
            healthbar.SetActive(false);
        }
        UpdateStatusEffectUI();
    }

    public void ResetActionPoints() {
        actionPoints = actionPointsTemp;
    }

    public void RecalculateStats() {
        ResetTempStats();
        var position = gameObject.Position();
        inventory.CallEquipment(position,position, Signal.CalculateStats);
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
        healthbarSlider = healthbar.transform.GetChild(0).GetComponent<Slider>();
        statusEffectUI = healthbar.transform.GetChild(1);
        healthbar.SetActive(false);
        UpdateHealthBar();
    }

    public void UpdateStatusEffectUI() {
        if (statusEffectUI == null) { Debug.LogError("Status Effect UI Missing"); return; }
        foreach(Transform child in statusEffectUI.transform) {
            child.gameObject.SetActive(false);
        }
        int i = 0;
        int statusEffectsTotal = inventory.statusEffects.Count;
        if (statusEffectsTotal > 0) { 
            healthbar.SetActive(true);
            if(statusEffectsTotal > 6) {
                Debug.LogError("Improve the status effect UI, its trying to show more than 6 :(");
            }
        }
        foreach(var statusEffect in inventory.statusEffects) {
            if (!statusEffect) { continue; }
            var child = statusEffectUI.GetChild(i);
            var tile = statusEffect.tile;
            if(tile == null) { Debug.LogError("Tile missing for " + statusEffect);continue; }
            child.GetComponent<Image>().sprite = tile.sprite;
            child.gameObject.SetActive(true);
            i++;
        }
    }
}
