using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static MechStatic;
[CreateAssetMenu(fileName = "Entrance", menuName = "Mechs/Entrance")]
public class FloorEntrance : MechAbstract {
    public override void Call(Vector3Int position,Signal signal) {
        if(signal == Signal.ClickOnWhileStandingOntopOf) {
            var go = position.GameObjectGo();
            if (MouseManager.i.MousePositionOnGrid() == position && go == PartyManager.i.currentCharacter) {
                Debug.Log("You cant go back up you dumb fuck");
            }
        }
    }
}
