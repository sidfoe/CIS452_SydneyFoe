/*Sydney Foe
 * PlaceXCommand
 * Assignment 7
 * Defines the place x command by placing x and not allowing the player to place another x there.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaceXCommand : Command
{
    private PlaceXReciever r;

    private Stack<GameObject> items;
    private Stack<GameObject> buttons;

    public PlaceXCommand(PlaceXReciever r)
    {
        this.r = r;
        items = new Stack<GameObject>();
        buttons = new Stack<GameObject>();
    }

    public void Execute(Vector3  t, GameObject g)
    {
        buttons.Push(g);
        GameObject l = r.Action(t, g);
        items.Push(l);
    }

    public void Undo()
    {
        if (buttons != null)
        {
            buttons.Pop().SetActive(true);
        }

        if (items != null)
        {
            r.UndoAction(items.Pop());
        }
    }
}
