using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "UIPopup", menuName = "Actions/UIPopup")]
public class TraitUIAnimation : Action {
    [HideInInspector] public string description;
    [HideInInspector] public Sprite sprite;
    [HideInInspector] public GameObject positionGO;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        positionGO = position.GameObjectGo();
        SaveValues(position,origin,parentGO,parentItem);
        foreach(var container in ability.actionContainers) {
            if(container.action is UITrait) {
                var uiTrait = container.action as UITrait;
                uiTrait.Condition(position, origin, parentGO, parentItem, ability, actionContainer);
                description = uiTrait.description;
                sprite = container.spriteValue;
                this.AddToStack();
            }
        }
        
        return true;
    }

    public override IEnumerator StackAction() {
        GameUIManager.i.traitAnimation.AddTrait(description, sprite,parentGO,parentItem,positionGO);
        yield return null;
    }
}
