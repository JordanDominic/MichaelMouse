#include <iostream>
#include "checkDirections.h"


using namespace std;


bool checkAbove(int maze[33][33], int x, int y) {
	//if (maze[x][y] == 7 || maze[x][y] == 1 || maze[x][y] == 9) {
	//	ptr = &maze[x][y];
	if (maze[x - 1][y] != 100) {
		/**ptr = 1;
		ptr = &maze[x][y - 1];*/
		return true;
	}
	//*ptr = 9;
	//return true;
//}
	else {
		return false;
	}
}



///////////////////////////////////////////////
bool checkBelow( int maze[33][33], int x, int y) {
	//if (maze[x][y] == 7 || maze[x][y] == 1 || maze[x][y] == 9) {
		//	ptr = &maze[x][y];
	if (maze[x + 1][y] != 100) {
		/**ptr = 1;
		ptr = &maze[x][y - 1];*/
		return true;
	}
	//*ptr = 9;
	//return true;
//}
	else {
		return false;
	}
}


/////////////////////////////////////////////
bool checkLeft(int maze[33][33], int x, int y) {
	//if (maze[x][y] == 7 || maze[x][y] == 1 || maze[x][y] == 9) {
	//	ptr = &maze[x][y];
	if (maze[x][y - 1] != 100) {
		/**ptr = 1;
		ptr = &maze[x][y - 1];*/
		return true;
	}
	//*ptr = 9;
	//return true;
//}
	else {
		return false;
	}
}


/////////////////////////////////////////////
bool checkRight(int maze[33][33], int x, int y) {
	//if (maze[x][y] == 7 || maze[x][y] == 1 || maze[x][y] == 9) {
	//	ptr = &maze[x][y];
	if (maze[x][y + 1] != 100) {
		/**ptr = 1;
		ptr = &maze[x][y - 1];*/
		return true;
	}
	//*ptr = 9;
	//return true;
//}
	else {
		return false;
	}
}


/////////////////////////////////////////////

