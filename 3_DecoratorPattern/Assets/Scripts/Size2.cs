/*
 * Sydney Foe
 * Size2
 * Assignment 4
 * Sets object to pass to the next decorator. Adds size change in change size function
 */

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
}
