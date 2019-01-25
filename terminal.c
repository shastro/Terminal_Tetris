#include "terminal.h"
//Handles terminal rendering


//Draw Screen
//Clear screen


void movecursor(int x, int y)
{
	printf("\033[%d;%df", y, x);
	fflush(stdout);
}

//GameBoardRender
/* Function that handles the rendering of the board, takes in 2d array of zeros and ones and input
and renders each, 


//Render Piece
//Takes in 2d array of zeros and ones, produces a rendered block,
/*Inputs
* struct block
*
*
*/