// F11X Tutorial 04 - functions.c
//
// This program is a simple demonstrations of functions

#include <stdio.h>

#define PI 3.14

int calculate_area(int radius);
int bar(void);
int foo(void);

int main(void) {
    int radius1 = 1;
    int area1 = calculate_area(radius1);

    int radius2 = 2;
    int area2 = calculate_area(radius2);

    int radius3 = 4;
    int area3 = calculate_area(radius3);

    printf("%d %d %d\n", area1, area2, area3);

    return 0;
}

int calculate_area(int radius) {
    int area = radius * radius * PI;
    return area;
}

int bar(void) {
    foo();
    return 1;
}

int foo(void) {
    bar();
    return 0;
}
