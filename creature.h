/*
 * Tomomi Nakamura
 * file@ creature.cpp
 * Maze Solver
*/

//This file initializes Creature class
#ifndef HW3_MAZE_CREATURE_H
#define HW3_MAZE_CREATURE_H

#include <iostream>
#include "maze.h"
using namespace std;
class Creature
{
private:
    int currX, currY;   //x-axes and y-axes of creature's current location
public:
    Creature();     //Default constructor
    Creature(const Creature& cr);   //Copy constructor
    ~Creature();    //Destructor
    Creature(int currX, int currY);     //Parametarized constructor
    string Solve(Maze& maze);   //function to solve a maze
    friend ostream &operator<<(ostream &out, const Creature &creature);     //Assignment operator <<
};
#endif //HW3_MAZE_CREATURE_H
