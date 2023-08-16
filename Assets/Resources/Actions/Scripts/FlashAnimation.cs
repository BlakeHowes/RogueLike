using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.TextCore.Text;

//[CreateAssetMenu(fileName = "FlashAnimation", menuName = "Actions/FlashAnimation")]
public class FlashAnimation : Action {
    [HideInInspector] public GameObject character;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        character = position.GameObjectGo();
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if (character) {
            GridManager.i.StartCoroutine(GridManager.i.graphics.FlashAnimation(character, origin, Color.red));
        }
        yield return null;
    }
}
