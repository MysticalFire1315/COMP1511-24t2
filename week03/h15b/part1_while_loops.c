// H15B Tutorial 03 - part1_while_loops.c
//
// This program is a simple demonstration of a count loop in c

#include <stdio.h>

int main(void) {
    // TODO: Write a loop that counts from 0 to 10
    printf("Start of loop!\n");
    int x = 0;
    while (x < 10) {
        printf("Value of x is %d\n", x);
        // x = x + 1;
        // x += 1;
        x++;
    }
    printf("End of loop!\n");

    return 0;
}
