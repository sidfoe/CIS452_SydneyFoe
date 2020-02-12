using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MinusSize : SizeDecorator
{
    Moveable mov;

    public MinusSize(Moveable mov)
    {
        this.mov = mov;
    }

    override public float ChangeSize()
    {
        return -.15f + mov.ChangeSize();
    }
}

