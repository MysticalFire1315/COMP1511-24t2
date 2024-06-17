// F11X Tutorial 03 - part3_scanning_and_loops.c
//
// This program is a simple demonstration of using scanf in loops

#include <stdio.h>

int main(void) {
    int num = 0;

    // Calculating the sum of all numbers entered by the user until a negative
    // number is entered

    // int sum = 0;
    // scanf("%d", &num);
    // while (num >= 0) {
    //     sum += num;
    //     scanf("%d", &num);
    // }
    // printf("The sum is %d\n", sum);


    // Two ways of scanning until Ctrl+D

    // int scanf_return = scanf("%d", &num);
    // while (scanf_return == 1) {
    //     printf("The number scanned is %d\n", num);
    //     scanf_return = scanf("%d", &num);
    // }

    while (scanf("%d", &num) == 1) {
        printf("The number scanned is %d\n", num);
    }

    return 0;
}
