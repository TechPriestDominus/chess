#include "../src/chess.h"
#include "../src/chess_print_plain.h"
#include "../thirdparty/ctest.h"
#include "../src/chess_read.h"
#include <stdio.h>
#include <string.h>

int status = 0, i, j;
int X1, X2, Y1, Y2;
char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};
char input[7];

CTEST(moving, movepawn)
{
    strcpy(input, "E2E3");
    chartoint(input);
    board[Y1][X1] = 'P';
    int c1 = white();

    strcpy(input, "E2E4"); 
    chartoint(input);
    int c2 = white();

    board[Y1][X1] = ' ';

    board[Y1][X1] = ' ';
    board[Y1 + 1][X1] = ' ';

    const int exp1 = 1;
    const int exp2 = 1;

    ASSERT_EQUAL(exp1, c1);
    ASSERT_EQUAL(exp2, c2);
}

CTEST(moving, movequeen)
{
    strcpy(input, "D4D7");
    chartoint(input);
    board[Y1][X1] = 'Q';
    int c1 = white();

    strcpy(input, "D4D1");
    chartoint(input);
    int c2 = white();

    strcpy(input, "D4A4");
    chartoint(input);
    int c3 = white();

    strcpy(input, "D4G4");
    chartoint(input);
    int c4 = white();

    strcpy(input, "D4G7");
    chartoint(input);
    int c5 = white();

    strcpy(input, "D4A7");
    chartoint(input);
    int c6 = white();

    strcpy(input, "D4A1");
    chartoint(input);
    int c7 = white();

    strcpy(input, "D4G1");
    chartoint(input);
    board[Y2][X2] = 'p';
    int c8 = white();

    board[Y2][X2] = ' ';

    strcpy(input, "D4G7");
    chartoint(input);
    board[Y2 - 1][X2 - 1] = 'p';
    int c9 = white();

    board[Y2 - 1][X2 - 1] = ' ';

    strcpy(input, "D4F7");
    chartoint(input);
    int c10 = white();

    board[Y1][X1] = ' ';

    const int exp1 = 1;
    const int exp2 = 1;
    const int exp3 = 1;
    const int exp4 = 1;
    const int exp5 = 1;
    const int exp6 = 1;
    const int exp7 = 1;
    const int exp8 = 1;
    const int exp9 = 0;
    const int exp10 = 0;

    ASSERT_EQUAL(exp1, c1);
    ASSERT_EQUAL(exp2, c2);
    ASSERT_EQUAL(exp3, c3);
    ASSERT_EQUAL(exp4, c4);
    ASSERT_EQUAL(exp5, c5);
    ASSERT_EQUAL(exp6, c6);
    ASSERT_EQUAL(exp7, c7);
    ASSERT_EQUAL(exp8, c8);
    ASSERT_EQUAL(exp9, c9);
    ASSERT_EQUAL(exp10, c10);
}

CTEST(moving, movepawn2)
{
    strcpy(input, "E3E5");
    chartoint(input);
    board[Y1][X1] = 'P';
    int c3 = white();

    strcpy(input, "E3F4");
    chartoint(input);
    int c4 = white();

    strcpy(input, "E3E2");
    chartoint(input);
    int c5 = white();

    strcpy(input, "E3F4");
    chartoint(input);
    board[Y2][X2] = 'p';
    int c6 = white();

    board[Y2][X2] = ' ';
    board[Y1][X1] = ' ';

    strcpy(input, "E2E4");
    chartoint(input);
    board[Y1][X1] = 'P';
    board[Y1 + 1][X1] = 'p';
    int c7 = white();

    board[Y1][X1] = ' ';
    board[Y1 + 1][X1] = ' ';

    const int exp3 = 0;
    const int exp4 = 0;
    const int exp5 = 0;
    const int exp6 = 1;
    const int exp7 = 0;

    ASSERT_EQUAL(exp3, c3);
    ASSERT_EQUAL(exp4, c4);
    ASSERT_EQUAL(exp5, c5);
    ASSERT_EQUAL(exp6, c6);
    ASSERT_EQUAL(exp7, c7);
}

