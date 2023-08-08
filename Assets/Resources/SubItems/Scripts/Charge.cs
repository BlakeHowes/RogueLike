using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Charge", menuName = "SubItems/Charge")]
public class Charge : ItemAbstract {
    public int range;
    public int actionPointCost;
    public float speed;
    public DamageSubItem damageSubItem;
    [HideInInspector] public GameObject parentGO;
    [HideInInspector] public Vector3Int hitPosition;
    public override void Call(Vector3Int position,Vector3Int origin, Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        this.position = position;
        this.origin = origin;
        this.parentGO = parentGO;
        if (!GridManager.i.tools.InRange(position, origin, range)) { return; }
        if (signal != Signal.Attack) { return; }
        var inventory = parentGO.GetComponent<Inventory>();
        var mainHand = inventory.GetMainHandAsWeapon();
        if (mainHand) { if (mainHand.rangeBase > 1) return; }
        var offHand = inventory.GetOffHandAsWeapon();
        if (offHand) { if (offHand.rangeBase > 1) return; }
        hitPosition = GridManager.i.goMethods.FirstGameObjectInSight(position, origin);
        var hitGO = hitPosition.GameObjectGo();
        if (hitGO == null || hitGO.tag == parentGO.tag) { return; }
        if (GridManager.i.tools.InMeeleeRange(position, origin)) { return; }
        GridManager.i.InsertToStack(this);
        return;
    }
    public override string Description() {
        return "Charge: Fly towards enemy if they're out of range from melee weapons but within 5 tiles";
    }
    public override IEnumerator Action() {
        var originCharacter = origin.GameObjectGo();
        var endPosition = GridManager.i.goMethods.PositionBeforeHittingGameObject(position, origin);
        var timeTaken = PathingManager.i.Jump(endPosition, origin, speed);
        originCharacter.GetComponent<Stats>().SpawnHitNumber("CHARGE", Color.yellow, 2);
        yield return new WaitForSeconds(timeTaken);
        if (damageSubItem) { damageSubItem.Call(hitPosition, endPosition, Signal.Attack, parentGO, this); }
    }
}


