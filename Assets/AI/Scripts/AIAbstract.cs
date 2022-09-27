using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class AIAbstract : ScriptableObject
{
    public abstract void UpdateSensoryInformation(Vector3Int position);
    public abstract void AttackLogic();
    
    public enum State {
        Idle,
        Attacking,
    }
}
