#include <iostream>
#include "checkDirections.h"
#include "movement.h"
using namespace std;

void autoMovement(bool up, bool down, bool left, bool right, int x, int y, int *ptr, int maze[33][33]) {
	if (up == true &&
		down == true &&
		left == true &&
		right == true) {
		moveLeft(x, y, ptr, maze);
	}

	else if (up == true &&
		down == true &&
		left == true &&
		right == false) {
		moveLeft(x, y, ptr, maze);
	}

	else if (up == true &&
		down == true &&
		left == false &&
		right == true) {
		moveLeft(x, y, ptr, maze);
	}
}