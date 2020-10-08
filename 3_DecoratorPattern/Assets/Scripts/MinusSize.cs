/*
 * Sydney Foe
 * MinusSoze
 * Assignment 4
 * Sets object to pass to the next decorator. Adds size change in change size function, but this one subracts
 */

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

