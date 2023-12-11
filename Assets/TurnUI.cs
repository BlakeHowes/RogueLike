using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TurnUI : MonoBehaviour
{
    public Image factionRing;
    public TextMeshProUGUI text;
    public static TurnUI i;
    public Color partyColour;
    public Color EnemyColour;
    public GameObject turnGo;

    public void Awake() {
         i = this;  
    }
    public void PartyTurn() {
        turnGo.SetActive(false);
        turnGo.SetActive(true);
        text.text = "Your Turn";
        factionRing.color = partyColour;
    }

    public void ExitCombat() {
        turnGo.SetActive(false);
        turnGo.SetActive(true);
        text.text = "Victory";
        factionRing.color = Color.yellow;
    }

    public void StartCombat(GameObject go) {
        if (!go.CompareTag("Party")) { return; }
        foreach(GameObject member in PartyManager.i.party) {
            if(member.GetComponent<Stats>().state == PartyManager.State.Combat) {
                if(member != go) { return; }
            }
        }
        turnGo.SetActive(false);
        turnGo.SetActive(true);
        text.text = "Combat!";
        factionRing.color = Color.red;
        StartCoroutine(WaitThenSayPartyTurn());
    }

    private IEnumerator WaitThenSayPartyTurn() {
        yield return new WaitForSeconds(1.6f);
        turnGo.SetActive(false);
        PartyTurn();
    }

    public void EnemyTurn() {
        turnGo.SetActive(false);
        turnGo.SetActive(true);
        text.text = "Enemy Turn";
        factionRing.color = EnemyColour;
    }
}
