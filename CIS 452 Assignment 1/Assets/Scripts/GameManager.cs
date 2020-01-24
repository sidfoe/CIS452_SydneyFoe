/*
* (Sydney Foe)
* (GameManager)
* (Assignment 1)
* (The script that uses all of the methods ans scripts. It goes through the assignment requirements calling the methods and creating the classes.)
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    CharacterTypes[] charList = new CharacterTypes[5];
    Stats[] statList = new Stats[5];

    // Start is called before the first frame update
    void Start()
    {
        EarthCharacter ec = new EarthCharacter();
        WaterCharacter wc = new WaterCharacter();
        AirCharacter ac = new AirCharacter();

        ec.BaseAttack();
        ec.TypeAttack();
        wc.BaseAttack();
        wc.TypeAttack();

        charList[0] = ec;
        charList[1] = ec;
        charList[2] = wc;
        charList[3] = wc;
        charList[4] = ac;

        statList[0] = ec;
        statList[1] = ec;
        statList[2] = wc;
        statList[3] = wc;
        statList[4] = ac;
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Alpha1))
        {
            foreach(CharacterTypes c in charList)
            {
                c.BaseAttack();
            }
        }

        if(Input.GetKeyDown(KeyCode.Alpha2))
        {
            foreach(Stats s in statList)
            {
                s.SetBasicAttk(10);
                s.GetBasicAttk();
            }
        }

        if(Input.GetKeyDown(KeyCode.Alpha1) && Input.GetKeyDown(KeyCode.Alpha2))
        {
            charList[4].BaseAttack();
            statList[4].SetBasicAttk(10);
            statList[4].GetBasicAttk();
        }
    }
}
