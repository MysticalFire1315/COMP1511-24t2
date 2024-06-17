// F11X Tutorial 03 - part2_2d_while_loops.c
//
// This program is a simple demonstration of a 2D while loop

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    printf("Start of outer loop!\n");
    int row = 0;
    while (row < MAX_ROW) {
        printf("Start of inner loop!\n");
        int col = 0;
        while (col < MAX_COL) {
            printf("Col is %d\n", col);
            col++;
        }
        printf("End of inner loop!\n");
        row++;
    }
    printf("End of outer loop!\n");
;

    return 0;
}
