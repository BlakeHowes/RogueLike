using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

[CreateAssetMenu(fileName = "General", menuName = "Mechs/General")]
public class GeneralMech : MechAbstract
{
    public GameObject particles;
    private GameObject particlesGameObject;
    public StatusEffect statusEffect;

    public void CreateParticles(Vector3Int position) {
        particlesGameObject = Instantiate(particles);
        particlesGameObject.transform.position = position + new Vector3(0.5f, 0.5f);
    }
    public override void Call(Vector3Int position, MechStatic.Signal signal) {
        if(signal == MechStatic.Signal.OnEnable) {
            if (particles) { CreateParticles(position); }
        }

        if(signal == MechStatic.Signal.Tick) {
            var go = position.GameObjectGo();
            if (!go) { return; }
            if (statusEffect) { go.GetComponent<Inventory>().AddStatusEffect(position, position, statusEffect); }
        }

    }
}
