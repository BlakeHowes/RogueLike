using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IStatInterface
{
    public void TakeDamage();
    public void Heal();

    public void RecalculateStats();

    public interface IsInCombat {
        bool HealthPoint { get; set; }
    }
}

public static class CharacterStates 
{
    public enum faction{
        Party,
        Enemy,
        Netural
    }
}
