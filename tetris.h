//Header to contain structs and definitions related to the calculation of the gamestate and collision
#ifndef TETRIS_H
#define TETRIS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Directions increase counter clockwise
enum DIR {
	UP, RIGHT, DOWN, LEFT
};

struct Piece_t{

	int **shape;
	int dir;
	int x;
	int y;

};


#endif