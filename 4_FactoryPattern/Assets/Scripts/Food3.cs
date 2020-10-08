using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Food3 : Food
{
    public float speed;

    public bool hasBlue = false;
    public bool hasPurple = false;
    public bool hasGreen = false;

    public bool finished = false;

    private ParticleSystem ps;

    public void Start()
    {
        ps = GetComponent<ParticleSystem>();
    }

    void Update()
    {
        if (GameManager.canPlay == true)
        {
            transform.Translate(Vector3.right * speed);
            ToComplete();
        }
    }

    public override void ToComplete()
    {
        if (hasBlue == false && hasGreen == false && hasPurple == true)
        {
            finished = true;
            gameObject.GetComponent<MeshRenderer>().material.color = Color.green;
        }

        if (hasBlue == true || hasGreen == true)
        {
            finished = false;
            gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
        }
    }

    public void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.CompareTag("blue"))
        {
            hasBlue = true;
            col.gameObject.GetComponent<DragObject>().isClicked = false;
            col.gameObject.transform.position = new Vector3(-1.27f, .75f, -3.7f);
            ps.Play();
        }

        if (col.gameObject.CompareTag("purple"))
        {
            hasPurple = true;
            col.gameObject.GetComponent<DragObject>().isClicked = false;
            col.gameObject.transform.position = new Vector3(.12f, .052f, -3.7f);
            ps.Play();
        }

        if (col.gameObject.CompareTag("green"))
        {
            hasGreen = true;
            col.gameObject.GetComponent<DragObject>().isClicked = false;
            col.gameObject.transform.position = new Vector3(1.332f, .75f, -3.7f);
            ps.Play();
        }
    }
}
