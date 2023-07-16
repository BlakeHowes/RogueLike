using LlamAcademy.Spring.Runtime;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using static ItemStatic;

public class Stats : MonoBehaviour {
    public TileBase tile;
    public PartyManager.State state = PartyManager.State.Idle;
    public List<ItemAbstract> deathAction;

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
    public int armour;

    [Header("Dynamic Stats")]
    public int health;
    public float actionPoints;
    public int actionPointsSum;

    [Header("Options")]
    public bool infiniteHealth = false;
    public bool showHealthBar = true;
    public bool setInactiveOnDeath = true;

    [Header("Resources")]
    public GameObject healthbarGameObject;
    public HealthBar healthbar;
    private Inventory inventory;
    private GlobalValues globalValues;
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
        globalValues = Manager.GetGlobalValues();
        if(gameObject.tag == "Party") {
            DontDestroyOnLoad(this);
        }
        InitializeCharacter();

    }

    public void OnStartOfCombat() {

    }

    //Hack to set armour too armour temp, I cant figure out a better way
    private bool armourChecked = false;
    public void OnIdleTick() {
        if (!armourChecked) { 
            RefreshCharacter(gameObject.Position());
            armour = armourTemp; 
            armourChecked = true; 
        }
        armour++;
        if (armour > armourTemp) { armour = armourTemp; }
        if (state == PartyManager.State.Idle) {
            ResetActionPoints();
        }
        if(gameObject.tag == "Summon") {
            PartyManager.i.SetCurrentCharacter(PartyManager.i.party[0]);
            Die(gameObject.Position());
        }
    }

    public void InitializeCharacter() {
        inventory = GetComponent<Inventory>();
        CharacterSpriteGenerator.CreateCharacterSprite(gameObject);


        if (maxHealthTemp == 0) {
            maxHealthTemp = maxHealthBase;
            health = maxHealthTemp;
        }
        if (!GridManager.i) return;

      
        ResetActionPoints();

        healthbarGameObject = Instantiate(globalValues.healthBarPrefab, GameUIManager.i.canvasWorld);
        healthbar = healthbarGameObject.GetComponent<HealthBar>();
        healthbar.InitializeHealthbar(this, inventory);
    }

    public void TakeDamage(int damage,Vector3Int origin) {
     
        var position = gameObject.Position();

        RefreshCharacter(position);
        inventory.CallEquipment(position, position, Signal.TakeDamage);
        Debug.Log("Take damage");
        if (infiniteHealth) {
            GridManager.i.StartCoroutine(GridManager.i.graphics.FlashAnimation(gameObject, origin, Color.white));
            SpawnHitNumber(damage.ToString(), Color.red, 1);
            return; 
        }
        var damageTotal = damage;
        var armourLeft = armour - damage;
        damage -= armour;
        armour = armourLeft;
        if(armourLeft < 0) { armour = 0; }
        if(damage < 0) { damage = 0; }
        health -= damage;

        if (gameObject.tag == "Enemy") {
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
            Vector3 direction = Vector3.Normalize(cellOffsetPosition - cellOffsetOrigin) * globalValues.onHitNudgeAmount;
            Vector3 offset = cellOffsetOrigin + direction * -6;
            Vector3 amount = gameObject.transform.position - offset;
            if(!GridManager.i.graphics.lerping)spring.Nudge(amount,24,1000);
        }
        if (gameObject.tag == "Interactable") {
            if (damageTotal == 0) { SpawnHitNumber("Miss", Color.yellow, 1); } else {
                SpawnHitNumber(damageTotal.ToString(), Color.red, 1);
            }

        }
        UpdateHealthBar();
        if(health > 0) {
            GridManager.i.StartCoroutine(GridManager.i.graphics.FlashAnimation(gameObject, origin, Color.white));
            return;
        }
        Die(position);

    }

    public void Die(Vector3Int position) {
        inventory.CallEquipment(position, position, Signal.Death);
        foreach (var item in deathAction) {
            if (item)
                item.Call(position, position, Signal.Death);
        }

        PartyManager.i.RemoveDeadEnemy(gameObject);
        GridManager.i.goMethods.RemoveGameObject(position);
        inventory.items.Drop(position, position);
        GridManager.i.graphics.UpdateEverything();
        //if (!GridManager.i.enumeratingStack) { GridManager.i.StartStack(); }
        healthbarGameObject.SetActive(false);
        if (setInactiveOnDeath) gameObject.SetActive(false);
    }

    public void SpawnHitNumber(string value,Color colour,float scale) {
        string text = value.ToString();
        var hitNumber = Instantiate(globalValues.hitNumberPrefab, GameUIManager.i.canvasWorld);
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
        if(healthbar)healthbar.UpdateHealthBar();
    }

    public void ResetActionPoints() {
        actionPoints = actionPointsTemp;
    }

    public void RefreshCharacter(Vector3Int position) {
        ResetTempStats();
        inventory.CallEquipment(position, position, Signal.ResetStatsToBase);
        inventory.CallEquipment(position,position, Signal.CalculateStats);
        if (!armourChecked) { armour = armourTemp; armourChecked = true; }
        //Debug.Log(armour +" "+ armourTemp + "Status Effects " + inventory.statusEffects.Count);
        if (armour > armourTemp) { armour = armourTemp; }
        UpdateHealthBar();
    }

    public void OnDestroy() {
        Destroy(healthbarGameObject.gameObject);
    }
}
