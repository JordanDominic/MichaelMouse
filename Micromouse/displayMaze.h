#ifndef displayMaze_H   // Prevent duplicate definition
#define displayMaze_H
#include <iostream>
#include <iomanip>
using namespace std;

void displayMaze(int mazeArray[16][16]) {
	int i = 0;
	int j = 0;
	for (i = 0; i < 16; i++) {
		for (j = 0; j < 16; j++) {
			cout << setw(4) << mazeArray[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

#endif