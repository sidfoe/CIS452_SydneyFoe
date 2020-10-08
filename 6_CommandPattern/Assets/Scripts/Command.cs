/*Sydney Foe
 * Command
 * Assignment 7
 * Sets up command interface with execute and undo the command functions.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface Command 
{
    void Execute(Vector3 t, GameObject g);

    void Undo();
}
