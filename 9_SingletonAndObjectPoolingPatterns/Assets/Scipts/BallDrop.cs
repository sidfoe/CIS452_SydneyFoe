/*
 * Sydney Foe
 * Assignment 10
 * BallDrop
 * allows player to drop the ball on a click. and when it reaches the bottom it  spawns a new one using the object pool.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallDrop : MonoBehaviour
{
    public bool drop = false; //has player clicked to drop ball
    private Rigidbody rb;

    public float clampForX = 5f;
    private GameManager gm;

    public void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.isKinematic = true; //off
        gm = FindObjectOfType<GameManager>();
    }

    void Update()
    {
        if (gm.canDrop == true)
        {
            if (Input.GetMouseButtonDown(0) && gm.ballCount > 0)
            {
                rb.isKinematic = false; //physics on
                drop = true;
                gm.ballCount -= 1;
            }

            if (drop == false)
            {
                var mousePos = Input.mousePosition;

                var wantedPos = Camera.main.ScreenToWorldPoint(new Vector3(mousePos.x, mousePos.y, 10));

                //transform.position = new Vector3(wantedPos.x, transform.position.y, transform.position.z);

                float clampX = Mathf.Clamp(wantedPos.x, -clampForX, clampForX);

                transform.position = new Vector3(clampX, transform.position.y, transform.position.z);
            }
        }
    }
}
