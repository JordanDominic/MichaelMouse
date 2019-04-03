#ifndef initializeArrays_H    // Prevent duplicate definition
#define initializeArrays_H
#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
void initializeFFMaze(int maze[33][33]);                                  //prototype for setting up floodfill maze: floodfill maze increments each space from the center by one
                                                                          //until the edges of the maze are reached
/////////////////////////////////////////////////////////////////////////
void initializeExploreMaze(int maze[33][33]);                             //prototype for setting up the exploration maze:each space begins with a zero until it is visted and
																		  //then is replaced by ones
/////////////////////////////////////////////////////////////////////////
void SampleMaze(int arrayMaze[33][33]);									  //prototype for setting up the sample maze which is input by the programmer: 100 represents walls and 7 represents open space

/////////////////////////////////////////////////////////////////////////
void displayMaze(int mazeArray[33][33]);
#endif
