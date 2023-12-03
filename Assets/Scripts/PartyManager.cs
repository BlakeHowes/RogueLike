using Panda;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using static ItemStatic;

public class PartyManager : MonoBehaviour {
    public static PartyManager i;
    public GameObject currentCharacter;
    public List<GameObject> party = new List<GameObject>();
    public List<GameObject> enemyParty = new List<GameObject>();
    [HideInInspector]public Vector3Int characterFollowPosition;
    public List<GameObject> partyMemberTurnTaken = new List<GameObject>();
    public List<GameObject> enemyTurnTaken = new List<GameObject>();
    public bool follow = true;
    private GlobalValues globalValues;
    string currentTag;

    public enum State {
        Idle,
        Combat
    }

    public void RemoveDeadEnemy(GameObject enemy) {
        if (enemyParty.Contains(enemy)) {
            enemyParty.Remove(enemy);
        }
    }

    public void FollowToggle() {
        follow = !follow;
    }

    public void Follow() {

        if (!follow) {
            return;
        }
        foreach(GameObject member in party) {
            if(member == null) { continue; }
            if(member.GetComponent<Stats>().state == State.Combat) {
                return;
            }
        }
        var playerpos = characterFollowPosition;
        RemoveNullCharacters(party);
        foreach (GameObject member in party) {
            if (member == null) { continue; }
            if (member == currentCharacter) {  continue; }
            var memberpos = member.Position();

            if (GridManager.i.tools.InMeeleeRange(memberpos, playerpos)) {
                if (FloorManager.i.IsWalkable(playerpos) && playerpos.GameObjectGo() == null) {
                    PathingManager.i.MovePosition(playerpos, memberpos, member);
                    StartCoroutine(PathingManager.i.WalkAnimation(member, playerpos));
                    playerpos = memberpos;
                    continue;
                }
            }

            var moved = PathingManager.i.MoveOneStep(playerpos, memberpos);
           if (moved == false && !playerpos.InMeleeRange(memberpos)) {
                PathingManager.i.MoveOneStepLeader(playerpos, memberpos,member);
            }
            playerpos = memberpos;
        }
    }
    public void Awake() {
        globalValues = Manager.GetGlobalValues();
        i = this;
    }

    [System.Flags]
    public enum Tags {
        None = 0x00,
        Allies = 0x01,
        Enemies = 0x02,
        Interactable = 0x04,
        Passive = 0x08,
        Summon = 0x10,
        Door = 0x20
    }

    public bool InTeam(GameObject parentGO, GameObject target) {
        if (parentGO.CompareTag(target.tag)) { return true; }
        if(party.Contains(parentGO) && party.Contains(target)){ return true; }
        if(enemyParty.Contains(parentGO) && enemyParty.Contains(target)){ return true; }
        return false;
    }

    public bool IsEnemy(GameObject parentGO, GameObject target) {
        if (parentGO.CompareTag("Party") || parentGO.CompareTag("Summon")) {
            if (target.CompareTag("Enemy")) {
                return true; 
            } }
        if (parentGO.CompareTag("Enemy")) { if (target.CompareTag("Party") || target.CompareTag("Summon")) { return true; }  }
        return false;
    }

    public static List<string> ConvertFlagsEnumToStringList(Tags tags,GameObject parentGO) {
        List<string> tagsString = new List<string>();
        if(parentGO == null) {
            tagsString.Add("Party");
            tagsString.Add("Enemy");
            tagsString.Add("Interactable");
            tagsString.Add("Passive");
            tagsString.Add("Summon");
            tagsString.Add("Door");
            return tagsString;
        }
        if (tags.HasFlag(Tags.Allies)) { tagsString.Add(parentGO.tag); }
        if (tags.HasFlag(Tags.Enemies)) { 
            if(parentGO.CompareTag("Party") || parentGO.CompareTag("Summon")) { tagsString.Add("Enemy"); }
            if(parentGO.CompareTag("Enemy")) { tagsString.Add("Party"); }
            if(!parentGO.CompareTag("Party") && !parentGO.CompareTag("Summon") && !parentGO.CompareTag("Enemy")) {
                tagsString.Add("Party"); tagsString.Add("Summon"); tagsString.Add("Enemy");
            }
        }
        if (tags.HasFlag(Tags.Interactable)) { tagsString.Add("Interactable"); }
        if (tags.HasFlag(Tags.Passive)) { tagsString.Add("Passive"); }
        if (tags.HasFlag(Tags.Summon)) { tagsString.Add("Summon"); }
        if (tags.HasFlag(Tags.Door)) { tagsString.Add("Door"); }
        return tagsString;
    }

    public void AddPartyMember(GameObject character) {
        party.Add(character);
        currentCharacter = character;
        SetCurrentCharacter(party[0]);
    }

