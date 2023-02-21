using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "HealthMod", menuName = "Mods/HealthMod")]
public class HealthMod : ItemAbstract {
    public float healthPercentage;
    public Signal onSignal;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal != onSignal) { return; }
        var stats = position.gameobjectGO().GetComponent<Stats>();
        int health = Mathf.RoundToInt((((float)stats.health)/100) * healthPercentage);
        if(health <= 0) { health = 1; }
        var damage =Mathf.Abs(health -stats.health);
        stats.TakeDamage(damage, origin);
    }

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }

    public override string Description() {
        return "Changes Health";
    }
}
