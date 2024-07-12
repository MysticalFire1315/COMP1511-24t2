// H15B Tutorial 04 - part1_arrays.c
//
// This program adds 1 to any odd element in an array and after prints
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {

    int array[SIZE] = {1, 2, 3, 4, 5};
    // Can also declare array of all 0 like this
    // int array[SIZE] = {0};

    int i = 0;
    while (i < SIZE) {
        if (array[i] % 2 == 0) {
            array[i] += 1;
        }
        i++;
    }

    int j = 0;
    while (j < SIZE) {
        printf("%d", array[j]);
        j++;
    }

    printf("\n");

    return 0;
}
