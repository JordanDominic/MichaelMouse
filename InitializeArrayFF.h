#ifndef InitializeArrayFF_H    // Prevent duplicate definition
#define InitializeArrayFF_H
#include <iostream>
using namespace std;

void initializeFFMaze(int maze[33][33]) {

	int i, j;

	//adjust values to reflect distance from the center 
	for (i = 1; i <= 15; i+=2) {    //Upper left quadrant
		for (j = 1; j <= 15; j++) {
			maze[i][j] =  ((15-i) + (15-j))/2;
		}
	}

	for (i = 17; i < 33; i+=2){     //lower left quadrant
		for (j = 15; j >= 0; j-=2) {
			maze[i][j] = ((i- 16) + (15 - j))/2;
		}
	}
	for (i = 1; i <= 15; i += 2) {    //Upper right quadrant
		for (j = 17; j <= 33; j++) {
			maze[i][j] = ((15 - i) + (j-17)) / 2;
		}
	}

	for (i = 17; i < 33; i += 2) {     //lower right quadrant
		for (j = 17; j <=33; j++) {
			maze[i][j] = ((i - 16) + (j - 17)) / 2;
		}
	}

	
	//The following loops mark where we know there are walls (I think...)
	for (i = 0; i < 33; i = i + 2) {
		for (j = 0; j < 33; j++) {
			maze[i][j] = 111;
		}
	}
	for (i = 0; i < 33; i++) {
		for (j = 0; j < 33; j = j + 2) {
			maze[i][j] = 111;
		}
	}

	//Right wall of maze
	for (i = 32; i < 33; i++) {
		for (j = 0; j < 33; j++) {
			maze[i][j] = 111;
		}
	}
	
	//Left wall of maze
	for (i = 0; i < 1; i++) {
		for (j = 0; j < 33; j++) {
			maze[i][j] = 111;
		}
	}
	
	//Bottom wall of maze
	for (i = 0; i < 33; i++) {
		for (j = 0; j < 1; j++) {
			maze[i][j] = 111;
		}
	}
	
	//Top wall of maze
	for (i = 0; i < 33; i++) {
		for (j = 32; j < 33; j++) {
			maze[i][j] = 111;
		}
	}
	return;
}

#endif
