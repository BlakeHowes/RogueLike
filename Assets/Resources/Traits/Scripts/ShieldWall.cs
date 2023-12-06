using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "ShieldWall", menuName = "Actions/ShieldWall")]
public class ShieldWall : Action {
    [HideInInspector] public Stats stats;
    [HideInInspector] public GameObject target;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        var offhand = parentGO.GetComponent<Inventory>().offHand;
        if (!offhand) { return false; }
        if (offhand is not Equipment) {
            return false;
        }
        if (!origin.GameObjectGo()) { return false; }
        stats = origin.GameObjectGo().GetComponent<Stats>();
        stats.BlockDamage();
        target = parentGO;
        
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        target.GetComponent<Stats>().TakeDamage(stats.damageTaken, target.Position());
        yield return null;
    }
}
