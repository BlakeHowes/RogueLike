using LlamAcademy.Spring.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using static ItemStatic;


public class Stats : MonoBehaviour {
    public TileBase tile;
    public PartyManager.State state = PartyManager.State.Idle;
    [HideInInspector] public ElementalStats elementalStats;
    [HideInInspector] public ActionPointStack actionPointStack;
    [Header("Base Stats")]
    public int maxHealthBase;
    public int maxArmourBase;
    public int actionPointsBase;
    public int throwingRangeBase;
    public int enemyAlertRangeBase;
    public int skillRangeBase;

    [Header("Temporary Stats")]
    [HideInInspector] public int maxHealthTemp;
    public int maxArmourTemp;
    public int actionPointsTemp;
    public int actionPointSkillCostChange = 0;
    [HideInInspector] public int throwingRangeTemp;
    [HideInInspector] public int walkCost = 1;
    public int enemyAlertRangeTemp;
    [HideInInspector] public int skillRangeTemp;
    public int directDamage;
    public int armour;
    public int damageTaken;
    public int minRange;

    [Header("Weapon Stats")]
    public int meleeDamage;
    public float meleeDamageMultiple = 1;
    public float meleeAccuracy;
    public float meleeAccuracyMultiple = 1;

    [Header("Dynamic Stats")]
    public int health;
    public float actionPoints;
    public int actionPointsSum;
    private int hitNumberTotal;
    private bool totalTimerRunning = false;
    private bool blockDamage = false;

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
        maxArmourTemp = maxArmourBase;
        throwingRangeTemp = throwingRangeBase;
        walkCost = 1;
        enemyAlertRangeTemp = enemyAlertRangeBase;
        skillRangeTemp = skillRangeBase;
        directDamage = 0;
        meleeDamage = 0;
        meleeDamageMultiple = 1f;
        meleeAccuracy = 0f;
        meleeAccuracyMultiple = 1f;
        actionPointSkillCostChange = 0;
        minRange = 0;
        blockDamage = false;
    }

    public void OnEnable() {
        Manager.EndOfStackEvent += EndOfStackGORemoval;
        globalValues = Manager.GetGlobalValues();
        if(gameObject.tag == "Party") {
            DontDestroyOnLoad(this);
        }
        inventory = GetComponent<Inventory>();
        TryGetComponent(out ElementalStats elementalStats);
        this.elementalStats = elementalStats;
        TryGetComponent(out ActionPointStack actionPointStack);
        this.actionPointStack = actionPointStack;
        CharacterSpriteGenerator.CreateCharacterSprite(gameObject);
    }

    public void OnDisable() {
        Manager.EndOfStackEvent -= EndOfStackGORemoval;
    }

    public void BlockDamage() {
        blockDamage = true;
    }

    public void SetMinRange(int amount) {
        if(minRange < amount) { minRange = amount; }
    }


    public void OnStartOfCombat() {
        state = PartyManager.State.Combat;
        PartyManager.i.ChangeCharacterMaterial(gameObject);
        GameUIManager.i.PartyIconTurnTakenGraphicUpdate();
    }
    public void OnExitCombat() {
        state = PartyManager.State.Idle;
        PartyManager.i.ChangeCharacterMaterial(gameObject);
        GameUIManager.i.PartyIconTurnTakenGraphicUpdate();
    }

    //Hack to set armour too armour temp, I cant figure out a better way
    private bool armourChecked = false;
    public void OnIdleTick() {
        if (!armourChecked) { 
            RefreshCharacter(gameObject.Position());
            armour = maxArmourTemp; 
            armourChecked = true; 
        }
        armour++;
        if (armour > maxArmourTemp) { armour = maxArmourTemp; }
        if (state == PartyManager.State.Idle) {
            ResetActionPoints();
        }
        if(gameObject.tag == "Summon") {
            PartyManager.i.SetCurrentCharacter(PartyManager.i.party[0]);
            var pos = gameObject.Position();
            inventory.AddStatusEffect(pos, pos,globalValues.summonSickness);
        }
    }

    public void InitializeCharacter() {
        if (maxHealthTemp == 0) {
            maxHealthTemp = maxHealthBase;
            health = maxHealthTemp;
        }
        ResetActionPoints();
        if (healthbar) { return; }
        healthbarGameObject = Instantiate(globalValues.healthBarPrefab, GameUIManager.i.canvasWorld);
        healthbar = healthbarGameObject.GetComponent<HealthBar>();
        healthbar.InitializeHealthbar(this, inventory);
        RefreshCharacter(gameObject.Position());
    }
    Color elementHitColour = Color.red;
    public void TakeDamage(int damage, Vector3Int origin) {
        TakeDamage(damage, origin, false);
        elementHitColour = Color.red;
    }

    public void TakeDamage(int damage, Vector3Int origin,bool ignoreArmor,Surface element, WeaponType weaponType) {
        if (elementalStats == null) { TakeDamage(damage, origin, false);return; }
        float damageResult = damage;

        if (element != null) {
            damageResult *= elementalStats.GetElementalDamageModifier(element);
            if (damageResult == 0) { SpawnHitNumber("Immune", element.iconColour, 1); }
            elementHitColour = element.iconColour;
        }

        if(weaponType != WeaponType.none) {
            damageResult *= elementalStats.GetWeaponTypeDamageModifier(weaponType);
        }
        TakeDamage(Mathf.RoundToInt(damageResult), origin, ignoreArmor);
    }


    public void TotalValue(int amount) {
        hitNumberTotal += amount;
        if(!totalTimerRunning)
        StartCoroutine(TotalTimer());
    }

    public IEnumerator TotalTimer() {
        totalTimerRunning = true;
        yield return new WaitForSeconds(0.2f);
        if (gameObject.tag != "Interactable" && gameObject.tag != "Door") {
            if (hitNumberTotal == 0) { SpawnHitNumber("Miss", Color.yellow, 1); }
            else {
                SpawnHitNumber(hitNumberTotal.ToString(), elementHitColour, 1);
            }

        }
        hitNumberTotal = 0;
        totalTimerRunning = false;
    }

    public void TakeDamage(int damage,Vector3Int origin,bool ignoreArmor) {
        if (!gameObject.activeSelf) { return; }
        var position = gameObject.Position();
        var originGO = origin.GameObjectGo();
        RefreshCharacter(position);
        damageTaken = damage;

        if (!blockDamage && originGO != gameObject) {
            inventory.CallEquipment(position, origin, CallType.OnTakeDamage);
            Manager.OnTakeDamageCall(position, origin);
        }


        if (blockDamage) {
            blockDamage = false;
            return;
        }

        var damageTotal = damage;
        if (!ignoreArmor) {
            var armourLeft = armour - damage;
            damage -= armour;
            armour = armourLeft;
            if (armourLeft < 0) { armour = 0; }
            if (damage < 0) { damage = 0; }
        }

        if (!infiniteHealth)health -= damage;

        if (gameObject.CompareTag("Enemy") && originGO) {
            var originStats = originGO.GetComponent<Stats>();
            if (state != PartyManager.State.Combat || originStats.state != PartyManager.State.Combat) {
                state = PartyManager.State.Combat; 
                PartyManager.i.enemyParty.Add(gameObject);
                if (originGO.CompareTag("Party") && health > 0) {
                    originStats.state = PartyManager.State.Combat;
                    GetComponent<Behaviours>().target = originGO;
                }

            }
        }

        if (originGO) {
            var stats = originGO.GetComponent<Stats>();
            //stats.state = PartyManager.State.Combat;
            if (gameObject != originGO) {
                stats.directDamage += damage;
                originGO.GetComponent<Inventory>().CallEquipment(position, origin, CallType.OnDirectDamage);
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
        TotalValue(damageTotal);
        UpdateHealthBar();
        if(health > 0) {
            GridManager.i.StartCoroutine(GridManager.i.graphics.FlashAnimation(gameObject, origin, Color.white));
            return;
        }
        Die(position,origin);
    }
    bool dead = false;

    public void Die(Vector3Int position,Vector3Int origin) {
        if (dead) { return; }
        dead = true;
        
        inventory.CallEquipment(position, position, CallType.OnDeath);
        Manager.OnDeathEventCall(position, origin);
        PartyManager.i.RemoveDeadEnemy(gameObject);
        if(!gameObject.CompareTag("Summon")) inventory.items.Drop(position, position);
        if(gameObject.CompareTag("Party")) {
            inventory.mainHand.Drop(position, true);
            inventory.offHand.Drop(position, true);
            inventory.helmet.Drop(position, true);
            inventory.armour.Drop(position, true);
            inventory.trinket1.Drop(position, true);
            inventory.trinket2.Drop(position, true);
            inventory.trinket3.Drop(position, true);
            inventory.trinket4.Drop(position, true);
            gameObject.transform.Find("Character Light").transform.SetParent(null);

        }
        GridManager.i.graphics.UpdateEverything();
        if (!GridManager.i.enumeratingStack) { GridManager.i.StartStack(); }
        healthbarGameObject.SetActive(false);
        if (setInactiveOnDeath) {
            gameObject.SetActive(false);
            GridManager.i.goMethods.RemoveGameObject(position);
        }
    }

    public void EndOfStackGORemoval(bool idkwhyIhavetomakeavariable) {
        if(health <= 0) { gameObject.SetActive(false); }
    }

    public void SpawnHitNumber(string value,Color colour,float scale) {
        string text = value.ToString();
        var hitNumber = Instantiate(globalValues.hitNumberPrefab, GameUIManager.i.canvasWorld);
        hitNumber.transform.position = gameObject.transform.position + new Vector3(0, 0.5f, 0);
        hitNumber.GetComponent<HitNumber>().Set(text, colour, scale);
    }

    public void Heal(int amount) {
        var position = gameObject.Position();

        inventory.CallEquipment(position, position, CallType.OnHeal);

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


    public void UseActionPoints(int amount) {
        if (actionPointStack) {
            actionPointStack.UseActionPoints(amount);
            return;
        }

        actionPoints -= amount;
    }

    public void GainActionPoints(int amount,ActionPointType type, ItemAbstract item) {
        if (actionPointStack) {
            for (int i = 0; i < amount; i++) {
                actionPointStack.points.Add(new ActionPoint(type, item));
            }
            return;
        }

        actionPoints += amount;
    }

    public void GainActionPoints(int amount) {
        if (actionPointStack) {
            for (int i = 0; i < amount; i++) {
                actionPointStack.points.Add(new ActionPoint(ActionPointType.Normal,null));
            }
            return;
        }

        actionPoints += amount;
    }

    public bool AmITotallyOutOfActionPoints() {
        if (actionPointStack) {
            return actionPointStack.AmITotallyOutOfActionPoints();
        }

        if (actionPoints <= 0) return true;
        return false;
    }

    public bool DoIHavenEnoughNormalActionPoints(int cost) {
        if (actionPointStack) {
            return actionPointStack.DoIHavenEnoughNormalActionPoints(cost);
        }

        if (actionPoints >= cost) return true;
        return false;
    }

    public bool DoIHaveActionPointsToWalk() {
        if (actionPointStack) {
            return actionPointStack.DoIHaveActionPointsToWalk(walkCost);
        }
        if (actionPoints >= walkCost) return true;
        return false;
    }

    public void UseWalkActionPoints() {
        if (actionPointStack) {
            actionPointStack.UseWalkActionPoints(walkCost);
            return;
        }
        actionPoints -= walkCost;
    }

    public void ResetActionPoints() {
        if (actionPointStack) { actionPointStack.ResetActionPoints(); }
        actionPoints = actionPointsTemp;
        if(actionPoints == 0) { actionPoints = actionPointsBase; }
    }

    public void Wait() {
        if (actionPointStack) {
            actionPointStack.UseWalkActionPoints(1);
        }
    }

    public void ClearAP() {
        if (actionPointStack) { 
            actionPointStack.points.Clear();
            Debug.Log(actionPointStack.points.Count);
        }
    }

    public void RefreshCharacter(Vector3Int position) {
        ResetTempStats();
        //System.Diagnostics.StackTrace stackTrace = new System.Diagnostics.StackTrace();
        //System.Reflection.MethodBase methodBase = stackTrace.GetFrame(1).GetMethod();
        //Debug.LogError(gameObject.name +" "+ methodBase.DeclaringType.Name + " Called by " + methodBase.Name);

        //inventory.CallEquipment(position, position, CallType.ResetStatsToBase);
        inventory.CallEquipment(position,position, CallType.CalculateStats);
        if (!armourChecked) { armour = maxArmourTemp; armourChecked = true; }
        //Debug.Log(armour +" "+ armourTemp + "Status Effects " + inventory.statusEffects.Count);
        if (armour > maxArmourTemp) { armour = maxArmourTemp; }
        UpdateHealthBar();

    }

    public void OnDestroy() {
        Destroy(healthbarGameObject.gameObject);
    }
}
