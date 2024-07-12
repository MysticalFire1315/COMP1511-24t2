// F11X Tutorial 07 - part4_command_line_args.c
//
// This program counts the number of command line arguments and prints them

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments is %d\n", argc);
    printf("Name of program is %s\n", argv[0]);

    int i = 1;
    while (i < argc) {
        printf("argv[%d] = %s\n", i, argv[i]);
        i++;
    }

    return 0;
}
