using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static MechStatic;

[CreateAssetMenu(fileName = "Roll", menuName = "Actions/Roll")]
public class Roll : Action {
    [HideInInspector]public int maxDistanceRoll;
    public float speed;
    public bool dealDamage;
    public bool hideAnimation;
    public bool rollOther;
    [HideInInspector] public Vector3Int damagePosition;
    [HideInInspector] public Vector3Int endPos;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if (origin == position) { return true; }
        // Position Attacker
        //Origin Attacked
        if (rollOther) {
            (origin, position) = (position, origin);
        }

        this.position = position;
        this.origin = origin;
        this.parentGO = parentGO;
        maxDistanceRoll = actionContainer.intValue;
        var line = GridManager.i.tools.BresenhamLineLength(position.x, position.y, origin.x, origin.y, 15);
        var line2 = GridManager.i.tools.BresenhamLineLength(origin.x, origin.y, line[line.Count - 1].x, line[line.Count - 1].y, maxDistanceRoll);
        var targetPos = line2[line2.Count - 1];
        endPos = GridManager.i.goMethods.PositionBeforeHittingGameObjectOrUnwalkableCell(targetPos, origin);
        this.parentGO = parentGO;

        damagePosition = GridManager.i.goMethods.FirstGameObjectInSight(targetPos, origin);
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if (!rollOther) { origin = parentGO.Position(); }
        var goHit = damagePosition.GameObjectGo();
        if (hideAnimation) { PathingManager.i.Slide(endPos, origin, speed * 13); }
        else {
            PathingManager.i.Roll(endPos, origin, speed);
        }
        var slideWait = 0.1f * (Vector3.Distance(endPos, origin) * (speed * 10));
        slideWait = Mathf.Clamp(slideWait, 0,3);
        yield return new WaitForSeconds(slideWait);
        if (goHit && dealDamage) {
            if (origin == damagePosition) { yield break; }
            var damage = parentGO.GetComponent<Stats>().damageTaken;
            goHit.GetComponent<Stats>().TakeDamage(damage, endPos);
        }
    }
}