CTEST(moving, moverook)
{
    strcpy(input, "D4D7");
    chartoint(input);
    board[Y1][X1] = 'R';
    int c1 = white();

    strcpy(input, "D4D2");
    chartoint(input);
    int c2 = white();

    strcpy(input, "D4F4");
    chartoint(input);
    int c3 = white();

    strcpy(input, "D4B4");
    chartoint(input);
    int c4 = white();

    strcpy(input, "D4F6");
    chartoint(input);
    int c5 = white();

    strcpy(input, "D4D5");
    chartoint(input);
    board[Y2][X2] = 'r';
    int c6 = white();

    strcpy(input, "D4D6");
    chartoint(input);
    int c7 = white();

    board[Y1][X1] = ' ';
    board[Y2 - 1][X2] = ' ';

    const int exp1 = 1;
    const int exp2 = 1;
    const int exp3 = 1;
    const int exp4 = 1;
    const int exp5 = 0;
    const int exp6 = 1;
    const int exp7 = 0;

    ASSERT_EQUAL(exp1, c1);
    ASSERT_EQUAL(exp2, c2);
    ASSERT_EQUAL(exp3, c3);
    ASSERT_EQUAL(exp4, c4);
    ASSERT_EQUAL(exp5, c5);
    ASSERT_EQUAL(exp6, c6);
    ASSERT_EQUAL(exp7, c7);
}

CTEST(moving, moveknight)
{
    strcpy(input, "D4D7");
    chartoint(input);
    board[Y1][X1] = 'N';
    int c1 = white();

    strcpy(input, "D4D2");
    chartoint(input);
    int c2 = white();

    strcpy(input, "D4F4");
    chartoint(input);
    int c3 = white();

    strcpy(input, "D4B4");
    chartoint(input);
    int c4 = white();

    strcpy(input, "D4F6");
    chartoint(input);
    int c5 = white();

    strcpy(input, "D4C6");
    chartoint(input);
    int c61 = white();

    strcpy(input, "D4E6");
    chartoint(input);
    int c62 = white();

    strcpy(input, "D4F5");
    chartoint(input);
    int c63 = white();

    strcpy(input, "D4F3");
    chartoint(input);
    int c64 = white();

    strcpy(input, "D4E2");
    chartoint(input);
    int c65 = white();

    strcpy(input, "D4C2");
    chartoint(input);
    int c66 = white();

    strcpy(input, "D4B5");
    chartoint(input);
    int c67 = white();

    strcpy(input, "D4B3");
    chartoint(input);
    int c68 = white();

    strcpy(input, "D4E6");
    chartoint(input);
    board[X1 + 1][Y1] = 'p';
    board[Y2][X2] = 'n';
    int c7 = white();

    board[Y1][X1] = ' ';
    board[X1 + 1][Y1] = ' ';
    board[Y2][X2] = ' ';

    const int exp1 = 0;
    const int exp2 = 0;
    const int exp3 = 0;
    const int exp4 = 0;
    const int exp5 = 0;
    const int exp61 = 1;
    const int exp62 = 1;
    const int exp63 = 1;
    const int exp64 = 1;
    const int exp65 = 1;
    const int exp66 = 1;
    const int exp67 = 1;
    const int exp68 = 1;
    const int exp7 = 1;

    ASSERT_EQUAL(exp1, c1);
    ASSERT_EQUAL(exp2, c2);
    ASSERT_EQUAL(exp3, c3);
    ASSERT_EQUAL(exp4, c4);
    ASSERT_EQUAL(exp5, c5);
    ASSERT_EQUAL(exp61, c61);
    ASSERT_EQUAL(exp62, c62);
    ASSERT_EQUAL(exp63, c63);
    ASSERT_EQUAL(exp64, c64);
    ASSERT_EQUAL(exp65, c65);
    ASSERT_EQUAL(exp66, c66);
    ASSERT_EQUAL(exp67, c67);
    ASSERT_EQUAL(exp68, c68);
    ASSERT_EQUAL(exp7, c7);
}

