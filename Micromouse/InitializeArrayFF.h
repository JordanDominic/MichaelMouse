#ifndef InitializeArrayFF_H    // Prevent duplicate definition
#define InitializeArrayFF_H
#include <iostream>
using namespace std;

void initializeFFMaze(int maze[16][16]) {

	int i, j;

	//adjust values to reflect distance from the center 
	for (i = 0; i <= 7; i++) {
		for (j = 0; j <= 7; j++) {
			maze[i][j] =  (7-i) + (7-j);
		}
	}

	for (i = 8; i < 16; i++){
		for (j = 7; j >= 0; j--) {
			maze[i][j] = (i- 8) + (7 - j);
		}
	}

	for (i = 8; i < 16; i++) {
		for (j = 8; j < 16; j++) {
			maze[i][j] = (i - 8) + (j - 8);
		}
	}

	for (i = 0; i <= 7; i++) {
		for (j = 8; j < 16; j++) {
			maze[i][j] = (7 - i) + (j - 8);
		}
	}
	return;
}

#endif
