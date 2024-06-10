// H15B Tutorial 02 - part1_variables.c
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14

int main(void) {
    // 1. Declare the variables
    int radius;

    // 2. Initalise the variables
    radius = 3;

    // 3. Calculate the area of the circle
    double area = radius * radius * PI;

    double circumference = 2 * radius * PI;

    // 4. Print the result
    printf("The area of a circle with radius %d is %.2lf\n", radius, area);

    return 0;
}
