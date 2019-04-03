#include <iostream>
#include "initializeArrays.h"
#include <iomanip>
using namespace std;

void initializeFFMaze(int maze[33][33]) {

	int i, j;

	//adjust values to reflect distance from the center 
	for (i = 1; i <= 15; i += 2) {    //Upper left quadrant
		for (j = 1; j <= 15; j++) {
			maze[i][j] = ((15 - i) + (15 - j)) / 2;
		}
	}

	for (i = 17; i < 33; i += 2) {     //lower left quadrant
		for (j = 15; j >= 0; j -= 2) {
			maze[i][j] = ((i - 16) + (15 - j)) / 2;
		}
	}
	for (i = 1; i <= 15; i += 2) {    //Upper right quadrant
		for (j = 17; j <= 33; j++) {
			maze[i][j] = ((15 - i) + (j - 17)) / 2;
		}
	}

	for (i = 17; i < 33; i += 2) {     //lower right quadrant
		for (j = 17; j <= 33; j++) {
			maze[i][j] = ((i - 16) + (j - 17)) / 2;
		}
	}


	//The following loops determine the possible locations of walls 
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
	return;
}
//////////////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////
void SampleMaze(int arrayMaze[33][33]) {
	int maze[33][33] = {
	{100,100,100,100,100,100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100},
	{100,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	100,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	100 },
	{100,	7,	100,100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	7,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	7,	100,	100,	100,	7,	100},
	{100,	7,	100,7,	7,	7,	7,	7,	7,	7,	100,	7,	7,	7,	100,	7,	7,	7,	7,	7,	7,	7,	7,	7,	100,	7,	100,	7,	7,	7,	100,	7,	100},
	{100,	7,	100,100,	100,	100,	100,	7,	100,	100,	100,	100,	100,	7,	100,	7,	100,	100,	100,	100,	100,	100,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100},
	{100,	7,	7,	7,	7,	7,	7,	7,	7,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	7,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100},
	{100,	7,	100,7,	100,	100,	100,	100,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100},
	{100,	7,	100,7,	100,	7,	7,	7,	100,	7,	7,	7,	7,	7,	100,	7,	7,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	7,	7,	100,	7,	100},
	{100,	7,	100,7,	100,	7,	100,	7,	100,	100,	100,	7,	100,	100,	100,	100,	100,	7,	100,	7,	100,	100,	100,	100,	100,	7,	100,	100,	100,	7,	100,	7,	100},
	{100,	7,	7,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	7,	7,	100,	7,	100,	7,	7,	7,	7,	7,	100,	7,	7,	7,	7,	7,	100,	7,	100},
	{100,	7,	100,7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	100,	100,	7,	100,	7,	100,	100,	100,	100,	100,	7,	100},
	{100,	7,	100,7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	7,	7,	7,	7,	100,	7,	7,	7,	7,	7,	100},
	{100,	7,	100,7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	100,	100,	100,	100,	7,	100,	7,	100,	7,	100},
	{100,	7,	7,	7,	100,	7,	7,	7,	7,	7,	100,	7,	7,	7,	100,	7,	100,	7,	7,	7,	7,	7,	7,	7,	7,	7,	100,	7,	100,	7,	100,	7,	100},
	{100,	7,	100,7,	100,	100,	100,	100,	100,	7,	100,	100,	100,	100,	100,	7,	100,	100,	100,	100,	100,	7,	100,	100,	100,	7,	100,	7,	100,	100,	100,	7,	100},
	{100,	7,	100,7,	100,	7,	7,	7,	7,	7,	7,	7,	7,	7,	100,	0,	0,	0,	100,	7,	7,	7,	100,	7,	7,	7,	100,	7,	7,	7,	100,	7,	100},
	{100,	100,100,7,	100,	100,	100,	7,	100,	7,	100,	100,	100,	7,	100,	0,	0,	0,	100,	100,	100,	100,	100,	7,	100,	100,	100,	7,	100,	7,	100,	7,	100},
	{100,	7,	100,7,	7,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	0,	0,	0,	100,	7,	7,	7,	7,	7,	100,	7,	7,	7,	100,	7,	100,	7,	100},
	{100,	7,	100,7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	100,	100,	100,	100,	7,	100,	100,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100},
	{100,	7,	7,	7,	100,	7,	100,	7,	100,	7,	100,	7,	7,	7,	7,	7,	100,	7,	7,	7,	7,	7,	100,	7,	7,	7,	100,	7,	100,	7,	100,	7,	100},
	{100,	7,	100,7,	100,	100,	100,	7,	100,	7,	100,	100,	100,	100,	100,	7,	100,	100,	100,	100,	100,	100,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100},
	{100,	7,	100,7,	7,	7,	7,	7,	100,	7,	100,	7,	100,	7,	100,	7,	7,	7,	7,	7,	100,	7,	7,	7,	100,	7,	100,	7,	7,	7,	100,	7,	100},
	{100,	7,	100,7,	100,	100,	100,	7,	100,	7,	100,	7,	100,	7,	100,	100,	100,	100,	100,	7,	100,	7,	100,	7,	100,	7,	100,	100,	100,	7,	100,	7,	100},
	{100,	7,	100,7,	7,	7,	100,	7,	100,	7,	7,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	7,	7,	100,	7,	7,	7,	100,	7,	100},
	{100,	7,	100,7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	100,	100,	7,	100,	7,	100,	7,	100},
	{100,	7,	100,7,	100,	7,	7,	7,	7,	7,	100,	7,	7,	7,	100,	7,	7,	7,	100,	7,	7,	7,	100,	7,	7,	7,	7,	7,	100,	7,	100,	7,	100},
	{100,	7,	100,100,	100,	100,	100,	7,	100,	7,	100,	7,	100,	100,	100,	7,	100,	7,	100,	100,	100,	100,	100,	7,	100,	100,	100,	7,	100,	7,	100,	7,	100},
	{100,	7,	7,	7,	100,	7,	100,	7,	100,	7,	100,	7,	100,	7,	7,	7,	100,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	100,	7,	7,	7,	100},
	{100,	7,	100, 7,	100,	7,	100,	7,	100,	100,	100,	7,	100,	7,	100,	7,	100,	7,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	7,	100,	7,	100},
	{100,	7,	100, 7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	100,	7,	100,	7,	100,	7,	100,	7,	7,	7,	7,	7,	7,	7,	7,	7,	100,	7,	100},
	{100,	7,	100, 100,	100,	100,	100,	7,	100,	100,	100,	7,	100,	100,	100,	7,	100,	7,	100,	7,	100,	7,	100,	100,	100,	100,	100,	100,	100,	100,	100,	7,	100},
	{100,	7,	100, 7,	7,	7,	7,	7,	100,	7,	7,	7,	7,	7,	7,	7,	100,	7,	7,	7,	100,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	100},
	{100,	100,100, 100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100}
	};
	for (int i = 0; i < 33; i++) {
		for (int j = 0; j < 33; j++) {
			arrayMaze[i][j] = maze[i][j];
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void displayMaze(int mazeArray[33][33]) { //display maze displays whichever maze is fed to it in an evenly spaced manner making it easy to see for the viewer
	int i = 0;
	int j = 0;
	for (i = 0; i < 33; i++) {
		for (j = 0; j < 33; j++) {
			cout << setw(4) << mazeArray[i][j];
		}
		cout << endl;
	}
	cout << endl;
	system("PAUSE");
	system("CLS");
}