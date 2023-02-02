using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCSearch : MonoBehaviour
{
    Stats stats;
    public void OnEnable() {
        stats = GetComponent<Stats>();
    }
    public void Search() {
        var origin = gameObject.position();
        var enemies = GridManager.i.goMethods.GameObjectsInSightExcludingAllies(stats.enemyAlertRangeTemp, origin, PartyManager.Faction.Enemy);
        if (enemies.Count == 0 && PartyManager.i.enemyParty.Count == 0) { 
            stats.state = PartyManager.State.Idle;
            var partyTurns = PartyManager.i.partyMemberTurnTaken;
            if (partyTurns.Contains(gameObject)) {
                partyTurns.Remove(gameObject);
            }
            return;  
        }
        foreach (var enemy in enemies) {
            if (enemy == null) { continue; }
            PartyManager.i.AddEnemy(enemy);
        }
        stats.state = PartyManager.State.Combat;
    }
}
