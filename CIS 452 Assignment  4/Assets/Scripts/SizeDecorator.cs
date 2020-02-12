using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class SizeDecorator : Moveable
{
    public abstract string getDescription();
    public override float ChangeSize()
    {
        throw new System.NotImplementedException();
    }
}
