// F11X Tutorial 04 - copy_array.c
//
// This is a demonstration of copying an array.

#include <stdio.h>

#define SIZE_ONE 3
#define SIZE_TWO 10

int main(void) {
    // TODO:
    // - Create an array of doubles with 3 elements,
    // each with a non-zero value.
    double array_one[SIZE_ONE] = {1.1, 2.2 , 3.3};

    // - Create another array of doubles with 10 elements
    // where every element is initialized to 0.0.
    double array_two[SIZE_TWO] = {0.0};

    // - Create a while loop that loops through every element
    // of the first array.
    int i = 0;
    while (i < SIZE_ONE) {
        // - Copy the elements of the first array into the second
        // array (leave 0's at the end)
        array_two[i] = array_one[i];
        i++;
    }

    // - Create a while loop that prints out all the elements
    // of the second array.
    int j = 0;
    while (j < SIZE_TWO) {
        printf("%.2lf ", array_two[j]);
        j++;
    }
    printf("\n");

    return 0;
}
