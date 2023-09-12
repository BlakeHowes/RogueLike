using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.TextCore.Text;

//[CreateAssetMenu(fileName = "FlashAnimation", menuName = "Actions/FlashAnimation")]
public class FlashAnimation : Action {
    [HideInInspector] public GameObject character;
    public bool flash;
    public bool setMaterialSolid;
    [HideInInspector] public Material material;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        character = position.GameObjectGo();
        //material = actionContainer.materialValue;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if (character) {
            if(flash)GridManager.i.StartCoroutine(GridManager.i.graphics.FlashAnimation(character, position, Color.red));
            //if (setMaterialSolid) { character.GetComponent<SpriteRenderer>().material = material; }
        }
        yield return null;
    }
}
