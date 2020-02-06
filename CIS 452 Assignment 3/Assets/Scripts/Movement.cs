/*
 * Sydney Foe
 * Movement
 * Assignment 3
 * This script is the subject script. So it adds the observers, checks for player input to pass to observers, and removes observers.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Movement : MonoBehaviour, ISubject
{
    private List<GameObject> oList = new List<GameObject>();

    private Vector3 pos;

    // Start is called before the first frame update
    void Start()
    {
        oList = GameObject.FindGameObjectsWithTag("cube").ToList();
    }

    // Update is called once per frame
    void Update()
    {
        if (GameManager.canPlay == true) 
        {
            if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A))
            {
                pos = Vector3.left;
                notifyObserver();
            }

            if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))
            {
                pos = Vector3.right;
                notifyObserver();
            }

            if (Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W))
            {
                pos = new Vector3(0, 0, 1);
                notifyObserver();
            }

            if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S))
            {
                pos = new Vector3(0, 0, -1);
                notifyObserver();
            }

            if (Input.GetKeyDown(KeyCode.Z))
            {
                pos = Vector3.zero;
                notifyObserver();
            }
        }
    }

    public void notifyObserver()
    {
       foreach(GameObject g in oList)
       {
            g.GetComponent<CubeBehaviour>().UpdateObservers(pos);
       }
    }

    public void registerObserver(GameObject o)
    {
        oList.Add(o);
    }

    public void removeObserver(GameObject o)
    {
        oList.Remove(o);
    }
}
