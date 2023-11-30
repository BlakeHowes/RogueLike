using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using static PartyManager;
public class NPCSearch : MonoBehaviour
{
    Stats stats;
    private List<string> targetStrings = new List<string>();
    public Tags targetsTags;
    public void OnEnable() {
        targetStrings =ConvertFlagsEnumToStringList(targetsTags,gameObject);
        stats = GetComponent<Stats>();
    }

    public void CreateTargetTags() {
        targetStrings = ConvertFlagsEnumToStringList(targetsTags, gameObject);
    }

    public void Search() {
        var origin = gameObject.Position();
        var range = stats.enemyAlertRangeTemp;
        if(stats.state == State.Combat) { range = stats.enemyAlertRangeBase; }
        var enemies = GridManager.i.goMethods.GameObjectsInSight(range, origin, targetStrings);
        if (enemies.Count == 0 && PartyManager.i.enemyParty.Count == 0) {
            var partyTurns = PartyManager.i.partyMemberTurnTaken;
            if (partyTurns.Contains(gameObject)) {
                partyTurns.Remove(gameObject);
            }
            stats.state = State.Idle;
            stats.OnIdleTick();
            return;
        }
        if (enemies.Count >= 1) {
            foreach (var enemy in enemies) {
                if (enemy == null) { continue; }
                PartyManager.i.AddEnemy(enemy,origin);
            }
            if (stats.state == State.Idle) { 
                MouseManager.i.isRepeatingActionsOutsideCombat = false; Debug.Log("Walked Disabled by NPC Search");
                stats.OnStartOfCombat();
            }
            stats.state = State.Combat;

          
            
        }
    }
}
