//// Bataille navale simple
// Bataille navale COMPLEXE

// les bateaux sont tous de longcuer 1

// 11 points au jouer

// fabriquer une grille 4 x 4 et choisir au hasard 5 cases pour mettre les bateaux

#include "ejovo_print.h"
#include "ejovo_rand.h"
#include "battleship_game.h"
#include <time.h>


int main() {

    // create board

    srand( time (NULL) );
    ejovo_seed();

    DockingStation enemy_station = make_new_game(BOARD_SIZE);
    DockingStation player_station = make_new_game(BOARD_SIZE);

    // ai_place_ships(enemy_station.board);

    // TODO Create AI
    // TODO Add pretty introduction
    // TODO Add pretty end
    // TODO Add salvo game mode


    // place_carrier(5, 5, 'N', player_station.board);
    // place_battleship(2, 2, 'S', player_station.board);
    // place_cruiser(9, 9, 'W', player_station.board);
    // place_submarine(0, 2, 'E', player_station.board);
    // place_destroyer(7, 8, 'E', player_station.board);

    // print_full_board(enemy_station.board);


    printf("AI perspective --- \n\n");
    print_docking_station(&enemy_station, &player_station);


    print_docking_station(&player_station, &enemy_station);

    play_game(&player_station, &enemy_station);

    return 0;
}