/*
 * Tomomi Nakamura
 * file@ maze.h
 * Maze Solver
*/

//This file initializes Maze class
#ifndef HW3_MAZE_MAZE_H
#define HW3_MAZE_MAZE_H

#include <string>
using namespace std;
class Maze
{
private:
    int width;  //Width of the maze
    int height; //Height of the maze
    int exitX;  //x-axes of the maze's exit
    int exitY;  //y-axes of the maze's exit
    char **field;   //2D array pointer to store the maze from a text file
    void createMazeFromFile(string fileName);   //Private method to create a maze from a text file
    void create2DArray();   //Private method to declare a SD array
    bool IsValidLowAndCol(int row, int col) const;    //Checking if the row and col is within the maze
public:
    explicit Maze(string mazeFile); //Single parameterized constructor
    Maze(const Maze& mz);     //Copy constructor
    ~Maze();    //Destructor

    friend ostream &operator<<(ostream &out, const Maze &mz); //Assignment operator <<
    int getExitX(void); //getter to return the value of exitX
    int getExitY(void); //getter to retrn the value pf exitY
    bool IsClear(int row, int column) const;    //Method to check if the cell is clear to pass
    bool IsWall(int row, int column) const;     //Method to check if the cell is a wall
    bool IsPath(int row, int column) const;     //Method to check if the cell is a path
    bool IsVisited(int row, int column) const;  //Method to check if the cell is already visited

    void MarkAsPath(int row, int column);   // mark the maze with *
    void markAsVisited(int row, int column); // mark the maze with +
};
#endif //HW3_MAZE_MAZE_H
