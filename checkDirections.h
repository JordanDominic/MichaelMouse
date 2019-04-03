#ifndef checkDirections_H    // Prevent duplicate definition
#define checkDirections_H
#include <iostream>
using namespace std;

bool checkAbove(int maze[33][33], int x, int y); //check functions will peek into the adjecent cell in the direction stated by the function declaration
											 //and return true if the space is open and not blocked by a wall
/////////////////////////////////////////////
bool checkBelow(int maze[33][33], int x, int y); //check functions will peek into the adjecent cell in the direction stated by the function declaration
											 //and return true if the space is open and not blocked by a wall
/////////////////////////////////////////////
bool checkLeft(int maze[33][33], int x, int y);  //check functions will peek into the adjecent cell in the direction stated by the function declaration
											 //and return true if the space is open and not blocked by a wall
/////////////////////////////////////////////
bool checkRight(int maze[33][33], int x, int y); //check functions will peek into the adjecent cell in the direction stated by the function declaration
											 //and return true if the space is open and not blocked by a wall
/////////////////////////////////////////////


#endif