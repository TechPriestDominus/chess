#include <stdio.h>
#include <chess_print_plain.c>
extern char board[8][8];

void chesspp (char *board) {
	int i, j;
	printf("\n");

	for (i = 7; i >= 0; i--) {
		printf("                                ");
		printf("%d ", i + 1);
		for (j = 0; j < 8; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

	printf("                                  ");
	for (i = 0; i < 8; i++) {
		printf("%c ", i + 97);
	}
	printf("\n");
}


