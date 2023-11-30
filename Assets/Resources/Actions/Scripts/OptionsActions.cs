using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "OptionsActions", menuName = "Actions/OptionsActions")]
public class OptionsActions : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if (!parentGO) { return true; }
        parentGO.TryGetComponent(out CCOptions options);
        if(options == null) { return true; }
        options.hideWeapons = false;
        CharacterSpriteGenerator.CreateCharacterSprite(parentGO);
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}