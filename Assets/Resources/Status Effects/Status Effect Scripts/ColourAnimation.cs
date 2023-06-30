using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "ColourAnimation", menuName = "Mods/ColourAnimation")]
public class ColourAnimation : ItemAbstract
{
    List<GameObject> characters = new List<GameObject>();
    public Color colour = Color.white;
    public bool waitForFlashToEnd;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        this.origin = origin;
        var characterFound = position.GameObjectGo();
        characters.Add(characterFound);
        GridManager.i.AddToStack(this);
    }

    public override IEnumerator Action() {
        foreach(var character in characters) {
            GridManager.i.StartCoroutine(GridManager.i.graphics.FlashAnimation(character, origin, colour));
        }
        characters.Clear();
        var waitTime = 0f;
        if (waitForFlashToEnd) { waitTime = 3f; }
        yield return new WaitForSeconds(waitTime);
    }

    public override string Description() {
        return "";
    }
}
