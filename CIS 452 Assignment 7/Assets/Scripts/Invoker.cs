/*Sydney Foe
 * Invoker
 * Assignment 7
 * Adds all the commands to a list. Then will call them or undo them when called using a stack.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Invoker 
{
    private Dictionary<string, Command> commands;
    private Stack<Command> commandHistory;

    public Invoker()
    {
        commands = new Dictionary<string, Command>();
        commandHistory = new Stack<Command>();
    }

    public void AddCommand(string name, Command command)
    {
        commands.Add(name, command);
    }

    public void CallCommand(string name, Vector3 t, GameObject g)
    {
        commands.TryGetValue(name, out Command command);

        if(command != null)
        {
            command.Execute(t, g);
        }

        commandHistory.Push(command);
    }

    public void UndoIt()
    {
        if(commandHistory.Count != 0)
        {
            Command command = commandHistory.Pop();
            command.Undo();
        }
    }
}