CTEST(moving, movebishop)
{
    strcpy(input, "D4D7");
    chartoint(input);
    board[Y1][X1] = 'B';
    int c1 = white();

    strcpy(input, "D4D2");
    chartoint(input);
    int c2 = white();

    strcpy(input, "D4F4");
    chartoint(input);
    int c3 = white();

    strcpy(input, "D4B4");
    chartoint(input);
    int c4 = white();

    strcpy(input, "D4F6");
    chartoint(input);
    int c51 = white();

    strcpy(input, "D4B6");
    chartoint(input);
    int c52 = white();

    strcpy(input, "D4F2");
    chartoint(input);
    int c53 = white();

    strcpy(input, "D4B2");
    chartoint(input);
    board[Y2][X2] = 'p';
    int c54 = white();

    board[Y2][X2] = ' ';

    strcpy(input, "D4F6");
    chartoint(input);
    board[Y2 - 1][X2 - 1] = 'p';
    int c6 = white();

    board[Y1][X1] = ' ';
    board[Y2 - 1][X2 - 1] = ' ';

    const int exp1 = 0;
    const int exp2 = 0;
    const int exp3 = 0;
    const int exp4 = 0;
    const int exp51 = 1;
    const int exp52 = 1;
    const int exp53 = 1;
    const int exp54 = 1;
    const int exp6 = 0;

    ASSERT_EQUAL(exp1, c1);
    ASSERT_EQUAL(exp2, c2);
    ASSERT_EQUAL(exp3, c3);
    ASSERT_EQUAL(exp4, c4);
    ASSERT_EQUAL(exp51, c51);
    ASSERT_EQUAL(exp52, c52);
    ASSERT_EQUAL(exp53, c53);
    ASSERT_EQUAL(exp54, c54);
    ASSERT_EQUAL(exp6, c6);
}

CTEST(moving, moveking)
{
    strcpy(input, "D4D5");
    chartoint(input);
    board[Y1][X1] = 'K';
    int c1 = white();

    strcpy(input, "D4D3");
    chartoint(input);
    int c2 = white();

    strcpy(input, "D4C4");
    chartoint(input);
    int c3 = white();

    strcpy(input, "D4E4");
    chartoint(input);
    int c4 = white();

    strcpy(input, "D4E5");
    chartoint(input);
    int c5 = white();

    strcpy(input, "D4C5");
    chartoint(input);
    int c6 = white();

    strcpy(input, "D4E3");
    chartoint(input);
    int c7 = white();

    strcpy(input, "D4C3");
    chartoint(input);
    board[Y2][X2] = 'p';
    int c8 = white();

    board[Y2][X2] = ' ';

    strcpy(input, "D4D6");
    chartoint(input);
    int c9 = white();

    strcpy(input, "D4D2");
    chartoint(input);
    int c10 = white();

    board[Y1][X1] = ' ';

    const int exp1 = 1;
    const int exp2 = 1;
    const int exp3 = 1;
    const int exp4 = 1;
    const int exp5 = 1;
    const int exp6 = 1;
    const int exp7 = 1;
    const int exp8 = 1;
    const int exp9 = 0;
    const int exp10 = 0;

    ASSERT_EQUAL(exp1, c1);
    ASSERT_EQUAL(exp2, c2);
    ASSERT_EQUAL(exp3, c3);
    ASSERT_EQUAL(exp4, c4);
    ASSERT_EQUAL(exp5, c5);
    ASSERT_EQUAL(exp6, c6);
    ASSERT_EQUAL(exp7, c7);
    ASSERT_EQUAL(exp8, c8);
    ASSERT_EQUAL(exp9, c9);
    ASSERT_EQUAL(exp10, c10);
}

CTEST(inputdata, chartointer)
{
    strcpy(input, "E2E4");
    int c3 = chartoint(input);

    strcpy(input, "E2E9");
    int c4 = chartoint(input);

    strcpy(input, "hello!");
    int c5 = chartoint(input);

    const int exp3 = 1;
    const int exp4 = 0;
    const int exp5 = 0;

    ASSERT_EQUAL(exp3, c3);
    ASSERT_EQUAL(exp4, c4);
    ASSERT_EQUAL(exp5, c5);
}

