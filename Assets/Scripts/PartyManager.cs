using Panda;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
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
    public GlobalValues globalValues;
    Faction currentFaction;
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
            if(member.GetComponent<Stats>().state == State.Combat) {
                return;
            }
        }
        var playerpos = characterFollowPosition;
        foreach (GameObject member in party) {
            if (member == null) { RemoveNullCharacters(party); continue; }
            if (member == currentCharacter) {  continue; }
            var memberpos = member.Position();
            var moved = PathingManager.i.MoveOneStep(playerpos, memberpos);
            if (moved == false && !playerpos.InMeleeRange(memberpos)) {
                PathingManager.i.MoveOneStepLeader(playerpos, memberpos);
            }
            playerpos = memberpos;
        }
    }
    public void Awake() {
        i = this;
    }

    public enum Faction {
        Party,
        Enemy,
        Interactable,
        Wall,
        Passive
    }

    public void AddPartyMember(GameObject character) {
        party.Add(character);
        currentCharacter = character;
        SetCurrentCharacter(party[0]);
    }

    public void Update() {
        if (!currentCharacter) {
            if (currentFaction == Faction.Party) { SwitchToNextCharacter(); }
            if (currentFaction == Faction.Enemy) { NextEnemy(null); }
        }
        if (currentCharacter.activeSelf) { return; }
        if (currentFaction == Faction.Party) { SwitchToNextCharacter(); }
        if (currentFaction == Faction.Enemy) { NextEnemy(null); }

    }

    public void SetCurrentCharacter(GameObject character) {
        if (currentCharacter) { currentCharacter.GetComponent<SpriteRenderer>().material = globalValues.normalMaterial; }

        currentCharacter = character;
        currentFaction = character.GetComponent<Stats>().faction;
        var stats = character.GetComponent<Stats>();

        if ( party.Contains(character)) { character.GetComponent<SpriteRenderer>().material = globalValues.outlineMaterial; }
        else { character.GetComponent<SpriteRenderer>().material = globalValues.enemyoutlineMaterial; }
        GameUIManager.i.UpdatePartyIcons(party);


        stats.ResetTempStats();
        stats.RecalculateStats(character.Position());
        GameUIManager.i.actionPointsText.text = stats.actionPoints.ToString();
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
        Debug.Log("Switch");
        RemoveNullCharacters(party);
        if (currentCharacter == null) {
            if(party.Count == 0) {
                GameUIManager.i.ShowGameOverUI();
                return;
            }
            SetCurrentCharacter(party[0]);
            GridManager.i.UpdateGame();
            GameUIManager.i.UpdatePartyIcons(party);
            return;
        }
        int i = 0;
        int currentCharacterIndex = 0;
        foreach (GameObject character in party) {
            if (character == currentCharacter) {
                currentCharacterIndex = i;
            }
            i++;
        }
        var nextCharacterIndex = currentCharacterIndex + 1;
        if (currentCharacterIndex == party.Count - 1) {
            nextCharacterIndex = 0;
        }
        if (party.Count == 0) { Debug.LogError("No party member found, check floor tilemap"); return; }
        SetCurrentCharacter(party[nextCharacterIndex]);
        Debug.Log("Set current character " + party[nextCharacterIndex]);
        GridManager.i.UpdateGame();
        GameUIManager.i.UpdatePartyIcons(party);
    }

    public void EndTurn() {
        if (currentCharacter != null) {
            partyMemberTurnTaken.Add(currentCharacter);
        }
        SwitchToNextCharacter();        
        InventoryManager.i.UpdateInventory();

        if (partyMemberTurnTaken.Count >= party.Count) {
            EnemyPartyStartTurn();
        }
        Camera.main.GetComponent<SmoothCamera>().resetFollow();
    }

    public void EnemyPartyStartTurn() {
        MouseManager.i.disableMouse = true;
        RemoveNullCharacters(enemyParty);
        if(enemyParty.Count == 0) {PartyStartTurn();return; }
        var partyCopy =ArrangeEnemyPartyBasedOnPath();
        foreach (GameObject enemy in partyCopy) {
            if (!enemy) { continue; }
            enemy.GetComponent<Stats>().ResetActionPoints();
            StartOfPartyTurnCall(enemy);
        }
        enemyTurnTaken.Clear();
        SetCurrentCharacter(enemyParty[0]);
        var pos = currentCharacter.Position();
        currentCharacter.GetComponent<Inventory>().CallEquipment(pos, pos, Signal.FirstEnemyMove);
        currentCharacter.GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Update;
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
            if (pathingInstance.IsPathable(target.transform.position.FloorToInt(), member.transform.position.FloorToInt())) {
                partyOrder.Add(member, 0);
                continue;
            }
            partyOrder.Add(member, pathingInstance.PathDistance(target.transform.position.FloorToInt(), member.transform.position.FloorToInt()));
        }

        foreach(var member in partyOrder) {
            Debug.Log(member);
        }
        if(partyOrder.Count > 4) {
            partyCopy.Sort((p1, p2) => partyOrder.SingleOrDefault(s => s.Key == p1).Value.CompareTo(partyOrder.SingleOrDefault(s => s.Key == p2).Value));
        }
        
        enemyParty.Clear();
        foreach (GameObject enemy in partyCopy) { enemyParty.Add(enemy); }
        return partyCopy;
    }

    public void NextEnemy(GameObject enemy) {
        if(enemy)
        enemyTurnTaken.Add(enemy);
        Debug.Log("Next Enemy");
        foreach (GameObject enemyCharacter in enemyParty) {
            if (enemyTurnTaken.Contains(enemyCharacter) || !enemyCharacter) { continue; }
            SetCurrentCharacter(enemyCharacter);
            var pos = enemyCharacter.Position();  //Expensive call
            enemyCharacter.GetComponent<Inventory>().CallEquipment(pos, pos, Signal.FirstEnemyMove);
            enemyCharacter.GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Update;
            return;
        }
        PartyStartTurn();
    }

    public void StartOfPartyTurnCall(GameObject character) {
        var pos = character.Position();  //Expensive call
        character.GetComponent<Inventory>().CallEquipment(pos, pos, Signal.StartOfTurn);
    }


    public void PartyStartTurn() {
        MouseManager.i.disableMouse = false;
        RemoveNullCharacters(party);
        foreach (var player in party) {
            if(player != null)
            player.GetComponent<Stats>().ResetActionPoints();
            player.GetComponent<NPCSearch>().Search();
            StartOfPartyTurnCall(player);
        }
        if(party.Count == 0) { GameUIManager.i.ShowGameOverUI(); return; }
        SetCurrentCharacter(party[0]);
        partyMemberTurnTaken.Clear();
        //enemyTurnTaken.Clear();
    }

    public void TakeEnemyTurn(IEnumerator enumerator, GameObject enemy) {
        StartCoroutine(enumerator);
    }

    public void AddEnemy(GameObject enemy) {
        if (enemyParty.Contains(enemy)) { return; }
        enemyParty.Add(enemy);
        var stats = enemy.GetComponent<Stats>();
        stats.SpawnHitNumber("!", Color.red, 2);
        stats.state = State.Combat;
        var clone = Instantiate(GameUIManager.i.enemyInCombatUI, enemy.transform);
        clone.transform.localPosition = Vector3.zero;
    }

    public void RemoveEnemy(GameObject enemy) {
        if (!enemyParty.Contains(enemy)) return;
        enemyParty.Remove(enemy);
    }
}
