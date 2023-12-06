using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class APElementCombiner
{
    public static List<Surface> elements = new List<Surface>();
    public static GlobalValues globalValues;
    public static Vector3Int position;
    public static Vector3Int origin;
    public static GameObject parentGo;

    public static void AddElement(Surface surface,Vector3Int position,Vector3Int origin,GameObject parentGO) {
        elements.Add(surface);
    }

    public static void CallElement() {
        if (!globalValues) { globalValues = Manager.GetGlobalValues(); }
        var count = elements.Count;
        if(count == 0) { return; }
        string resultingElement = elements[0].name;
        if (count > 1) {
            var secondElement = elements[1];
            resultingElement = globalValues.getResultingSurface(resultingElement,secondElement.name);
        }
        foreach (var element in globalValues.actionPointElements) {
            if (element.name == resultingElement) {
                element.Call(position, origin, parentGo,ItemStatic.CallType.OnActivate);
            }
        }
        elements.Clear();
    }
}
