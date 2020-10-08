/*
 * Sydney Foe
 * CubeBehaviour
 * Assignment 3
 * This script is the observer. So it has the update observer function that moves the cubes based off of the subject. Checks to see if it hit the death cube and to remove itself.
 * It also looks to see if the player chooses to undo the last move.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeBehaviour : MonoBehaviour, IObserver
{
    public Movement m;
    private Vector3 temp;
    private ParticleSystem ps;
    private bool blocked = false;

    public void Start()
    {
        temp = transform.position;
        ps = GetComponent<ParticleSystem>();
    }

    public void UpdateObservers(Vector3 newPos)
    {
        if(newPos == Vector3.zero && blocked == false)
        {
            transform.position = temp;
            gameObject.SetActive(true);

        }

        RaycastHit hit = new RaycastHit();
        Ray r = new Ray(transform.position, newPos);
        if (Physics.Raycast(r, out hit, 1f))
        {
            GameObject objectHit = hit.collider.gameObject;



            if (objectHit.CompareTag("border")) //hits border, cannot move
            {
                //border hit
                blocked = true;
            }

            else //hits death or goal, free to move
            {
                temp = transform.position;
                transform.position += newPos;
                blocked = false;
            }

        }

        else //hits nothing, ok to move
        {
            temp = transform.position;
            transform.position += newPos;
            blocked = false;
        }
    }

    public void OnTriggerEnter(Collider col)
    {
        if(col.CompareTag("death"))
        {
            ps.Play();
            StartCoroutine("Wait");
        }
    }

    IEnumerator Wait()
    {
        yield return new WaitForSeconds(.25f);
        gameObject.SetActive(false);
    }
}
