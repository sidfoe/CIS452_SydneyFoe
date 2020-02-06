/*
 * Sydney Foe
 * Interfaces
 * Assignment 3
 * Sets up the subject and observer interfaces
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;


interface ISubject
{
    void registerObserver(GameObject o);
    void removeObserver(GameObject o);
    void notifyObserver();
}

interface IObserver
{
    void UpdateObservers(Vector3 newPos);
}


