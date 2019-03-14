#ifndef InitializeArrayExplore_H    // Prevent duplicate definition
#define InitializeArrayExplore_H
#include <iostream>
using namespace std;

void initializeZeroMaze(int maze[16][16]) {
	int i, j;
	for (i = 0; i < 16; i++) {
		for (j = 0; j < 16; j++) {
			maze[i][j] = 0;
		}
	}
}
#endif