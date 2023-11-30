using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static UnityEngine.Rendering.DebugUI;

//[CreateAssetMenu(fileName = "AddCoins", menuName = "Actions/AddCoins")]
public class AddCoins : Action,IDescription {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        int value = Random.Range(actionContainer.vector2IntValue.x, actionContainer.vector2IntValue.y + 1);
        GameUIManager.i.ChangeCoinsValue(value);
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }

    public string Description(ItemAbstract parentItem, ActionContainer actionContainer) {
        return $"Gain {actionContainer.vector2IntValue.x}-{ actionContainer.vector2IntValue.y } Coins";
    }
}
