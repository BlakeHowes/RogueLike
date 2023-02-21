using Mono.Cecil;
using Panda;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class PartyManager : MonoBehaviour {
    public static PartyManager i;
    public GameObject currentCharacter;
    public List<GameObject> party = new List<GameObject>();
    public List<GameObject> enemyParty = new List<GameObject>();
    public int enemyRange;
    public Vector3Int characterFollowPosition;
    public float animationDistance;
    public List<GameObject> partyMemberTurnTaken = new List<GameObject>();
    public List<GameObject> enemyTurnTaken = new List<GameObject>();
    public bool follow = true;

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
            var memberpos = member.position();
            var moved = PathingManager.i.MoveOneStep(playerpos, memberpos);
            if (moved == false && !Actions.i.InMeleeRange(playerpos, memberpos)) {
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
        if (currentCharacter == null) {
            if (currentFaction == Faction.Party) { SwitchToNextCharacter(); }
            if (currentFaction == Faction.Enemy) { NextEnemy(null); }
        }
    }

    public void SetCurrentCharacter(GameObject character) {
        if (currentCharacter != null) {
            currentCharacter.GetComponent<SpriteRenderer>().material = GameUIManager.i.normalMaterial;
        }
        currentCharacter = character;
        currentFaction = character.GetComponent<Stats>().faction;
        if (party.Contains(character)) {
            character.GetComponent<SpriteRenderer>().material = GameUIManager.i.outlineMaterial;
        }
        else {
            character.GetComponent<SpriteRenderer>().material = GameUIManager.i.enemyoutlineMaterial;
        }
        GameUIManager.i.UpdatePartyIcons(party);

        var stats = character.GetComponent<Stats>();
        stats.ResetTempStats();
        stats.RecalculateStats();
        GameUIManager.i.actionPointsText.text = stats.actionPoints.ToString();
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
        }
        foreach (GameObject character in missingcharacters) {
            listOfCharacters.Remove(character);
        }
    }

    public void SwitchToNextCharacter() {
        Debug.Log("Switch");
        RemoveNullCharacters(party);
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
        SetCurrentCharacter(party[nextCharacterIndex]);

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
        GameUIManager.i.SetEnemyColourToWhite();
        List<GameObject> PartyCopy = new List<GameObject>();
        foreach(GameObject member in enemyParty) {
            PartyCopy.Add(member);
        }
        foreach (GameObject enemy in PartyCopy) {
            if (!enemy) { continue; }
            enemy.GetComponent<Stats>().ResetActionPoints();
            StartOfPartyTurnCall(enemy);
        }
        enemyTurnTaken.Clear();
        SetCurrentCharacter(enemyParty[0]);
        var pos = currentCharacter.position();  //Expensive call
        currentCharacter.GetComponent<Inventory>().CallEquipment(pos, pos, ItemAbstract.Signal.FirstEnemyMove);
        currentCharacter.GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Update;
    }

    public void NextEnemy(GameObject enemy) {
        if(enemy)
        enemyTurnTaken.Add(enemy);
        Debug.Log("Next Enemy");
        foreach (GameObject enemyCharacter in enemyParty) {
            if (enemyTurnTaken.Contains(enemyCharacter) || !enemyCharacter) { continue; }
            SetCurrentCharacter(enemyCharacter);
            var pos = enemyCharacter.position();  //Expensive call
            enemyCharacter.GetComponent<Inventory>().CallEquipment(pos, pos, ItemAbstract.Signal.FirstEnemyMove);
            enemyCharacter.GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Update;
            return;
        }
        PartyStartTurn();
    }

    public void StartOfPartyTurnCall(GameObject character) {
        var pos = character.position();  //Expensive call
        character.GetComponent<Inventory>().CallEquipment(pos, pos, ItemAbstract.Signal.StartOfTurn);
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
        enemy.GetComponent<Behaviours>().ChangeColour(Color.white);
        var clone = Instantiate(GameUIManager.i.enemyInCombatUI, enemy.transform);
        clone.transform.localPosition = Vector3.zero;
    }

    public void RemoveEnemy(GameObject enemy) {
        if (!enemyParty.Contains(enemy)) return;
        enemyParty.Remove(enemy);
    }

    public IEnumerator TakeDamageAnimation(GameObject character, Vector3Int origin) {
        if (character == null) yield return null;
        var position = character.position();
        var renderer = character.GetComponent<SpriteRenderer>();
        var startPosition = character.transform.position;
        var hitMaterial = GameUIManager.i.hitMaterial;
        var spriteMaterial = GameUIManager.i.normalMaterial;
        GridManager.i.goTilemap.SetColor(position, Color.clear);

        if (renderer == null) { yield return null; }
        character.transform.position = Vector3.MoveTowards(character.transform.position, startPosition, -animationDistance);
        renderer.material = hitMaterial;
        yield return new WaitForSeconds(0.15f);
        renderer.material = spriteMaterial;
        character.transform.position = startPosition;
        yield return new WaitForSeconds(0.15f);
        renderer.material = hitMaterial;
        yield return new WaitForSeconds(0.15f);
        renderer.material = spriteMaterial;
        if (character == currentCharacter) {
            renderer.material = GameUIManager.i.outlineMaterial;
        }
    }
}
