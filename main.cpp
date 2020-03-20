/*
 * Tomomi Nakamura
 * file@ main.cpp
 * Maze Solver
 */

//This is a test file for a maze solver

#include <iostream>
#include "maze.h"
#include "creature.h"
#include <cassert>

//Testing maze.txt
//Solving for dead end
void Test1(){
    cout << "< Answer for maze.txt >" << endl;
    Maze m("maze.txt");
    Creature cr(3, 4);
    cout << "Start from " << cr;
    string result = cr.Solve(m);
    assert(result == "EEEENNNEEEEEESEEEEESX");
    cout << result << endl;
    cout << m;
    cout << endl;
}
//Testing all methods in maze ad creature classes
void Test2(){
    cout << "< Answer for maze.txt >" << endl;
    Maze m("maze.txt");
    Creature cr1(14, 2);
    Creature cr2(1, 1);
    assert(cr1.Solve(m) == "ESSSEEENNNNN");
    cr2.Solve(m);
    assert(m.IsClear(10, 1));
    assert(!m.IsClear(0, 1));
    assert(!m.IsPath(18, 6));
    assert(m.IsWall(3, 0));
    assert(m.IsVisited(1, 4));
    assert(m.getExitX() == 18);
    assert(m.getExitY() == 0);
    cout << m;
    cout << endl;
}
//Testing mazeSimple.txt
void Test3(){
    Maze m("mazeSimple.txt");
    Creature cr(1, 1);
    cout << "Start from " << cr;
    assert(cr.Solve(m) == "ESSEENEENEESSSSWNNNWSSWNNWSWNWSS");
    cout << m;
    cout << endl;
}
//Testing maze0.txt
void Test4(){
    cout << "< Answer for maze0.txt >" << endl;
    Maze m("maze0.txt");
    Creature cr(8, 3);
    cout << "Start from " << cr;
    assert(cr.Solve(m) == "NNN");
    cout << m;
    cout << endl;
}
int main() {
    Test1();
    Test2();
    Test3();
    Test4();
    cout << "Passed all tests..";
    return 0;
}
