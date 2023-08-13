using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class ItemContainer : ScriptableObject {
    public List<Ability> abilities = new List<Ability> ();
    public void Call(Listener listener) {
        foreach (var ability in abilities) {
            if (ability.listener == listener) {
                ability.Call();
            }
        } 
    }
    public void OnValidate() {
        //Call Listeners
    }
}
[System.Serializable]
public class Ability : MonoBehaviour
{
    public Listener listener;
    public List<Action> actions = new List<Action>();

    public void Call() {
        foreach (var action in actions) {
            if (!action.Condition()) { break; }
        }
    }
}

public class Action {
    public bool Condition() {
        //If False Return

        //Add To Stack
        return true;
    }

    public IEnumerator StackItem() {
        yield return null;  
    }
}


public class Listener : ScriptableObject {

}
