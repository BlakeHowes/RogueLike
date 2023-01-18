using Panda;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public class Stats : MonoBehaviour
{
    public TileBase tile;
    public Sprite baseSprite;
    public Sprite baseHair;
    public PartyManager.Faction faction = PartyManager.Faction.Enemy;
    public AIAbstract.State state = AIAbstract.State.Idle;
    public List<ItemAbstract> deathAction;
    public int baseMaxHealth;
    public int baseAttack;
    public int baseArmour;
    public int baseActionPoints;
    public int maxHealth;
    public int health;
    private int attack;
    private int armour;
    public int actionPoints;
    public int bonusAttack;
    public int bonusMaxHealth;
    public int bonusArmour;

    public bool infiniteHealth = false;
    public bool showHealthBar = true;

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
        GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Update;
    }

    public void AISense() {
        GetComponent<Behaviours>().UpdateInformation();

    }
    public void Damage(int amount,Vector3Int origin) {

        if (infiniteHealth) { StartCoroutine(
            PartyManager.i.TakeDamageAnimationWall(gameObject, origin));
            SpawnHitNumber(amount.ToString(), Color.red, 1);
            return; 
        }

        if (ai != null) { state = AIAbstract.State.Attacking; }

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
            var position = gameObject.position();
            foreach(ItemAbstract item in deathAction) {
                item.Call(position, position);
            }
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
        var healthTemp = health;
        health += amount;
        if (health >= maxHealth) {
            health = maxHealth;
        }
        SpawnHitNumber((health - healthTemp).ToString(), Color.green,1);
        UpdateHealthBar();
    }

    public void UpdateHealthBar() {
        if (!showHealthBar) { return; }
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
        GameUIManager.i.ClearSkills();
        var position = gameObject.position();
        var inventory = GetComponent<Inventory>();

        if (inventory.mainHand != null) {
            var weapon = inventory.mainHand as Weapon;
            weapon.RefreshStats();
        }
        if (inventory.offHand != null) {
            inventory.offHand.Call(position, position);
        }
        if (inventory.helmet != null) {
            inventory.helmet.Call(position, position);
        }
        if (inventory.armour != null) {
            inventory.armour.Call(position, position);
        }
        foreach (var item in inventory.trinkets) {
            item.Call(position, position);
        }
        attack =baseAttack+ bonusAttack;
        maxHealth = baseMaxHealth + bonusMaxHealth;
        armour = baseArmour+bonusArmour;
        if (health < maxHealth) { 
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
