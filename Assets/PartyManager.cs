using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class PartyManager : MonoBehaviour {
    public static PartyManager i;
    public GameObject currentCharacter;
    public List<GameObject> party = new List<GameObject>();
    public List<GameObject> enemyParty = new List<GameObject>();
    public int enemyRange;
    public State state = State.Exploring;
    public Vector3Int characterFollowPosition;
    public float animationDistance;
    public List<GameObject> partyMemberTurnTaken = new List<GameObject>();
    public List<GameObject> enemyTurnTaken = new List<GameObject>();
    public bool follow = true;
    public enum State {
        Exploring,
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
        var playerpos = characterFollowPosition;
        foreach (GameObject member in party) {
            if (member == null) {
                RemoveNullCharacters(party);
                continue;
            }
            if (member == currentCharacter) {
                continue;
            }
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
        Breakable,
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
            SwitchToNextCharacter();
        }
    }

    public void SetCurrentCharacter(GameObject character) {
        if (currentCharacter != null) {
            currentCharacter.GetComponent<SpriteRenderer>().material = GameUIManager.i.normalMaterial;
        }
        currentCharacter = character;
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

    public List<GameObject> EnemyPartyState() {
        RemoveNullCharacters(enemyParty);
        //FindEnemies();
        List<GameObject> attackingEnemies = new List<GameObject>();
        for (int i = 0; i < enemyParty.Count; i++) {
            if (enemyParty[i] == null) continue;
            enemyParty[i].GetComponent<Stats>().AISense();
        }
        if (enemyParty.Count > 0) {
            foreach (GameObject character in enemyParty) {
                if (character == null) continue;
                var stats = character.GetComponent<Stats>();
                if (stats.state == AIAbstract.State.Attacking) {
                    attackingEnemies.Add(character);
                }
            }
        }
        if (attackingEnemies.Count == 0) {
            state = State.Exploring;
            return attackingEnemies;
        }
        state = State.Combat;
        return attackingEnemies;
    }

    public void EndTurn() {
        var attackingEnemies = EnemyPartyState();
        if (state == State.Exploring) {
            return;
        }

        if (currentCharacter != null) {
            partyMemberTurnTaken.Add(currentCharacter);
        }
        SwitchToNextCharacter();        
        InventoryManager.i.UpdateInventory();

        if (partyMemberTurnTaken.Count >= party.Count) {
            MouseManager.i.disableMouse = true;
            SetCurrentCharacter(attackingEnemies[0]);
            attackingEnemies[0].GetComponent<Stats>().AIAttack();
        }
        Camera.main.GetComponent<SmoothCamera>().resetFollow();
    }

    public void PartyStartTurn() {
        MouseManager.i.disableMouse = false;
        RemoveNullCharacters(party);
        foreach (var player in party) {
            if(player != null)
            player.GetComponent<Stats>().ResetActionPoints();
        }
        SetCurrentCharacter(party[0]);
        partyMemberTurnTaken.Clear();
        enemyTurnTaken.Clear();
    }

    public void TakeEnemyTurn(IEnumerator enumerator, GameObject enemy) {
        StartCoroutine(enumerator);
    }

    public void EndEnemyTurn(GameObject enemy) {
        var attackingEnemies = EnemyPartyState();
        enemyTurnTaken.Add(enemy);
        Debug.Log(attackingEnemies.Count);
        foreach (GameObject enemyMember in attackingEnemies) {
            if (!enemyTurnTaken.Contains(enemyMember)) {
                if (enemyMember == null) continue;
                SetCurrentCharacter(enemyMember);

                //Get Enemy ready for their turn
                var enemyStats = enemyMember.GetComponent<Stats>();
                enemyStats.ResetActionPoints();
                enemyStats.AIAttack();
                Debug.Log("Set");
                return;
            }
        }

        foreach (GameObject enemyMember in attackingEnemies) {
            enemyMember.GetComponent<Stats>().ResetActionPoints();
        }
        PartyStartTurn();
    }

    public IEnumerator EnemyPartyTurn(List<GameObject> attackingEnemies) {
        MouseManager.i.disableMouse = true;
        foreach (GameObject enemy in attackingEnemies) {
            SetCurrentCharacter(enemy);
            Actions.i.actionPoints = currentCharacter.GetComponent<Stats>().actionPoints;
            enemy.GetComponent<Stats>().AIAttack();
            yield return new WaitForSeconds(3);
        }
        MouseManager.i.disableMouse = false;
        SetCurrentCharacter(party[0]);
        Actions.i.actionPoints = currentCharacter.GetComponent<Stats>().actionPoints;
        GameUIManager.i.actionPointsText.text = Actions.i.actionPoints.ToString();
        yield return null;
    }

    public void AddEnemy(GameObject enemy) {
        if (enemyParty.Contains(enemy)) return;
        enemyParty.Add(enemy);
    }

    public IEnumerator TakeDamageAnimation(GameObject character, Vector3Int origin) {
        if (character == null) yield return null;
        var position = character.position();
        var renderer = character.GetComponent<SpriteRenderer>();
        var startPosition = character.transform.position;
        var hitMaterial = GameUIManager.i.hitMaterial;
        var spriteMaterial = GameUIManager.i.normalMaterial;
        GridManager.i.goTilemap.SetColor(position, Color.clear);
        Debug.Log(character.transform.position);

        if (renderer == null) { yield return null; }
        if (character.GetComponent<Stats>().faction != Faction.Wall)
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
