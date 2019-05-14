#include <stdio.h>
#include <string.h>
#include <chess.h>

extern int y1, y2, x1, x2;
extern char board[8][8];

void move() {
  board[y2][x2] = board[y1][x1];
  board[y1][x1] = ' ';
}

int white() {
	if ((board[y2][x2] > 'A') && (board[y2][x2] < 'S')) {
    		return 0;
	}
	if (A[y1][x1] == 'p') // pawns
	{
		if ((board[y2][x2] == ' ') && (x1 == x2) && (y2 - y1 > 0) &&
        		(y2 - y1 < 3) {
			return 1;
		}
	}
    		if ((board[y2][x1] < 's' && board[y2][x2] > 'a') &&
        	((x2 - x1 == 1) || (x2 - x1 == -1)) && (y2 - y1 == 1)) {
			return 1;
		}
	}
}

int black() {
        if ((board[y2][x2] > 'a') && (board[y2][x2] < 's')) {
                return 0;
        }
        if (A[y1][x1] == 'P') // pawns
        {
                if ((board[y2][x2] == ' ') && (x1 == x2) && (y1 - y2 > 0) &&
                        (y1 - y2 < 3) {
                        return 1;
                }
        }
                if ((board[y2][x1] < 'S' && board[y2][x2] > 'A') &&
                ((x1 - x2 == 1) || (x1 - x2 == -1)) && (y1 - y2 == 1)) {
                        return 1;
                }
        }
}