    public float endTurnTimer;
    public void Update() {

        if(currentTag != "Party") {
            endTurnTimer += Time.deltaTime;
            if(endTurnTimer > 7) {
                if (currentTag == "Enemy") { EndEnemyTurn(currentCharacter); } else {
                    GridManager.i.itemsInActionStack.Clear();
                    EndTurn();
                }
            }
        }
        else {
            endTurnTimer = 0;
        }

        if (!currentCharacter) {
            if (currentTag == "Party") { SwitchToNextCharacter(); }
            if (currentTag == "Enemy") { EndEnemyTurn(null); }
        }
        if (currentCharacter) {
            if (!GridManager.i.enumeratingStack && currentTag == "Party") {
                MouseManager.i.disableMouseAndUI = false;
            }
            if (currentCharacter.activeSelf) { return; }
            if (currentTag == "Party") { SwitchToNextCharacter(); }
            if (currentTag == "Enemy") { EndEnemyTurn(null); }

        }
    }

    public void SetCurrentCharacter(GameObject character) {
        if (currentCharacter) { currentCharacter.GetComponent<SpriteRenderer>().material = globalValues.normalMaterial; }
        var previousCharacter = currentCharacter;
        currentCharacter = character;

        Manager.OnSwitchCharacterCall(currentCharacter, previousCharacter);

        currentTag = character.tag;
        var stats = character.GetComponent<Stats>();

        if(currentCharacter.tag == "Summon") { character.GetComponent<SpriteRenderer>().material = globalValues.summonMaterial; }
        if(currentCharacter.tag == "Party") { character.GetComponent<SpriteRenderer>().material = globalValues.outlineMaterial;}
        if(currentCharacter.tag == "Enemy") { character.GetComponent<SpriteRenderer>().material = globalValues.enemyoutlineMaterial; }


        if (currentCharacter.tag == "Summon") { MouseManager.i.disableMouseAndUI = true; }
        stats.ResetTempStats();
        var position = character.Position();
        stats.RefreshCharacter(position);
        InventoryManager.i.UpdateInventory(currentCharacter);
        GameUIManager.i.SetAP(stats.actionPoints);
        if(stats.state == State.Idle) {
            stats.ResetActionPoints();
        }
        GridManager.i.UpdateGame();
    }

    public GameObject GetCurrentTurnCharacter() {
        RemoveNullCharacters(party);
        return currentCharacter;
    }

    public void RemoveNullCharacters(List<GameObject> listOfCharacters) {
        List<GameObject> missingcharacters = new List<GameObject>();
        foreach (GameObject character in listOfCharacters) {
            if (character == null) {
                missingcharacters.Add(character);
                continue;
            }
            if (!character.activeSelf) { missingcharacters.Add(character); }
        }
        foreach (GameObject character in missingcharacters) {
            listOfCharacters.Remove(character);
        }
    }

    public void SwitchToNextCharacter() {
        RemoveNullCharacters(party);
        if (currentCharacter == null) {
            if(party.Count == 0) {
                GameUIManager.i.ShowGameOverUI();
                return;
            }
            SetCurrentCharacter(party[0]);
            GridManager.i.UpdateGame();
            return;
        }
        foreach (GameObject character in party) {
            if (partyMemberTurnTaken.Contains(character)) { continue; }
            SetCurrentCharacter(character);
            break;
        }
        if (party.Count == 0) { GameUIManager.i.ShowGameOverUI(); return; }
        currentCharacter.TryGetComponent(out PandaBehaviour panda);
        if (panda) {
            var pos = currentCharacter.Position();  //Expensive call
            currentCharacter.GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Update;
        }
        GridManager.i.UpdateGame();
    }

    public void EndTurn() {
        partyMemberTurnTaken.Add(currentCharacter);
        var previousPosition = currentCharacter.Position();
        currentCharacter.GetComponent<Inventory>().CallEquipment(previousPosition, previousPosition, CallType.OnEndOfIndivualTurn);
        SwitchToNextCharacter();
   
        if (partyMemberTurnTaken.Count >= party.Count) {
            EnemyPartyStartTurn();
        }
        else {
            var pos = currentCharacter.Position();
            currentCharacter.GetComponent<Inventory>().CallEquipment(pos, pos, CallType.StartOfIndividualTurn);
            GridManager.i.StartStack();
        }
        Camera.main.GetComponent<SmoothCamera>().resetFollow();
        StartCoroutine(MouseManager.i.EndOfTurnMouseDisableToPreventMissClick());
    }

