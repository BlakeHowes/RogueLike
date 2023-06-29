using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Charge", menuName = "Mods/Charge")]
public class Charge : ItemAbstract {
    public int range;
    public int actionPointCost;
    public float speed;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        this.position = position;
        this.origin = origin;
        if (!GridManager.i.tools.InRange(position, origin, range)) { return; }
        if (signal == Signal.ActionPointSum) {
            if (GridManager.i.tools.InMeeleeRange(position, origin)) { return; }
            PartyManager.i.currentCharacter.GetComponent<Stats>().actionPointsSum += actionPointCost;
            return;
        }
        if (signal != Signal.Attack) { return; }
        Debug.Log("Charge call position " + position + " origin " + origin);
        GridManager.i.InsertToStack(this);
        return;
    }
    public override string Description() {
        return "Charge: Fly towards enemy if they're out of range from melee weapons but within 5 tiles";
    }
    public override IEnumerator Action() {
        var gridManager = GridManager.i;
        var enemy = gridManager.goMethods.FirstGameObjectInSight(position, origin);
        if (gridManager.tools.InMeeleeRange(position, origin)) { yield break; }
        if (enemy == null) { yield break; }
        var character = origin.gameobjectGO();
        if (character == null) { yield break; }
        var originCharacter = origin.gameobjectGO();
        var line = gridManager.tools.BresenhamLine(position.x, position.y, origin.x, origin.y);
        if (line[0].gameobjectGO() || !gridManager.floorTilemap.GetTile(line[0])) { yield break; }

        gridManager.goMethods.RemoveGameObject(origin);
        var targetPos = line[0];
        gridManager.goMethods.SetGameObject(line[0], character);
        character.GetComponent<SpringToTarget3D>().SpringTo(targetPos, 40, 800);
        PathingManager.i.FlipCharacter(character, position, origin);
        originCharacter.GetComponent<Stats>().SpawnHitNumber("CHARGE", Color.yellow, 2);
        yield return new WaitForSeconds(0f);
    }
}


