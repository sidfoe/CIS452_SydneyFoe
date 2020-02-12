using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Size1 : SizeDecorator
{
    Moveable mov;

    public Size1(Moveable mov)
    {
        this.mov = mov;
    }

    override public float ChangeSize()
    {
        return .05f + mov.ChangeSize();
    }

    public override string getDescription()
    {
        return mov.GetDescription() + ", + 1";
    }
}
