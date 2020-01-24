/*
* (Sydney Foe)
* (WaterCharacter)
* (Assignment 1)
* (One of the concrete classes that was added with all the methods from the abstract class and both the interfaces. There are both basic and type attacks. 
* You can get and set the attack stats and the homeland.)
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterCharacter : CharacterTypes, Stats, Background
{
    private int baseAttk;
    private int typeAttk;
    private string name;
    private string homeland;

    public void TypeAttack()
    {
        Debug.Log("Rock Boy splashed around.");
    }

    public override void BaseAttack()
    {
        Debug.Log("Water Boy did a sweet drop kick.");
    }

    public int GetBasicAttk()
    {
        Debug.Log("baseAttk = " + baseAttk);
        return baseAttk;
    }

    public string GetHomeland()
    {
        Debug.Log("Homeland: " + homeland);
        return homeland;
    }

    public int GetTypeAttk()
    {
        Debug.Log("TypeAttk = " + typeAttk);
        return typeAttk;
    }

    public void SetBasicAttk(int num)
    {
        if (num > 0)
        { 

            Debug.Log("baseAttk has been set to " + num);
            baseAttk = num;
        }

        else
        {
            Debug.Log("Cannot be below 0");
        }
    }

    public void SetHomeLand(string name)
    {
        Debug.Log("Homeland set to " + name);
        homeland = name;
    }

    public void SetTypeAttk(int num)
    {
        if (num > 0)
        {
            Debug.Log("TypeAttk has been set to " + num);
            typeAttk = num;
        }

        else
        {
            Debug.Log("Cannot be below 0");
        }
    }
}
