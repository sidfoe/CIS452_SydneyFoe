using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StopAndGo : Movement
{
    public float left = -3;
    public float right = 3;
    public bool oneTime = true;
    bool run = true;

    public override void Move()
    {
        run = true;

        float startingPoint = GetComponent<Transform>().position.x;
        float startTime = Time.time;

        if (startingPoint < 3.5 && GetComponent<Target>().startLeft == true && run == true) //coming from left
        {
            transform.Translate(Vector3.right * .025f);
        }

        else if (startingPoint > -3.25 && GetComponent<Target>().startLeft == false && run == true)
        {
            transform.Translate(Vector3.left * .025f);
        }

        if (oneTime == true)
        {
            //float randPos = Random.Range(left, right);

            //if (transform.position == new Vector3(randPos, transform.position.y, transform.position.z))
            //{
            //    oneTime = false;
            //    run = false;
            //    StartCoroutine("WaitTime");
            //}

            StartCoroutine("WaitTime");
        }
    }

    IEnumerator WaitTime()
    {
        oneTime = false;
        yield return new WaitForSeconds(1);
        run = false;
        yield return new WaitForSeconds(3);
        oneTime = true;
        run = true;
    }
        
}


public class PopUp : Movement
{
    public float left = -3;
    public float right = 3;
    public bool oneTime = true;

    public override void Move()
    {
        if (oneTime == true)
        {
            oneTime = false;
            float randPos = Random.Range(left, right);

            transform.position = new Vector3(randPos, transform.position.y, transform.position.z);

            StartCoroutine("WaitTime");
        }
    }

    IEnumerator WaitTime()
    {
        //hello
        yield return new WaitForSeconds(3);
        Destroy(gameObject);
        oneTime = true;
    }

}

public class PlainGo : Movement
{
    public float left = -3.25f;
    public float right = 3.5f;

    public override void Move()
    {
        float startingPoint = GetComponent<Transform>().position.x;
        float startTime = Time.time;

        if (startingPoint < 3.5 && GetComponent<Target>().startLeft == true) //coming from left
        {
            transform.Translate(Vector3.right * .025f);
        }

        else if (startingPoint > -3.25 && GetComponent<Target>().startLeft == false)
        {
            transform.Translate(Vector3.left * .025f);
        }
    }
}

//transform.position = Vector3.Lerp(GetComponent<Transform>().position, new Vector3(-4f, GetComponent<Transform>().position.y,
//    GetComponent<Transform>().position.z), .015f);

//do
//{
//    
//    Debug.Log(GetComponent<Transform>().position.x);
//} while (GetComponent<Transform>().position.x > -3);

//while (Time.time < startTime + 5)
//{
//    transform.position = Vector3.Lerp(GetComponent<Transform>().position, new Vector3(-2.825f, GetComponent<Transform>().position.y, GetComponent<Transform>().position.z),
//        (Time.time - startTime) / 5);
//}