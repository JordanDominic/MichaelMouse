#include <iostream>
#include <iomanip>
#include <stack>
#include "InitializeArrayFF.h"
#include "InitializeArrayZero.h"
#include "displayMaze.h"
#include "SampleMaze.h"
#include "Exploration.h"


using namespace std;

int main() {
	int mazeFFArray[33][33];
	int mazeExploreArray[33][33];
	int sampleMaze[33][33];
	int x = 1;
	int y = 31;

	/*initializeFFMaze(mazeFFArray);
	initializeExploreMaze(mazeExploreArray);*/
	SampleMaze(sampleMaze);

	/*displayMaze(mazeFFArray);*/
	/*displayMaze(mazeExploreArray);*/
	/*displayMaze(sampleMaze);*/
	displayMaze(sampleMaze);
	Explore(sampleMaze, x, y);
	
	/*int *ptr = NULL;
	ptr = &sampleMaze[x][y];
	cout << checkAbove(sampleMaze, ptr, x, y) << endl;
	cout << *ptr << endl;*/
	
	system("PAUSE");

	return 0;
}