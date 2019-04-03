#ifndef Exploration_H    // Prevent duplicate definition
#define Exploration_H
#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////
//int checkAbove(int maze[33][33], int *ptr, int x, int y) {
//	/*if (maze[x - 1][y] == 7) {
//		ptr = &maze[x - 1][y];
//		return true;
//	}
//	else {
//		return false;
//	}*/
//	if (maze[x - 1][y] == 7 || maze[x - 1][y] == 100) {
//		ptr = &maze[x][y];
//		if (maze[x + 1][y] == 7 && maze[x - 1][y] != NULL)
//			maze[x + 1][y] = 1;
//		*ptr = 9;
//		//directionCheck(maze, ptr, x, y);
//		//cout << "working" << endl;
//		return *ptr;
//	}
//	else {
//		return *ptr;
//	}
//}
//
//void mouseUp(bool openSpace, int *ptr, int maze[33][33], int x, int y) {
//		if (maze[x-1][y]==7 || maze[x-1][y] == 100) {
//			ptr = &maze[x][y];
//			if(maze[x+1][y] == 7 && maze[x-1][y] != NULL)
//			maze[x+1][y] = 1;
//			*ptr = 9;
//			//directionCheck(maze, ptr, x, y);
//			//cout << "working" << endl;
//			return *ptr;
//		}
//		else {
//			return *ptr;
//		}
//}
/////////////////////////////////////////////////////////////////////////////
int checkBelow(int maze[33][33], int *ptr, int x, int y) {
	if (maze[x + 1][y] == 7 || maze[x + 1][y] == 100) {
		ptr = &maze[x][y];
		if (maze[x - 1][y] != 100 && maze[x + 1][y] != NULL)
			maze[x - 1][y] = 1;
		*ptr = 9;
		//directionCheck(maze, ptr, x, y);
		//cout << "working" << endl;
		return *ptr;
	}
	else {
		return *ptr;
	}
}
/////////////////////////////////////////////////////////////////////////////////
//int checkLeft(int maze[33][33], int *ptr, int x, int y) {
//	if (maze[x][y-1]==7 || maze[x][y-1] == 100) {
//		ptr = &maze[x][y];
//		if(maze[x][y-1] != 100 && maze[x][y+1] != NULL)
//		maze[x][y-1] = 1;
//		*ptr = 9;
//		//directionCheck(maze, ptr, x, y);
//		//cout << "working" << endl;
//		return *ptr;
//	}
//	else {
//		return *ptr;
//	}
//}
//
///////////////////////////////////////////////////////////////////////////////
//int checkRight(int maze[33][33], int *ptr, int x, int y) {
//	if (maze[x][y + 1] == 7 || maze[x][y + 1] == 100) {
//		ptr = &maze[x][y];
//		if (maze[x][y + 1] != 100 && maze[x][y - 1] != NULL)
//			maze[x][y + 1] = 1;
//		*ptr = 9;
//		//directionCheck(maze, ptr, x, y);
//		//cout << "working" << endl;
//		return *ptr;
//	}
//	else {
//		return *ptr;
//	}
//}

/////////////////////////////////////////////////////////////////////////////
void directionCheck(int maze[33][33], int *ptr, int x, int y) {
	static int a = x, b = y;
	int *mouse = NULL;
	mouse = ptr;
	while (/*checkAbove(maze, mouse, a, b) != 0 && checkAbove(maze, mouse, a, b) != 100*/
		 checkBelow(maze, mouse, a, b) != 0 && checkBelow(maze, mouse, a, b) != 100
			/*|| checkLeft(maze, mouse, a, b) != 0 && checkLeft(maze, mouse, a, b) != 100
			|| checkRight(maze, mouse, a, b) != 0 && checkRight(maze, mouse, a, b)!= 100*/
		) {

		//if (checkAbove(maze, mouse, (a - 1), b) == 7 || checkAbove(maze, mouse, (a - 1), b) == 9) {
		//	a = a - 1;
		//	displayMaze(maze);
		//	mouse = &maze[a][b];
		//	return;
		//	//directionCheck(maze, mouse, a, b);
		//}
		 if (checkBelow(maze, mouse, (a + 1), b) == 7 || checkBelow(maze, mouse, (a + 1), b) == 9) {
			a = a + 1;
			displayMaze(maze);
			mouse = &maze[a][b];
			//directionCheck(maze, mouse, a, b);
		}
		//else if (checkLeft(maze, mouse, a, (b - 1) == 7 || checkLeft(maze, mouse, a, (b - 1)) == 9)) {
		//	b = b - 1;
		//	displayMaze(maze);
		//	mouse = &maze[a][b];
		//	//directionCheck(maze, mouse, a, b);
		//}
		//else if (checkRight(maze, mouse, a, (b + 1)) == 7 || checkAbove(maze, mouse, a, (b + 1)) == 9) {
		//	b = b + 1;
		//		displayMaze(maze);
		//		mouse = &maze[a][b];
		//		//directionCheck(maze, mouse, a, b);
		//}
		else {
			displayMaze(maze);
			//cout << *ptr;
		}

		//checkBelow(maze, ptr, x, y);
		//checkLeft(maze, ptr, x, y);
		//checkRight(maze, ptr, x, y);
		//displayMaze(maze);
	}
}
/////////////////////////////////////////////////////////////////////////////
//
//
//
//
/////////////////////////////////////////////////////////////////////////////
void Explore(int maze[33][33], int x, int y) {
	int *mouse = NULL;  

	mouse = &maze[x][y];
	directionCheck(maze, mouse, x, y);
}


#endif