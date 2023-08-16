using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "UtilityActions", menuName = "Actions/UtilityActions")]
public class UtilityActions : Action {
    public Type type;
    [HideInInspector] public int intValue;
    [HideInInspector] public Sprite spriteValue;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position, origin, parentGO, parentItem);
        intValue = actionContainer.intValue;

        spriteValue = actionContainer.spriteValue;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        switch (type) {
            case Type.SetInactive: parentGO.SetActive(false); break;
            case Type.SetActive: parentGO.SetActive(true); break;
            case Type.ChangeSprite: parentGO.GetComponent<SpriteRenderer>().sprite = spriteValue; break;
        }
        yield return null;
    }

    public enum Type {
        SetInactive,
        SetActive,
        ChangeSprite,
    }
}
