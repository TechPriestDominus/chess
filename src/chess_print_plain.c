#include <stdio.h>
#include <chess_print_plain.c>

void chesspp (char *board) {
    int i,j;
    for(i=0;i<8;i++) {
        printf("%d ", 8-i);
        for(j=0;j<8;j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("  a b c d e f g h");
    return 0;
}


