#include <stdio.h>
#include <string.h>
extern vhar board[8][8]
extern int x1, x2, y1, y2;
void scanan()
{
char xx, xx1;
int yy, yy1;
while (1) {
        for (int flag = 0; flag != 4;) {
            flag = 0;
            scanf("%c %d %c %d", &xx, &yy, &xx1, &yy1);
            board(xx, yy, xx1, yy1);
            if (xx == 'a') {
                x1 = 1;
                flag++;
            }
            if (xx == 'b') {
                x1 = 2;
                flag++;
            }
            if (xx == 'c') {
                x1 = 3;
                flag++;
            }
            if (xx == 'd') {
                x1 = 4;
                flag++;
            }
            if (xx == 'e') {
                x1 = 5;
                flag++;
            }
            if (xx == 'f') {
                x1 = 6;
                flag++;
            }
            if (xx == 'g') {
                x1 = 7;
                flag++;
            }
            if (xx == 'h') {
                x1 = 8;
                flag++;
            }

            if (yy == 1) {
                y1 = 8;
                flag++;
            }
            if (yy == 2) {
                y1 = 7;
                flag++;
            }
            if (yy == 3) {
                y1 = 6;
                flag++;
            }
            if (yy == 4) {
                y1 = 5;
                flag++;
            }
            if (yy == 5) {
                y1 = 4;
                flag++;
            }
            if (yy == 6) {
                y1 = 3;
                flag++;
            }
            if (yy == 7) {
                y1 = 2;
                flag++;
            }
            if (yy == 8) {
                y1 = 1;
                flag++;
            }

            if (xx1 == 'a') {
                x2 = 1;
                flag++;
            }
            if (xx1 == 'b') {
                x2 = 2;
                flag++;
            }
            if (xx1 == 'c') {
                x2 = 3;
                flag++;
            }
            if (xx1 == 'd') {
                x2 = 4;
                flag++;
            }
            if (xx1 == 'e') {
                x2 = 5;
                flag++;
            }
            if (xx1 == 'f') {
                x2 = 6;
                flag++;
            }
            if (xx1 == 'g') {
                x2 = 7;
                flag++;
            }
            if (xx1 == 'h') {
                x2 = 8;
                flag++;
            }

            if (yy1 == 1) {
                y2 = 8;
                flag++;
            }
            if (yy1 == 2) {
                y2 = 7;
                flag++;
            }
            if (yy1 == 3) {
                y2 = 6;
                flag++;
            }
            if (yy1 == 4) {
                y2 = 5;
                flag++;
            }
            if (yy1 == 5) {
                y2 = 4;
                flag++;
            }
            if (yy1 == 6) {
                y2 = 3;
                flag++;
            }
            if (yy1 == 7) {
                y2 = 2;
                flag++;
            }
            if (yy1 == 8) {
                y2 = 1;
                flag++;
            }

            if (flag != 4) {
                printf("Wrong input\n");
                return 0;
            }
	}
}

}
