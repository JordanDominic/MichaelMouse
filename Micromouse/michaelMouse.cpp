#include <iostream>
#include <iomanip>
#include "InitializeArrayFF.h"
#include "InitializeArrayZero.h"
#include "displayMaze.h"

using namespace std;

int main() {
	int mazeFFArray[16][16];
	int mazeExploreArray[16][16];
	int mazePathTracking[16][16];

	initializeFFMaze(mazeFFArray);
	initializeZeroMaze(mazeExploreArray);
	initializeZeroMaze(mazePathTracking);
	cout << "Flood Fill Array: " << endl;
	displayMaze(mazeFFArray);
	cout << "Explore Array: " << endl;
	displayMaze(mazeExploreArray);
	cout << "Path Tracking Array: " << endl;
	displayMaze(mazePathTracking);
	system("PAUSE");

	return 0;
}