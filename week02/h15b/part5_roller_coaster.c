// H15B Tutorial 02 - part5_roller_coaster.c
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less,
//    it should print an error message
//
// 3. If the height is below the minimum height,
//    it should print a message telling the user they are not tall enough to ride
//
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold,
//    it should print a message telling the user they can ride.

#include <stdio.h>

#define MIN_HEIGHT 100
#define THRESHOLD 160

int main(void) {
    // 1. Scans in the users height.
    int height;
    printf("Please enter the user's height: ");
    scanf("%d", &height);

    if (height <= 0) {
        // 2. If the height is 0 or less,
        //    it should print an error message
        printf("Error: height cannot be 0 or less!\n");
    } else if (height < MIN_HEIGHT) {
        // 3. If the height is below the minimum height,
        //    it should print a message telling the user they are not tall enough to ride
        printf("Error: your height is not tall enough to ride!\n");
    } else if (height < THRESHOLD) {
        // 4. If the height is above the minimum but below the ride alone threshold,
        //    it should print a message telling the user they can ride with an adult
        printf("You can ride with an adult!\n");
    } else {
        // 5. If the height is or is above the ride alone threshold,
        //    it should print a message telling the user they can ride.
        printf("You can ride alone!\n");
    }

    return 0;
}
