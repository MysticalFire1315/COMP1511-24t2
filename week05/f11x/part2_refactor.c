// F11X Tutorial 05 - part1_galaxy.c
//
// This is the refactored version of part1_galaxy.c

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

#define QUIT 'q'
#define PLANET_COMMAND 'p'
#define NEBULA_COMMAND 'n'

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

struct coord {
    int row;
    int col;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);
void initialize_galaxy(struct celestial_body galaxy[SIZE][SIZE]);
void place_planets_and_nebula(struct celestial_body galaxy[SIZE][SIZE]);
struct coord place_player(struct celestial_body galaxy[SIZE][SIZE]);
void place_stars(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy
    initialize_galaxy(galaxy);

    // TODO: Place the planets and nebulae in the galaxy
    place_planets_and_nebula(galaxy);

    // TODO: Place the player in the galaxy
    printf("Enter the starting position of the player: ");
    struct coord player_pos = place_player(galaxy);

    // TODO: Place the stars in the galaxy
    printf("Enter the position and points of the star(s):\n");
    place_stars(galaxy);

    // TODO: Print the map
    print_map(galaxy);

    printf("Player is at (%d, %d)\n", player_pos.row, player_pos.col);

    return 0;
}

// Function prints the map of the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}

void initialize_galaxy(struct celestial_body galaxy[SIZE][SIZE]) {
    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;

            j++;
        }
        i++;
    }
}

void place_planets_and_nebula(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter planets and nebulae:\n");
    char input;
    scanf(" %c", &input);
    while (input != QUIT) {
        struct coord position;
        scanf("%d %d", &position.row, &position.col);
        if (input == PLANET_COMMAND) {
            int points;
            scanf("%d", &points);
            galaxy[position.row][position.col].entity = PLANET;
            galaxy[position.row][position.col].points = points;
        } else if (input == NEBULA_COMMAND) {
            galaxy[position.row][position.col].entity = NEBULA;
        }

        scanf(" %c", &input);
    }
}

struct coord place_player(struct celestial_body galaxy[SIZE][SIZE]) {
    struct coord player_pos;
    scanf("%d %d", &player_pos.row, &player_pos.col);
    while (galaxy[player_pos.row][player_pos.col].entity != EMPTY) {
        printf("Invalid starting position!\n");
        printf("Re-enter starting position: ");
        scanf("%d %d", &player_pos.row, &player_pos.col);
    }
    galaxy[player_pos.row][player_pos.col].entity = SPACESHIP;
    return player_pos;
}

void place_stars(struct celestial_body galaxy[SIZE][SIZE]) {
    struct coord position;
    int points;
    while (scanf("%d %d %d", &position.row, &position.col, &points) == 3) {
        galaxy[position.row][position.col].entity = STAR;
        galaxy[position.row][position.col].points = points;
    }

    // Same as above
    // int scanf_return = scanf("%d %d %d", &position.row, &position.col, &points);
    // while (scanf_return == 3) {
    //     galaxy[position.row][position.col].entity = STAR;
    //     galaxy[position.row][position.col].points = points;
    //     scanf_return = scanf("%d %d %d", &position.row, &position.col, &points);
    // }
}
