using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "ColourAnimation", menuName = "Mods/ColourAnimation")]
public class ColourAnimation : ItemAbstract
{
    [HideInInspector]public GameObject character;
    public Color colour = Color.white;
    public bool waitForFlashToEnd;
    public Signal onSignal = Signal.Attack;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal != onSignal) { return; }
        this.origin = origin;
        character = position.GameObjectGo();
        GridManager.i.AddToStack(this);
    }

    public override IEnumerator Action() {
        GridManager.i.StartCoroutine(GridManager.i.graphics.FlashAnimation(character, origin, colour));
        var waitTime = 0f;
        if (waitForFlashToEnd) { waitTime = 3f; }
        yield return new WaitForSeconds(waitTime);
    }

    public override string Description() {
        return "";
    }
}
