using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Panda;
using UnityEngine.Tilemaps;
using static ItemStatic;
using static PartyManager;
using Random = UnityEngine.Random;
public class Behaviours : MonoBehaviour
{
    private Vector3Int origin;
    private Vector3Int targetPosition;
    public GameObject target;
    private Stats stats;
    public int sightRange = 12;
    Vector3 offset = new Vector3(0.5f, 0.5f, 0.5f);
    Tilemap gotilemap;
    private List<string> targetStrings = new List<string>();
    public Tags targetsTags;
    private GlobalValues globalValues;

    public void OnEnable() {
        gotilemap = GridManager.i.goTilemap;
        targetStrings = ConvertFlagsEnumToStringList(targetsTags,gameObject);
        globalValues = Manager.GetGlobalValues();
    }

    [Task]
    public void UseSkills() {
        var inventory = GetComponent<Inventory>();
        foreach (var item in inventory.skills) {
            if(item is not Skill) {
                Debug.LogError(item + " in " + gameObject.name +" skills");
                continue; 
            }
            Skill skill = item as Skill;
            if (skill.CheckValidity(targetPosition,origin,gameObject)) {
                MouseManager.i.itemSelected = item;
               
                skill.Call(targetPosition,origin, gameObject,CallType.CalculateStats);
                GameUIManager.i.ShowRange(origin, skill.range);
                globalValues.GetWaitSeconds(0.2f).AddToStack();
                skill.Call(targetPosition,origin,gameObject, CallType.OnActivate);
                globalValues.GetWaitSeconds(0.2f).AddToStack();
                MouseManager.i.itemSelected = null;
                ThisTask.Succeed();
                break;
            }
        }
        ThisTask.Fail();
    }

    [Task]
    public void CheckInformation() {
        UpdateInformation();
        ThisTask.Succeed();
    }

    public void GetTarget() {
        target = GridManager.i.goMethods.FindClosestGameObject(sightRange, origin, targetStrings);
    }
    [Task]
    public bool isHealthAboveZero() {
        if(stats.health > 0) { return true; }
        return false;
    }

    public List<Skill> AvailableSkills() {
        var inventory = GetComponent<Inventory>();
        List<Skill> skills = new List<Skill>();
        return skills;
    }

    public void UpdateInformation() {
        Debug.Log("Update Info");
        origin = gameObject.Position();
        stats = gameObject.GetComponent<Stats>();
        stats.RefreshCharacter(origin);
        GetTarget();
        Debug.Log("target " + target);
        if (!target) {
            stats.state = State.Idle;
            PartyManager.i.RemoveEnemy(gameObject);
            if (GridManager.i.fogTilemap.GetTile(origin) == null) { ChangeColour(Color.white); }
            if (transform.childCount > 0) { Destroy(transform.GetChild(0).gameObject); }
        }

        if (target) {
            targetPosition = target.Position();
            Debug.Log("target position " + targetPosition);
        }
       
    }

    [Task]
    void MakeQuestionMark() {
        GetComponent<Stats>().SpawnHitNumber("?", Color.white, 2);
        ThisTask.Succeed();
    }

    [Task]
    void SetActionPoints(int amount) {
        GetComponent<Stats>().actionPoints = amount;
        ThisTask.Succeed();
    }

    public void ChangeColour(Color colour) {
        gameObject.GetComponent<SpriteRenderer>().color = colour;
        foreach (Transform child in transform) {
            SpriteRenderer rend = null;
            child.gameObject.TryGetComponent(out rend);
            if (rend) { rend.color = colour; }
        }
        var stats = gameObject.GetComponent<Stats>();
        var healthBar = stats.healthbarGameObject;
        if (healthBar && colour == Color.clear) { healthBar.SetActive(false); return; }
        else {if(healthBar) healthBar.SetActive(true); }
        stats.UpdateHealthBar();
    }

    [Task]
    bool isInCombat() {
        if (PartyManager.i.enemyParty.Contains(gameObject)) { return true; }
        if(stats) if(stats.state == State.Combat) { return true; }
        return false;
    }

