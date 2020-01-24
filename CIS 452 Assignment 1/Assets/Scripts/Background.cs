/*
* (Sydney Foe)
* (Background)
* (Assignment 1)
* (Interface that controls the getter and setter for the background info of the character, currently only the homeland.)
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface Background 
{ 
    void SetHomeLand(string name);
    string GetHomeland();
}
