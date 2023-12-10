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
    [HideInInspector] public Vector3Int damagePrigin;
    [HideInInspector] public Vector3Int endPos;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if (position == origin) { return true; }
        // origin Attacker
        //position Attacked

        this.origin = origin;
        this.position = position;
        this.parentGO = parentGO;
        maxDistanceRoll = actionContainer.intValue;
        var line = GridManager.i.tools.BresenhamLineLength(origin.x, origin.y, position.x, position.y, 15);
        var line2 = GridManager.i.tools.BresenhamLineLength(position.x, position.y, line[line.Count - 1].x, line[line.Count - 1].y, maxDistanceRoll);
        var targetPos = line2[line2.Count - 1];
        endPos = GridManager.i.goMethods.PositionBeforeHittingGameObjectOrUnwalkableCell(targetPos, position);
        this.parentGO = parentGO;

        damagePrigin = GridManager.i.goMethods.FirstGameObjectInSight(targetPos, position);
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if (!rollOther) { position = parentGO.Position(); }
        if(endPos == position || parentGO == null) { yield break; }
        var goHit = damagePrigin.GameObjectGo();
        if (hideAnimation) { PathingManager.i.Slide(endPos, position, speed * 13); }
        else {
            PathingManager.i.Roll(endPos, position, speed);
        }
        var slideWait = 0.1f * (Vector3.Distance(endPos, position) * (speed * 10));
        slideWait = Mathf.Clamp(slideWait, 0,1.5f);
        yield return new WaitForSeconds(slideWait);
        if (goHit && dealDamage) {
            if (position == damagePrigin) { yield break; }
            var damage = parentGO.GetComponent<Stats>().damageTaken;
            goHit.GetComponent<Stats>().TakeDamage(damage, endPos);
        }
    }
}
