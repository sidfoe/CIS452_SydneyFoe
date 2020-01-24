/*
* (Sydney Foe)
* (Stats)
* (Assignment 1)
* (Interface that controls the getter and setter for the attack stats for both kinds of attacks.)
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface Stats 
{
    void SetBasicAttk(int num);
    int GetBasicAttk();

    void SetTypeAttk(int num);
    int GetTypeAttk();
}
