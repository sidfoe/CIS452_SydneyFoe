/*
 * Sydney Foe
 * Size1
 * Assignment 4
 * Sets object to pass to the next decorator. Adds size change in change size function
 */

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
}
