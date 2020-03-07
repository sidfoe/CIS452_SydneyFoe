/*Sydney Foe
 * PlaceXReciever
 * Assignment 7
 * Runs the command by instatiating the object and undoes it when asked.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaceXReciever : MonoBehaviour
{
    public GameObject fab;

    public GameObject Action(Vector3 t, GameObject g)
    {
        GameObject r = Instantiate(fab, t, Quaternion.identity);
        g.SetActive(false);

        return r;
    }

    public void UndoAction(GameObject g)
    {
        Destroy(g);
    }
}
