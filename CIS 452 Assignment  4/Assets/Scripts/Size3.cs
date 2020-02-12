using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Size3 : SizeDecorator
{
    Moveable mov;

    public Size3(Moveable mov)
    {
        this.mov = mov;
    }

    override public float ChangeSize()
    {
        return .25f + mov.ChangeSize();
    }
}
