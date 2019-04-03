#include <iostream>
#include "movement.h"
#include "checkDirections.h"
#include "initializeArrays.h"


using namespace std;

void moveUp(int a, int b, int *mouse, int maze[33][33]) {
	
	if (checkAbove(maze,a,b) == true) {
		*mouse = 1;
		mouse = &maze[a-1][b];
		*mouse = 9;
		displayMaze(maze);
	}
	else {
		mouse = &maze[a][b];
		displayMaze(maze);
	}
}

//////////////////////////////////////////////////////////////
void moveDown(int a, int b, int *mouse, int maze[33][33]) {

	if (checkBelow(maze, a, b) == true) {
		*mouse = 1;
		mouse = &maze[a + 1][b];
		*mouse = 9;
		displayMaze(maze);
	}
	else {
		mouse = &maze[a][b];
		displayMaze(maze);
	}
}//////////////////////////////////////////////////////////////
void moveLeft(int a, int b, int *mouse, int maze[33][33]) {

	if (checkLeft(maze, a, b) == true) {
		*mouse = 1;
		mouse = &maze[a][b-1];
		*mouse = 9;
		displayMaze(maze);
	}
	else {
		mouse = &maze[a][b];
		displayMaze(maze);
	}
}
////////////////////////////////////////////////////////////////
void moveRight(int a, int b, int *mouse, int maze[33][33]) {

	if (checkRight(maze, a, b) == true) {
		*mouse = 1;
		mouse = &maze[a][b+1];
		*mouse = 9;
		displayMaze(maze);
	}
	else {
		mouse = &maze[a][b];
		displayMaze(maze);
	}
}
/////////////////////////////////////////////////////////////////

