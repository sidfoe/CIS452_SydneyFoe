/*
 * Sydney Foe
 * Size3
 * Assignment 4
 * Sets object to pass to the next decorator. Adds size change in change size function
 */

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
