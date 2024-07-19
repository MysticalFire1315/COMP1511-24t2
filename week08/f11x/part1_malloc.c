// F11X Tutorial 08 - part1_malloc.c
//
// This program is a simple demonstration of malloc and free.

#include <stdio.h>
#include <stdlib.h>

struct person {
    int age;
    double height;
};

struct parents {
    struct person mum;
    struct person dad;
};

int main(void) {
    // How much memory is needed for an int vs a double and char?
    printf("sizeof(int) = %lu\n", sizeof(int));
    printf("sizeof(double) = %lu\n", sizeof(double));
    printf("sizeof(char) = %lu\n", sizeof(char));

    // malloc int
    int *a = malloc(sizeof(int));

    // Declaring array normally
    int array[5] = {0};
    // Can also use this to access array
    int *ptr_array = array;
    printf("array[0] == ptr_array[0] is %d\n", array[0] == ptr_array[0]);

    // malloc array
    int *marray = malloc(sizeof(int) * 5);
    // initialize everything to 0
    int i = 0;
    while (i < 5) {
        marray[i] = 0;
        i++;
    }

    // malloc struct
    struct parents *f = malloc(sizeof(struct parents));
    f->mum.age = 32;

    return 0;
}

int *create_42(void) {
    // This breaks because `num` gets deleted after this function,
    // so you end up with a pointer to something deleted
    // int num = 42;
    // return &num;

    int *num = malloc(sizeof(int));
    *num = 42;
    return num;
}