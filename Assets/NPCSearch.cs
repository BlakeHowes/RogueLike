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
        var origin = gameObject.Position();
        var range = stats.enemyAlertRangeTemp;
        if(stats.state == PartyManager.State.Combat) { range = stats.enemyAlertRangeBase; }
        var enemies = GridManager.i.goMethods.GameObjectsInSightExcludingAllies(range, origin, PartyManager.Faction.Enemy);
        if (enemies.Count == 0 && PartyManager.i.enemyParty.Count == 0) {
            stats.state = PartyManager.State.Idle;
            var partyTurns = PartyManager.i.partyMemberTurnTaken;
            if (partyTurns.Contains(gameObject)) {
                partyTurns.Remove(gameObject);
            }
            return;
        }
        if (enemies.Count >= 1) {
            foreach (var enemy in enemies) {
                if (enemy == null) { continue; }
                PartyManager.i.AddEnemy(enemy);
            }
            if (stats.state == PartyManager.State.Idle) { MouseManager.i.isRepeatingActionsOutsideCombat = false; Debug.Log("Walked Disabled by NPC Search"); }
            stats.state = PartyManager.State.Combat;

          
            
        }
    }
}