    [Task]
    void checkEndTurn() {
        GridManager.i.TickGame();
        if (GetComponent<Stats>().actionPoints > 0) { ThisTask.Succeed(); return; }
        GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Manual;
        if (gameObject.CompareTag("Summon")) { ThisTask.Succeed(); PartyManager.i.EndTurn(); return; }
        PartyManager.i.EndEnemyTurn(gameObject);
        
        ThisTask.Succeed();
    }

    [Task]
    void checkEndTurnAlly() {
        GridManager.i.TickGame();
        if (GetComponent<Stats>().actionPoints > 0) { ThisTask.Succeed(); return; }
        GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Manual;
        PartyManager.i.EndTurn();

        ThisTask.Succeed();
    }

    [Task]
    void ManualTickMode() {
        GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Manual;
        ThisTask.Succeed();
    }

    [Task]
    void HideInFog() {

        ThisTask.Succeed();
    }

    [Task]
    void WalkRandomly() {
        var position = gameObject.transform.position.FloorToInt();
        if (position.GameObjectGo() != gameObject) {
            position = gameObject.Position();

        }

        if (position.GameObjectGo() != gameObject && !gotilemap.GetTile(position)) {
            ThisTask.Succeed(); return ;
        }
        var pos = new Vector3Int(position.x + Random.Range(-1, 2), position.y + Random.Range(-1, 2));
        if (!pos.IsWalkable()) { ThisTask.Succeed(); return; }
        if (pos.GameObjectSpawn()) { ThisTask.Succeed(); return; }
        GridManager.i.goMethods.RemoveGameObject(position);
        GridManager.i.goMethods.SetGameObject(pos, gameObject);
        gameObject.transform.position = pos + offset;
        GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Manual;
      
        ThisTask.Succeed();
    }

    public void IdleBehaviour() {
        var position = gameObject.transform.position.FloorToInt();
        if(position.GameObjectGo() != gameObject) {
            position = gameObject.Position();
          
        }

        if(position.GameObjectGo() != gameObject && !gotilemap.GetTile(position)) {
            return;
        }
        var pos =new Vector3Int(position.x + Random.Range(-1, 2), position.y + Random.Range(-1, 2));
        if (!GridManager.i.floorTilemap.GetTile(pos)) { return; }
        if (pos.GameObjectSpawn()) { return; }
        GridManager.i.goMethods.RemoveGameObject(position);
        GridManager.i.goMethods.SetGameObject(pos, gameObject);
        gameObject.transform.position = pos + offset;
    }

    [Task]
    void Attack() {
        Debug.Log("attack target " + target + " Origin "+ origin + " Target Position " + targetPosition);
        if (!target) { ThisTask.Fail(); return; }
        if (MouseManager.i.Attack(targetPosition, origin, target, gameObject)){
            globalValues.GetWaitSeconds(0.2f).AddToStack();
            ThisTask.Succeed();
            return;
        }
        ThisTask.Fail();
        return;
    }

    [Task]
    void CallActivate() {
        GetComponent<Inventory>().CallEquipment(origin, origin, CallType.OnActivate);
        ThisTask.Succeed();
        return;
    }

    [Task]
    bool isTargetNull() {
        if (target == null) return true;
        return false;
    }

    [Task]
    void DebugLog() {
        Debug.Log("Debug Task");
        ThisTask.Succeed();
    }

    [Task]
    public void StartStack() {
        GridManager.i.StartStack();
        ThisTask.Succeed();
    }

    [Task]
    bool isCurrentTurnCharacter() {
     if (PartyManager.i.currentCharacter == gameObject) return true;
        return false;
    }

    [Task]
    void WaitForStack() {
        if (!GridManager.i.enumeratingStack) { ThisTask.Succeed(); }
    }
    [Task]
    void MoveToTarget() {
        if (!target) { ThisTask.Fail();return; }
        if (MouseManager.i.Walk(targetPosition, origin, gameObject.GetComponent<Stats>())) {
            ThisTask.Succeed();
            return;
        }
        ThisTask.Fail(); return;
    }

    [Task]
    void AdvanceToTarget() {
        if (!target) { ThisTask.Fail(); return; }
        PathingManager.i.EnemyMoveup(targetPosition, origin);
        gameObject.GetComponent<Stats>().actionPoints -= 1;
        ThisTask.Succeed();
    }
}
