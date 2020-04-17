/*
 * Sydney Foe
 * Assignment 11
 * SubManager
 * Facade for the facade pattern. Has fucntions for switching between stages that the client can call. calls functions from subsystem in those functions.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SubManager : MonoBehaviour
{
    public StageOne one;
    public StageTwo two;
    public StageThree three;

    public int OneToTwo()
    {
        one.TurnOffStageOne();
        two.TurnOnStageTwo();
        return two.StageNum();
    }

    public int TwoToThree()
    {
        two.TurnOffStageTwo();
        three.TurnOnStageThree();
        return three.StageNum();
    }
}
