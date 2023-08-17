using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static MechStatic;

[CreateAssetMenu(fileName = "Roll", menuName = "Actions/Roll")]
public class Roll : Action {
    [HideInInspector]public int maxDistanceRoll;
    public float speed;
    public bool dealDamage;
    [HideInInspector] public Vector3Int damagePosition;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if (position == origin) { return true; }
        this.origin = position;
        this.parentGO = parentGO;
        var line = GridManager.i.tools.BresenhamLineLength(origin.x, origin.y, position.x, position.y, 15);
        var line2 = GridManager.i.tools.BresenhamLineLength(position.x, origin.y, line[line.Count - 1].x, line[line.Count - 1].y, maxDistanceRoll);
        var targetPos = line2[line2.Count - 1];
        this.position = GridManager.i.goMethods.PositionBeforeHittingGameObject(targetPos, position);
        this.parentGO = parentGO;
        maxDistanceRoll = actionContainer.intValue;
        damagePosition = GridManager.i.goMethods.FirstGameObjectInSight(targetPos, position);
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        var goHit = damagePosition.GameObjectGo();
        PathingManager.i.Roll(position, origin, speed);
        yield return new WaitForSeconds(0.1f * (Vector3.Distance(position, origin) * (speed * 10)));
        if (goHit && dealDamage) {
            if (position == damagePosition) { yield break; }
            var damage = parentGO.GetComponent<Stats>().damageTaken;
            goHit.GetComponent<Stats>().TakeDamage(damage, position);
        }
    }
}
