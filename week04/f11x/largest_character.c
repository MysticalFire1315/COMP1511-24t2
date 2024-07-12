// F11X Tutorial 04 - largest_character.c
//
// This is a example of looping through an array.

#include <stdio.h>

#define SIZE 8

int main(void) {
    // TODO:
    // - Create a character array with exactly 8 elements
    char array[SIZE] = {'#', '5', 'A', 'B', '2', '9', 'c', 'D'};

    // - Create a character variable called largest_character,
    // equal to the first character of the array.
    char largest_character = array[0];

    // - Create a while loop to loop through the character array
    int i = 0;
    while (i < SIZE) {
        // - Create an if statement to check if the current character
        // has a higher ascii value than "largest_character"
        if (array[i] > largest_character) {
            largest_character = array[i];
        }

        i++;
    }

    // - Print out the largest character you've found.
    printf("Largest character is %c\n", largest_character);

    return 0;
}
