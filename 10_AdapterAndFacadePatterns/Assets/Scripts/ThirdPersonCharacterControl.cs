/*
 * Sydney Foe
 * Assignment 11
 * ThirdPersonCharacterController
 * Character controller for third person. Not my code followed a tutorial
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThirdPersonCharacterControl : MonoBehaviour
{
    public float Speed;
    public GameManager gm;

	void Update ()
    {
        if (gm.canPlay == true)
        {
            PlayerMovement();
        }
    }

    void PlayerMovement()
    {
        float hor = Input.GetAxis("Horizontal");
        float ver = Input.GetAxis("Vertical");
        Vector3 playerMovement = new Vector3(hor, 0f, ver) * Speed * Time.deltaTime;
        transform.Translate(playerMovement, Space.Self);
    }
}