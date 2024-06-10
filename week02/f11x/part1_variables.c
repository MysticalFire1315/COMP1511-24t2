// F11X Tutorial 02 - part1_variables.c
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14159

int main(void) {
    // 1. Declare the variables
    int radius;

    // 2. Initalise the variables
    radius = 3;

    // 3. Calculate the area of the circle
    double area = radius * radius * PI;

    // 4. Print the result
    printf("The area of a circle with radius %d is %.2lf\n", radius, area);
    printf(
        "The circumference of a circle with radius %d is %lf\n",
        radius,
        2 * radius * PI
    );

    return 0;
}
