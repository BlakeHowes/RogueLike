using System.Collections;
using UnityEngine;
using UnityEngine.TextCore.Text;
using static ItemStatic;

[CreateAssetMenu(fileName = "Death Item", menuName = "Mods/Death Item")]
public class DeathItem : ItemAbstract {
    public GameObject gameobject;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal == Signal.Death) {
            gameobject = position.GameObjectGo();
            GridManager.i.AddToStack(this);
        }
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }

    public override IEnumerator Action() {
        if (gameobject == null) { Debug.LogError("Death item is missing gameobject"); yield break; }
        var healthbar = gameobject.GetComponent<Stats>().healthbar;
        if (healthbar) { healthbar.SetActive(false); } else {
            Debug.LogError("Healthbar is missing during death action?");
        }
        gameobject.SetActive(false);
        yield return new WaitForSeconds(0f);
    }
}