    public void EnemyPartyStartTurn() {
        MouseManager.i.disableMouseAndUI = true;
        RemoveNullCharacters(enemyParty);
        if(enemyParty.Count == 0) {PartyStartTurn();return; }
        var partyCopy =ArrangeEnemyPartyBasedOnPath();
        foreach (GameObject enemy in partyCopy) {
            if (!enemy) { continue; }
            enemy.GetComponent<Stats>().ResetActionPoints();
            OnSwitchFaction(enemy);
        }
        enemyTurnTaken.Clear();
        SetCurrentCharacter(enemyParty[0]);
        var pos = currentCharacter.Position();
        currentCharacter.GetComponent<Inventory>().CallEquipment(pos, pos, CallType.StartOfIndividualTurn);
        currentCharacter.GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Update;
        GridManager.i.StartStackWithoutUpdate();
    }

    public List<GameObject> ArrangeEnemyPartyBasedOnPath() {
        List<GameObject> partyCopy = new List<GameObject>();
        Dictionary<GameObject,int> partyOrder = new Dictionary<GameObject,int>();
        var pathingInstance = PathingManager.i;
        foreach (GameObject member in enemyParty) {
            if (!member.activeSelf) { continue; }
            if (!member) { continue; }
            partyCopy.Add(member);
            member.TryGetComponent(out Behaviours behaviours);
            GameObject target = null;
            if (behaviours) {
                behaviours.GetTarget();
                target = behaviours.target;
            }

            if (!target) { continue; }
            if (pathingInstance.IsPathable(target.Position(), member.Position())) {
                partyOrder.Add(member, 0);
                continue;
            }
            partyOrder.Add(member, pathingInstance.PathDistance(target.Position(), member.Position()));
        }

        if(partyOrder.Count > 4) {
            partyCopy.Sort((p1, p2) => partyOrder.SingleOrDefault(s => s.Key == p1).Value.CompareTo(partyOrder.SingleOrDefault(s => s.Key == p2).Value));
        }
        
        enemyParty.Clear();
        foreach (GameObject enemy in partyCopy) { enemyParty.Add(enemy); }
        return partyCopy;
    }

    public void EndEnemyTurn(GameObject enemy) {
        if(enemy)enemyTurnTaken.Add(enemy);
        var enemyPosition = enemy.Position();
        if (enemy) enemy.GetComponent<Inventory>().CallEquipment(enemyPosition, enemyPosition, CallType.OnEndOfIndivualTurn);
        foreach (GameObject enemyCharacter in enemyParty) {
            if (enemyTurnTaken.Contains(enemyCharacter) || !enemyCharacter) { continue; }
            SetCurrentCharacter(enemyCharacter);
            var pos = enemyCharacter.Position();
            enemyCharacter.GetComponent<Inventory>().CallEquipment(pos, pos, CallType.StartOfIndividualTurn);
            enemyCharacter.GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Update;
            GridManager.i.StartStackWithoutUpdate();
            return;
        }
        PartyStartTurn();
    }

    public void OnSwitchFaction(GameObject character) {
        var pos = character.Position();
        var inventory = character.GetComponent<Inventory>();
        inventory.ReduceCoolDowns();
        inventory.CallEquipment(pos, pos, CallType.OnStartOfPartyTurn);
    }


    public void PartyStartTurn() {
        MouseManager.i.disableMouseAndUI = false;
        RemoveNullCharacters(party);
        foreach (var player in party) {
            if (!player) { continue; }
            player.GetComponent<Stats>().ResetActionPoints();
            player.GetComponent<NPCSearch>().Search();
            OnSwitchFaction(player);
        }
        if(party.Count == 0) { GameUIManager.i.ShowGameOverUI(); return; }
        SetCurrentCharacter(party[0]);
        partyMemberTurnTaken.Clear();

        var pos = currentCharacter.Position();
        currentCharacter.GetComponent<Inventory>().CallEquipment(pos, pos, CallType.StartOfIndividualTurn);
        GridManager.i.StartStack();
        MouseManager.i.UpdateHightlight(MouseManager.i.MousePositionOnGrid());
        //enemyTurnTaken.Clear();
    }

    public void TakeEnemyTurn(IEnumerator enumerator, GameObject enemy) {
        StartCoroutine(enumerator);
    }

    public void AddEnemy(GameObject enemy,Vector3Int origin) {
        if (enemyParty.Contains(enemy)) { return; }
        enemyParty.Add(enemy);
        var stats = enemy.GetComponent<Stats>();
        stats.SpawnHitNumber("!", Color.red, 2);
        stats.state = State.Combat;
        var clone = Instantiate(GameUIManager.i.enemyInCombatUI, enemy.transform);
        clone.transform.localPosition = Vector3.zero;
        PathingManager.i.FlipCharacter(enemy, origin, enemy.Position());
    }

    public void RemoveEnemy(GameObject enemy) {
        if (!enemyParty.Contains(enemy)) return;
        enemyParty.Remove(enemy);
    }
}
