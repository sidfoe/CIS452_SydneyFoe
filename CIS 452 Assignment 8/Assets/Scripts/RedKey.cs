/* Sydney Foe
 * RedKey
 * Assignment 8
 * Sets up the difference for the red key. It returns the string red key. It also has a hook that says it does not have a door that goes with it.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RedKey : Template
{
    public override bool HasDoor()
    {
        return false;
    }

    public override string ReturnKey()
    {
        return "red key";
    }
}
