using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Roll", menuName = "SubItems/Roll")]
public class RollSubItem : ItemAbstract
{
    public Signal onSignal;
    public bool hideAnimation;
    public int maxDistanceRoll;
    public float speed;
    public float waitTime;
    [HideInInspector]public Vector3Int damagePosition;
    public DamageSubItem damageSubItem;
    [HideInInspector]public GameObject parentGO;
    public override void Call(Vector3Int position,Vector3Int origin, Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        this.origin = position;
        this.parentGO = parentGO;
        if(signal != onSignal) { return; }
        var line = GridManager.i.tools.BresenhamLineLength(origin.x, origin.y, position.x, position.y,15);
        var line2 = GridManager.i.tools.BresenhamLineLength(position.x, origin.y, line[line.Count - 1].x, line[line.Count - 1].y, maxDistanceRoll);
        var targetPos = line2[line2.Count - 1];
        //targetPos = (position - targetPos) + position;
        if(position == origin) { return; }
        this.position = GridManager.i.goMethods.PositionBeforeHittingGameObject(targetPos, position);
        damagePosition = GridManager.i.goMethods.FirstGameObjectInSight(targetPos, position);
        GridManager.i.AddToStack(this);
    }

    public override IEnumerator Action() {
        
        var goHit = damagePosition.GameObjectGo();
        if (hideAnimation) { PathingManager.i.Jump(position, origin, speed*12); } else {
            PathingManager.i.Roll(position, origin, speed);
        }

        if (goHit) {
            if(position == damagePosition) { yield break; }
            damageSubItem.damage = parentGO.GetComponent<Stats>().damageTaken;
            damageSubItem.Call(damagePosition, position, Signal.Attack, parentGO, this);
        }
        yield return new WaitForSeconds(waitTime *(Vector3.Distance(position,origin)*(speed*10)));
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}
