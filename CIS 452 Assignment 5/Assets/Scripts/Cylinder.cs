using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cylinder : MonoBehaviour
{
    public Vector3 pos;

    void Start()
    {
        //pos = transform.position;
        //pos.y = .73f;
    }

    // Update is called once per frame
    void Update()
    {
        if(transform.position.y < pos.y)
        {
            transform.position = pos;
        }
    }
}
