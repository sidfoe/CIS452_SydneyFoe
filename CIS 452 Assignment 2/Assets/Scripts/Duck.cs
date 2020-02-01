/*
 * Sydney Foe
 * Duck
 * CIS 452 Assignment 2
 * Sets up the duck object to perform the functions that it needs. Sets its movement behavour, destroys when it goes to far,
 * switches behaviour when space is pressed, and a shot function that destroys the object when it gets shot
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Duck : Target
{
    ParticleSystem ps;
    private void Awake()
    {
        MoveBehaviour = gameObject.AddComponent<PlainGo>();
        ps = gameObject.GetComponent<ParticleSystem>();
    }

    private void OnTriggerEnter(Collider col)
    {
        if(col.gameObject.CompareTag("wall"))
        {
            Destroy(gameObject);
        }
    }

    private void LateUpdate()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Destroy(GetComponent<PlainGo>());
            MoveBehaviour = gameObject.AddComponent<PopUp>();
        }
    }

    public override void Shot()
    {
        ps.Play();
        GameManager.score += 2;
        StartCoroutine("WaitDie");
    }

    IEnumerator WaitDie()
    {
        yield return new WaitForSeconds(.15f);
        Destroy(gameObject);
    }
}
