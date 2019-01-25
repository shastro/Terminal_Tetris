#include "tetris.h"
#include "terminal.h"
#include <unistd.h>
#include <math.h>

int main(void){


	for(int i = 0; i < 300; i++){
		putc('\n',stdout);
	}
	printf("\033[H"); //Cursor at Corner of Screen

	//Frame Loop
	while(1){
		//Render Loop
		for(angle = 0; angle < 2 * M_PI; angle += 0.01){
			movecursor(x, y);
			printf("#");
		}
		angle = 0;

		usleep(60* 1000); //Refresh Rate
		//angle += 0.001;
		beta += 0.05;
		
		printf("\033[2J");
		fflush(stdout);

	}



	return 0;
}