using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DevHotkeys : MonoBehaviour
{
    public void Update() {
        if (Input.GetKeyDown(KeyCode.Z)) {
            foreach(GameObject go in PartyManager.i.party) {
                var stats = go.GetComponent<Stats>();
                stats.health = 99;
                stats.maxHealthBase = 99;
                stats.actionPoints = 99;
                stats.actionPointsBase = 99;
            }
        }

        if (Input.GetKeyDown(KeyCode.X)) {
            GameUIManager.i.ShowSight(PartyManager.i.currentCharacter.position());
        }
    }
}
