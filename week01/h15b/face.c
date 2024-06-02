// H15B Tutorial 01 - face.c
//
// The program prints two simple faces
//
// Face 1:
//   ~ ~
//  0 0
//   o
//   -
//
// Face 2:
//  ~ ~
//  0 0
//   o
//  \_/

#include <stdio.h>

int main(void) {
    // Face 1:
    //  ~ ~
    //  0 0
    //   o
    //   -
    // printf("~ ~\n");
    // printf("0 0\n");
    // printf(" o \n");
    // printf(" - \n");

    // printf("~ ~\n0 0\n o \n - \n");

    printf(
        "~ ~\n"
        "0 0\n"
        " o \n"
        " - \n"
    );

    // Face 2:
    //  ~ ~
    //  0 0
    //   o
    //  \\_/

    printf(
        "~ ~\n"
        "0 0\n"
        " o \n"
        "\\\\_/\n"
    );

    // Escape sequences
    // \n - newline
    // \\ - literal \ character

    // \r - carriage return (windows)
    // \t - tab
    
    return 0;
}

