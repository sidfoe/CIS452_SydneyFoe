using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Sphere : Moveable
{
    public Moveable obj;

    public float speed;

    private Rigidbody rb;

    private float adjust = .25f;
    public static float sizeCheck;

    public Text sizeText;

    public void Start()
    {
        rb = GetComponent<Rigidbody>();
        obj = this;
        ChangeSize();

        sizeText = GameObject.FindGameObjectWithTag("sizeText").GetComponent<Text>();
    }

    public void Update()
    {
        sizeText.text = "Size :" + adjust;
        sizeCheck = adjust;
    }

    public override float ChangeSize()
    {
        return .25f;
    }

    public void FixedUpdate()
    {
        if (GameManager.canPlay == true)
        {
            float moveHorizontal = Input.GetAxis("Horizontal");
            float moveVertical = Input.GetAxis("Vertical");

            Vector3 movement = new Vector3(moveHorizontal, 0.0f, moveVertical);

            rb.AddForce(movement * speed);
            transform.localScale = new Vector3(adjust, adjust, adjust);
        }

        else
        {
            rb.velocity = Vector3.zero;
        }

        
    }

    private void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.CompareTag("1"))
        {
            obj = new Size1(obj);
            adjust = obj.ChangeSize();
            Destroy(col.gameObject);
        }

        if (col.gameObject.CompareTag("2"))
        {
            obj = new Size2(obj);
            adjust = obj.ChangeSize();
            Destroy(col.gameObject);
        }

        if (col.gameObject.CompareTag("3"))
        {
            obj = new Size3(obj);
            adjust = obj.ChangeSize();
            Destroy(col.gameObject);
        }

        if (col.gameObject.CompareTag("4"))
        {
            obj = new MinusSize(obj);
            adjust = obj.ChangeSize();
            Destroy(col.gameObject);
        }
    }
}
