// BOARD CONSTANTS
#define ROWS 8
#define COLS 8
#define SIZE COLS * ROWS
#define W_PIECES 16
#define B_PIECES 16 

// SQUARES CONSTANTS
#define EMPTY 0
#define W_FIRST_ROW 7
#define B_FIRST_ROW 0

// WHITE PIECES
#define w_p 1
#define w_r_A 2
#define w_r_B 3
#define w_n 4
#define w_b 5
#define w_k 6
#define w_q 7

// BLACK PIECES
#define b_p 8
#define b_r_A 9
#define b_r_B 10
#define b_n 11
#define b_b 12
#define b_k 13
#define b_q 14

// MOVES
#define w_pawn_move {{1,0}, {2,0}, {1,1}, {1,-1}}
#define b_pawn_move {{-1,0}, {-2,0}, {-1,1}, {-1,-1}}
#define rook_move {{1,0}, {-1,0}, {0,1}, {0,-1}}
#define night_move {{1,-2}, {1,2}, {2,-1}, {2,1}, {-1,-2}, {-1,2}, {-2,-1}, {-2,1}}
#define bishop_move {{1,1}, {1,-1}, {-1,1}, {-1,-1}}
#define queen_move {{1,0}, {-1,0}, {0,1}, {0,-1}, {1,1}, {1,-1}, {-1,1}, {-1,-1}}
#define king_move {{1,0}, {-1,0}, {0,1}, {0,-1}, {1,1}, {1,-1}, {-1,1}, {-1,-1}}

/* CHARACTERS FOR UI */

// WHITE PIECES UNICODE
#define w_p_CHAR "♙"
#define w_r_CHAR "♖"
#define w_n_CHAR "♘"
#define w_b_CHAR "♗"
#define w_q_CHAR "♕"
#define w_k_CHAR "♔"

// BLACK PIECES UNICODE
#define b_p_CHAR "♟"
#define b_r_CHAR "♜"
#define b_n_CHAR "♞"
#define b_b_CHAR "♝"
#define b_q_CHAR "♛"
#define b_k_CHAR "♚"

// BOARD PRINTING CONSTS
#define TOP_ROW_CHARS "╔════════════════════════════════╗\n"
#define BOTTOM_ROW_CHARS "╚════════════════════════════════╝\n"
#define EMPTY_SQUARE_CHARS "[  ]"