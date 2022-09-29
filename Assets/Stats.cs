using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public class Stats : MonoBehaviour
{
    public TileBase tile;
    public PartyManager.Faction faction = PartyManager.Faction.Enemy;
    public AIAbstract.State state = AIAbstract.State.Idle;

    public int baseMaxHealth;
    public int baseAttack;
    public int baseArmour;
    public int baseActionPoints;
    private int maxHealth;
    private int health;
    private int attack;
    private int armour;
    public int actionPoints;
    public int bonusAttack;
    public int bonusMaxHealth;
    public int bonusArmour;


    public GameObject healthbar;
    private Slider healthbarSlider;
    public AIAbstract ai;
    public void OnEnable() {
        if(maxHealth == 0) {
            maxHealth = baseMaxHealth;
            health = maxHealth;
        }
        actionPoints = baseActionPoints;
        CreateHealthBar();
        if(ai != null) {
            var aiPrefab = ai;
            ai = Instantiate(aiPrefab);
        }
    }

    public int GetAttack() {
        RecalculateStats();
        return attack;
    }

    public void AIAttack() {
        RecalculateStats();
        if (ai == null) {
            return;
        }
        if (state == AIAbstract.State.Attacking) {
            ai.AttackLogic();
        }
    }

    public void AISense() {
        RecalculateStats();
        if (ai == null) {
            return;
        }
        ai.UpdateSensoryInformation(gameObject.position());
    }
    public void Damage(int amount,Vector3Int origin) {
        RecalculateStats();
        if (ai != null) {
            state = AIAbstract.State.Attacking;
        }
        amount -= armour;
        health -= amount;
        //Create hit number
        if (faction != PartyManager.Faction.Openable) {
            if (amount == 0) { SpawnHitNumber("Dodge", Color.yellow, 1); }
            SpawnHitNumber(amount.ToString(),Color.red,1);
        }
        UpdateHealthBar();
        StartCoroutine(PartyManager.i.TakeDamageAnimation(gameObject, origin));
        if (health <= 0) {
            Actions.i.Die(gameObject.position());
        }
    }

    public void SpawnHitNumber(string value,Color colour,float scale) {
        string text = value.ToString();
        var hitNumber = Instantiate(GameUIManager.i.hitNumberPrefab, GameUIManager.i.canvasWorld);
        hitNumber.transform.position = gameObject.transform.position + new Vector3(0, 0.5f, 0);
        hitNumber.GetComponent<HitNumber>().Set(text, colour, scale);
    }

    public void Heal(int amount) {
        RecalculateStats();
        var healthTemp = health;
        health += amount;
        if (health >= maxHealth) {
            health = maxHealth;
        }
        SpawnHitNumber((health - healthTemp).ToString(), Color.green,1);
        UpdateHealthBar();
    }

    public void UpdateHealthBar() {
        if(health < maxHealth) {
            healthbar.SetActive(true);
            healthbarSlider.maxValue = maxHealth;
            healthbarSlider.value = health;
            healthbar.transform.position = transform.position;
        }
        else {
            healthbar.SetActive(false);
        }
    }

    public void RecalculateStats() {
        bonusAttack = 0;
        bonusMaxHealth = 0;
        bonusArmour = 0;
        var position = gameObject.position();
        var inventory = GetComponent<Inventory>();
        if (inventory.offHand != null) {
            inventory.offHand.Call(position, position);
        }
        if (inventory.armour != null) {
            inventory.armour.Call(position, position);
        }
        if (inventory.trinket1 != null) {
            inventory.trinket1.Call(position, position);
        }
        attack =baseAttack+ bonusAttack;
        maxHealth = baseMaxHealth + bonusMaxHealth;
        armour = baseArmour+bonusArmour;
        actionPoints = baseActionPoints;
    }

    public void OnDestroy() {
        Destroy(healthbar.gameObject);
    }

    public void CreateHealthBar() {
        healthbar = Instantiate(GameUIManager.i.healthBarPrefab,GameUIManager.i.canvasWorld);
        healthbar.transform.position = transform.position;
        healthbarSlider = healthbar.GetComponent<Slider>();
        healthbar.SetActive(false);
        UpdateHealthBar();
    }
}
