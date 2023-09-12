using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "UtilityActions", menuName = "Actions/UtilityActions")]
public class UtilityActions : Action {
    public Type type;
    [HideInInspector] public int intValue;
    [HideInInspector] public ItemAbstract itemValue;
    [HideInInspector] public Sprite spriteValue;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position, origin, parentGO, parentItem);
        intValue = actionContainer.intValue;
        itemValue = actionContainer.itemValue;
        spriteValue = actionContainer.spriteValue;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        float waitTime = 0;
        switch (type) {
            case Type.SetInactive:if(parentGO) parentGO.SetActive(false); break;
            case Type.SetActive: parentGO.SetActive(true); break;
            case Type.ChangeSprite: parentGO.GetComponent<SpriteRenderer>().sprite = spriteValue; break;
            case Type.DropItem: GridManager.i.itemMethods.FloodFillDropItem(origin,true,itemValue); break;
            case Type.JumpToPosition: waitTime= PathingManager.i.Jump(origin,position,5); break;
        }
        yield return new WaitForSeconds(waitTime);
    }

    public enum Type {
        SetInactive,
        SetActive,
        ChangeSprite,
        DropItem,
        JumpToPosition
    }
}
