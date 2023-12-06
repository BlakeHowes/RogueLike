using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "OptionsActions", menuName = "Actions/OptionsActions")]
public class OptionsActions : Action {
    public bool hideWeaponValue;
    [HideInInspector]public CCOptions options;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if (!parentGO) { return true; }
        this.parentGO = parentGO;
        parentGO.TryGetComponent(out CCOptions options);
        this.options = options;
        if(options == null) { return true; }
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        options.hideWeapons = hideWeaponValue;
        CharacterSpriteGenerator.CreateCharacterSprite(parentGO);
        yield return null;
    }
}