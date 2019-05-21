
#include "chess.h"
#include "chess_print_plain.h"
#include "chess_read.h"
#include <stdio.h>

char input[7];
int X1, X2, Y1, Y2;
char board[8][8] = {{'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R'},
                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};

int main()
{
    int status = 0;

    printboard();

    while (1) {
        printf("Белые:");
        scan(1);
        move();
        printboard();
        status = checkWIn(1);
        if (status != 0) {
            break;
        }

        printf("Черные:");
        scan(2);
        move();
        printboard();
        status = checkWIn(2);
        if (status != 0) {
            break;
        }
    }

    printf("                          Player %d win\n", status);

    return 0;
}
