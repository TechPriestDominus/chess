#include "chess_read.h"
#include <stdio.h>
#include <string.h>
extern char input[7];
extern int Y1, Y2, X1, X2;
extern char board[8][8];

void scan(int flag)
{
    while (1) {
        while (1) {
            fgets(input, 7, stdin);
            if (chartoint(input)) {
                break;
            }
            printf("Введите заново:");
        }
        if (flag == 1) {
            if (white() == 1) {
                break;
            } else {
                printf("Введите заново:");
            }
        }
        if (flag == 2) {
            if (black() == 1) {
                break;
            } else {
                printf("Введите заново:");
            }
        }
    }
}

int chartoint(char input[7])
{
    X1 = (int)input[0] - 'A';
    Y1 = (int)input[1] - '1';
    X2 = (int)input[2] - 'A';
    Y2 = (int)input[3] - '1';
    if ((X2 < 8) && (X2 >= 0) && (Y2 >= 0) && (Y2 < 8) && (X1 >= 0) && (X1 < 8)
        && (Y1 >= 0) && (Y1 < 8)) {
        return 1;
    }
    return 0;
}
