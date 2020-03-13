/* Sydney Foe
 * Template
 * Assignment 8
 * Sets up the template method and their functions.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Template : MonoBehaviour
{
    public GameObject door;

    public string TemplateMethod()
    {
        if(HasDoor() == true)
        {
            OpenDoor();
        }

        return ReturnKey();
    }

    public void OpenDoor()
    {
        door.SetActive(false);
    }

    public virtual bool HasDoor()
    {
        return true;
    }

    public abstract string ReturnKey();
}
