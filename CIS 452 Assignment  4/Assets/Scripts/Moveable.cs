using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Moveable : MonoBehaviour
{
    public string description;

    public abstract float ChangeSize();

    public string GetDescription()
    {
        return description;
    }
}
