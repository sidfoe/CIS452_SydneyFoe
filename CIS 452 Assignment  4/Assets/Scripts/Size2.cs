using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Size2 : SizeDecorator
{
    Moveable mov;

    public Size2(Moveable mov)
    {
        this.mov = mov;
    }

    override public float ChangeSize()
    {
        return .15f + mov.ChangeSize();
    }

    public override string getDescription()
    {
        return mov.GetDescription() + ", + 2";
    }
}
