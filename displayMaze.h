#ifndef displayMaze_H   // Prevent duplicate definition
#define displayMaze_H
#include <iostream>
#include <iomanip>
using namespace std;

void displayMaze(int mazeArray[33][33]) {
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

#endif