using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class PartyManager : MonoBehaviour
{
    public static PartyManager i;
    public GameObject currentCharacter;
    public List<GameObject> party = new List<GameObject>();
    public int enemyRange;
    public State state = State.Exploring;
    public Vector3Int characterFollowPosition;
    public List<GameObject> EnemiesAttacking = new List<GameObject>();
    public Material spriteMaterial;
    public Material hitMaterial;
    public float animationDistance;
    public List<GameObject> partyMemberTurnTaken;

    public GameObject iconLayout;
    public GameObject iconPrefab;

    public bool follow = true;
    public enum State {
        Exploring,
        Combat
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
            if(member == null) {
                RemoveNullCharacters(party);
                continue;
            }
            if(member == currentCharacter) {
                continue;
            }
            var memberpos = member.position();
            PathingManager.i.MoveOneStep(playerpos, memberpos);
            playerpos = memberpos;
        }
    }
    public void Awake() {
        i = this;
    }

    public enum Faction {
        Party,
        Enemy,
        Openable,
        Breakable,
        Passive
    }

    public void AddPartyMember(GameObject character) {
        party.Add(character);
        currentCharacter = party[0];
    }

    public void Update() {
        if(currentCharacter == null) {
            SwitchToNextCharacter();
        }    
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
        currentCharacter = party[nextCharacterIndex];
        InventoryManager.i.UpdateInventory();
    }

    public List<GameObject> EnemyPartyState() {
        var attackingEnemies = FindEnemies();
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
        Actions.i.SetActionPoints(currentCharacter.GetComponent<Stats>().actionPoints);
        InventoryManager.i.UpdateInventory();

        if (partyMemberTurnTaken.Count >= party.Count) {
            StartCoroutine(EnemyPartyTurn(attackingEnemies));
            partyMemberTurnTaken.Clear();
            Debug.Log("AI TURN");
        }
    }

    public void TakeEnemyTurn(IEnumerator enumerator,GameObject enemy) {
        currentCharacter = enemy;
        StartCoroutine(enumerator);
    }

    public IEnumerator EnemyPartyTurn(List<GameObject> attackingEnemies) {
        MouseManager.i.disableMouse = true;
        foreach (GameObject enemy in attackingEnemies) {
            currentCharacter = enemy;
            enemy.GetComponent<Stats>().AIAttack();
            yield return new WaitForSeconds(1);
        }
        MouseManager.i.disableMouse = false;

        currentCharacter = party[0];
        Actions.i.actionPoints = currentCharacter.GetComponent<Stats>().actionPoints;
        GameUIManager.i.actionPointsText.text = Actions.i.actionPoints.ToString();
        yield return null;
    }


    // Maybe change this to a circle, idk
    public List<GameObject> FindEnemies() {
        var assets = GridManager.i.assets;
        List<GameObject> enemies = new List<GameObject>();
        foreach (GameObject character in party) {
            var position = character.position();
            for (int x = position.x - enemyRange; x <= position.x + enemyRange; x++) {
                for (int y = position.y - enemyRange; y <= position.y + enemyRange; y++) {
                    var pos = new Vector3Int(x, y, 0);
                    if (pos.inbounds()) {
                        var enemy = GridManager.i.goMethods.GetGameObject(pos);
                        var tile = GridManager.i.goTilemap.GetTile<Tile>(pos);
                        if (tile != null && enemy == null) {
                            if (assets.IsCharacter(tile)) {
                                enemy = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(pos);
                            }
                        }
                        if (enemy != null) {
                            var stats = enemy.GetComponent<Stats>();
                            stats.AISense();
                            if (stats.faction == Faction.Enemy&& stats.state == AIAbstract.State.Attacking) {
                                if (!enemies.Contains(enemy))
                                    enemies.Add(enemy);
                            }
                        }
                    }
                }
            }
        }
        return enemies;
    }

    public IEnumerator TakeDamageAnimation(GameObject character,Vector3Int origin) {
        var renderer = character.GetComponent<SpriteRenderer>();
        var startPosition = character.transform.position;
        Debug.Log(character.transform.position);
        if (renderer != null) {
            character.transform.position = Vector3.MoveTowards(character.transform.position, origin+new Vector3(0.5f,0.5f,0), -animationDistance);
            renderer.material = hitMaterial;
            yield return new WaitForSeconds(0.15f);
            renderer.material = spriteMaterial;
            character.transform.position = character.position()+ new Vector3(0.5f, 0.5f, 0);
            yield return new WaitForSeconds(0.15f);
            renderer.material = hitMaterial;
            yield return new WaitForSeconds(0.15f);
            renderer.material = spriteMaterial;
            yield return new WaitForSeconds(0.15f);
        }

    }

    public void UpdatePartyIcons() {
        foreach(GameObject child in iconLayout.transform) {
            Destroy(child.gameObject);
        }
        foreach(GameObject member in party) {
            var clone =Instantiate(iconPrefab, iconLayout.transform);
            clone.GetComponent<PartyIcon>().SetIcon(member);
        }
    }
}
