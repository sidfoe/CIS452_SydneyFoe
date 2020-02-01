/*
 * Sydney Foe
 * ShootbyCLick
 * CIS 452 Assignment 2
 * Destroys the target when it is clicked by the mouse, like a gun at the carnival game
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootbyClick : MonoBehaviour
{
    // Update is called once per frame
    void Update()
    {
        if(Input.GetMouseButtonDown(0))
        {
            Ray rayOrigin = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hitInfo;

            if(Physics.Raycast(rayOrigin, out hitInfo))
            {
                Target objectHit = hitInfo.collider.GetComponent<Target>();

                if(objectHit != null)
                {
                    objectHit.Shot();
                }
            }
        }
    }
}
