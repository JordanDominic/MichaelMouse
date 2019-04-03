#include <iostream>
#include <iomanip>
#include "movement.h"
#include "initializeArrays.h"
#include "checkDirections.h"
#include "movement.h"

using namespace std;



int main() {

	int mice[33][33];
	int mouseMaze[33][33];
	int tmaze[33][33];

	SampleMaze(mice);
	initializeFFMaze(mouseMaze);
	initializeExploreMaze(tmaze);

	displayMaze(mice);
	//int *ptr = NULL;
	//ptr = &mice[31][31]; //sets pointer location to the bottom right cell
	////cout << checkLeft(ptr, mice, 31, 31) << endl << checkRight(ptr, mice, 31, 31) << endl << checkAbove(ptr, mice, 31, 31) << endl << checkBelow(ptr, mice, 31, 31) << endl;
	//int x, y;
	//x = 31; y = 31;
	//moveUp(x, y, ptr, mice);
	//system("PAUSE");
	displayMaze(mouseMaze);
	displayMaze(tmaze);

	return 0;
}