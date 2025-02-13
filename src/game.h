#include "defs.h"

// Game struct
typedef struct game {
    // variables
    int** board_array;
    int w_pieces_left;
    int b_pieces_left;
    char turn; // 'b' for black 'w' for white
    // booleans
    int w_check;
    int b_check;
    int w_k_castle_available;
    int w_r_A_castle_available;
    int w_r_B_castle_available;
    int b_k_castle_available;
    int b_r_A_castle_available;
    int b_r_B_castle_available;
    int mate;
    // move variables
    char *str_move;
    int move[2];
} Game;