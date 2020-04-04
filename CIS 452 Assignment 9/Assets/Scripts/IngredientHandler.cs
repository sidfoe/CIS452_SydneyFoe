using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IngredientHandler : MonoBehaviour
{
    public GameManager gm;
    public int ingredientID;
    private void OnMouseDown()
    {
        if (gm.canClick == true)
        {
            if (ingredientID == gm.ingredientNeeded)
            {
                gm.ingredientAdded = true;
            }

            else
            {
                gm.ingredientAdded = false;
            }
        }
    }
}
