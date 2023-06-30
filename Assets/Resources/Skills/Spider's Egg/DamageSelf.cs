using System.Collections;
using UnityEngine;
using UnityEngine.TextCore.Text;
using static ItemStatic;

[CreateAssetMenu(fileName = "Damage Self", menuName = "Mods/Damage Self")]
public class DamageSelf : ItemAbstract {
    public int damage;

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        this.origin = origin;
        if(signal == Signal.Attack) { GridManager.i.AddToStack(this); }
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }

    public override IEnumerator Action() {
        origin.GameObjectGo().GetComponent<Stats>().TakeDamage(damage,origin);
        yield return new WaitForSeconds(0.3f);
    }
}
