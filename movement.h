#ifndef movement_H    // Prevent duplicate definition
#define movement_H
#include <iostream>
using namespace std;

void moveUp(int a, int b, int *mouse, int maze[33][33]);

void moveDown(int a, int b, int *mouse, int maze[33][33]);

void moveLeft(int a, int b, int *mouse, int maze[33][33]);

void moveRight(int a, int b, int *mouse, int maze[33][33]);

#endif