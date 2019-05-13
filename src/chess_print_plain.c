#include <stdio.h>
#include <chess_print_plain.c>
extern char board[8][8];

void chesspp (char *board) {
    int i,j;
    for(i=0;i<8;i++) {
        printf("%d ", 8-i);
        for(j=0;j<8;j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("  ");
    for (i = 0; i < 8; i++) {
        printf("%c ", i + 97);
    }
printf("\n");

}


