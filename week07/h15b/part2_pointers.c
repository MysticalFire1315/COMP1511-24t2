// H15B Tutorial 07 - part2_pointers.c
//
// This program uses pointers to halve three numbers

#include <stdio.h>

struct three_numbers {
    int num_1;
    int num_2;
    int num_3;
};

void halve_values(int *num_1, int *num_2, int *num_3);
struct three_numbers halve_values_return(int num_1, int num_2, int num_3);

int main(void) {
    int num_1 = 4;
    int num_2 = 10;
    int num_3 = 16;

    printf("Values before halved:\n");
    printf("Num 1: %d\n", num_1);
    printf("Num 2: %d\n", num_2);
    printf("Num 3: %d\n", num_3);

    // struct three_numbers updated = halve_values_return(num_1, num_2, num_3);
    // num_1 = updated.num_1;
    // num_2 = updated.num_2;
    // num_3 = updated.num_3;

    // Alternatively, use pointers!
    halve_values(&num_1, &num_2, &num_3);

    printf("Values after halved:\n");
    printf("Num 1: %d\n", num_1);
    printf("Num 2: %d\n", num_2);
    printf("Num 3: %d\n", num_3);

    return 0;
}

void halve_values(int *num_1, int *num_2, int *num_3) {
    *num_1 = *num_1 / 2;
    *num_2 = *num_2 / 2;
    *num_3 = *num_3 / 2;
}

struct three_numbers halve_values_return(int num_1, int num_2, int num_3) {
    // struct three_numbers output;
    // output.num_1 = num_1 / 2;
    // output.num_2 = num_2 / 2;
    // output.num_3 = num_3 / 2;

    // Can also initialize values at declaration like this
    struct three_numbers output = {
        num_1 = num_1 / 2,
        num_2 = num_2 / 2,
        num_3 = num_3 / 2
    };

    return output;
}
