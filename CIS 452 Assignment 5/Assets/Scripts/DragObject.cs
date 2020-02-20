/*
 * Sydney Foe
 * DragObject
 * Assignment 5
 * Allows player to drag the food additive cylinder with the mouse
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DragObject : MonoBehaviour
{
    float planeY = .8f;

    Vector3 draggingObject;
    Plane plane;

    public bool isClicked = false;

    public void Update()
    {
        Transform draggingObject = transform;

        Plane plane = new Plane(Vector3.up, Vector3.up * planeY); // ground plane

        if (isClicked == true)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            float distance; // the distance from the ray origin to the ray intersection of the plane
            if (plane.Raycast(ray, out distance))
            {
                draggingObject.position = ray.GetPoint(distance); // distance along the ray
            }
        }
    }

    void OnMouseDrag()
    {
        isClicked = true;
    }

    private void OnMouseUp()
    {
        isClicked = false;
    }
}
