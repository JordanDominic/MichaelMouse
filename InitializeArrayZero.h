#ifndef InitializeArrayExplore_H    // Prevent duplicate definition
#define InitializeArrayExplore_H
#include <iostream>
using namespace std;

void initializeExploreMaze(int maze[33][33]) {
	int i, j;
	for (i = 1; i <= 31; i = i + 2) {
		for (j = 1; j <= 31; j++) {
			maze[i][j] = 0;
		}
	}
	//setup for possible wall locations
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

	for (i = 32; i < 33; i++) {
		for (j = 0; j < 33; j++) {
			maze[i][j] = 111;
		}
	}
	for (i = 0; i < 1; i++) {
		for (j = 0; j < 33; j++) {
			maze[i][j] = 111;
		}
	}
	for (i = 0; i < 33; i++) {
		for (j = 0; j < 1; j++) {
			maze[i][j] = 111;
		}
	}
	for (i = 0; i < 33; i++) {
		for (j = 32; j < 33; j++) {
			maze[i][j] = 111;
		}
	}
}
#endif