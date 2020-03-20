/*
 * Tomomi Nakamura
 * file@ maze.cpp
 * Mase Solver
 */

//This file contains details of each method in Maze interface
#include "maze.h"
#include "creature.h"
#include <fstream>
#include <iostream>
using namespace std;

//Constructor passing a name of a text file which is storing a maze
Maze::Maze(string mazeFile) {
    createMazeFromFile(mazeFile);
}

//Destructor
//delete the dynamically allocated 2D array
Maze::~Maze() {
    delete [] field;
    field = NULL;
}

//Copy constructor
Maze::Maze(const Maze &mz) {
    width = mz.width;
    height = mz.height;
    exitX = mz.exitX;
    exitY = mz.exitY;
    field = mz.field;
}

//Creating a maze
//read a maze from a text file and
//store it in a 2D pointer array called "field"
void Maze::createMazeFromFile(string fileName){
    ifstream readFile;
    int col = -1;   //keep track of column of maze
    string str; //Store a single line of the file

    readFile.open(fileName.c_str());
    if (readFile.is_open())     //Check if the file is opened successfully
    {
        readFile >> width;
        readFile >> height;
        readFile >> exitY;
        readFile >> exitX;

        create2DArray();    //creating a 2D array

        while(getline(readFile, str))
        {
            if (col != -1) //Skip adding the first line to an array since it is empty
            {
                for (int row = 0; row < width; row++)
                {
                    field[row][col] = str[row];
                }
            }
            col++;
        }
        readFile.close();
    }
    else    //return an error message if the file didnt open
    {
        cout << "Failed to open a file..";
    }
}

//Declaring a 2D pointer array called "field"
void Maze::create2DArray()
{
    field = new char*[width];
    for(int i = 0; i < width; i++)
    {
        field[i] = new char[height];
    }
    //Storing a blank space in every cell
    for(int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            field[i][j] = ' ';
        }
    }
}

//Assignment operator <<
//Printing out the maze
ostream &operator<<(ostream &out, const Maze &mz) {
    for(int i = 0; i < mz.height; i++)
    {
        for (int j = 0; j < mz.width; j++)
        {
            out << mz.field[j][i];
        }
        out << endl;
    }
    return out;
}

//Method to check if the cell is clear to pass
//returns true if the cell contains ' '
bool Maze::IsClear(int row, int column) const {
    return IsValidLowAndCol(row, column) ? (field[row][column] == ' ') : throw out_of_range("index if out of range");
}

//Method to check if the cell is a wall
//returns true if the cell contains #
bool Maze::IsWall(int row, int column) const {
    return IsValidLowAndCol(row, column) ? (field[row][column] == '#' || field[column][row] == 'x') : throw out_of_range("index if out of range");
}

//Method to check if the cell is a path
//returns true if the cell contains *
bool Maze::IsPath(int row, int column) const {
    return IsValidLowAndCol(row, column) ? (field[row][column] == '*') : throw out_of_range("index if out of range");
}

//Method to check if the cell is already visited
//returns true if the cell contains +
bool Maze::IsVisited(int row, int column) const {
    return IsValidLowAndCol(row, column) ? (field[row][column] == '+') : throw out_of_range("index if out of range");
}

// mark the maze with *
void Maze::MarkAsPath(int row, int column) {
    field[row][column] = '*';
}
// mark the maze with +
void Maze::markAsVisited(int row, int column) {
    field[row][column] = '+';
}

//getter to return the value of exitX
int Maze::getExitX(void) {
    return exitX;
}

//getter to retrn the value pf exitY
int Maze::getExitY(void) {
    return exitY;
}

//Checking if the row and col is out of range
bool Maze::IsValidLowAndCol(int row, int col) const{
    return (row >= 0 && col >= 0) && (row < width && col < height);
}




