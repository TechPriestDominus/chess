

#include "chess.h"
#include "chess_print_plain.h"
#include "chess_read.h"
#include <stdio.h>
int x1, x2, y1, y2;
char board[8][8] = {{'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R'},
                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};
int main() {
	chesspp();
	int i,j;
	while (1) {
		printf("Белые");
		scanan();
		i = white();
		if (i=1) {
                        move();
                }

		chesspp();

    		printf("Черные");
		scanan();
    		j = black();
    		if (i=1) {
			move();
		}
   		chesspp();
	}
	return 0
}
