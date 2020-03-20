/*
 * Tomomi Nakamura
 * file@ creature.cpp
 * Maze Solver
*/

//This file contains details of each method in Creature interface
#include <stack>
#include "creature.h"

//Constructor passing a x and y axes of starting position in a maze
Creature::Creature(int startX, int startY)
{
    currX = startX;
    currY = startY;
}

//defalt constructo
Creature::Creature() {  }

//Copy constructor
Creature::Creature(const Creature &cr) {
    currX = cr.currX;
    currY = cr.currY;
}

//destructor
Creature::~Creature() { }

//Solving the maze from a starting point (currX, currY)
// returns a string in the form of NNEEN
// (where N means North, E means East, etc)
// that will let the creature get to the exit
// if creature cannot get to the exit, returns "X"
string Creature::Solve(Maze &maze) {
    string str;
    bool deadEnd = false;
    //store current pass in a stack so that the creature
    //can go back when it is stuck
    stack<Creature> s;
    
    s.push(Creature(currX, currY));
    maze.MarkAsPath(s.top().currX, s.top().currY);
    while (!deadEnd)
    {
        if (s.top().currX == maze.getExitX() && s.top().currY == maze.getExitY())
        {
            return str;
        }
        //North
        else if (maze.IsClear(s.top().currX, s.top().currY - 1))
        {
            maze.MarkAsPath(currX, currY - 1);
            s.push(Creature(currX, currY -1));
            str += "N";
            currY -= 1;
        }
            //East
        else if (maze.IsClear(s.top().currX + 1, s.top().currY))
        {
            maze.MarkAsPath(currX + 1, currY);
            s.push(Creature(currX + 1, currY));
            str += "E";
            currX += 1;
        }
            //South
        else if (maze.IsClear(s.top().currX, s.top().currY + 1))
        {
            maze.MarkAsPath(currX, currY + 1);
            s.push(Creature(currX, currY + 1));
            str += "S";
            currY += 1;
        }
        //West
        else if (maze.IsClear(s.top().currX - 1, s.top().currY))
        {
            maze.MarkAsPath(currX - 1, currY);
            s.push(Creature(currX - 1, currY));
            str += "W";
            currX -= 1;
        }
        // Cannot go any direction
        else
        {
            maze.markAsVisited(s.top().currX, s.top().currY);
            s.pop();
            if (s.empty())  //
            {
                deadEnd = true;
            }
            else
            {
                currX = s.top().currX;
                currY = s.top().currY;
            }
        }
    }
    return str += "X";
}

//Assignment operator <<
//Printing out the current location of creature
ostream &operator<<(ostream &out, const Creature &creature) {
    out << "c(" << creature.currX << "," << creature.currY << ")" << endl;
    return out;
}





