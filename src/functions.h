#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "defs.h"
#include "game.h"


void game_init(Game* game)
{
    game->board_array = (int **)malloc(sizeof(int *) * ROWS);
    for (int rows = 0; rows < ROWS; rows++)
    {
        game->board_array[rows] = (int *)malloc(sizeof(int) * COLS);
    }

    int board_array_temp[ROWS][COLS] = {
        {b_r_A, b_n, b_b, b_q, b_k, b_b, b_n, b_r_B},
        {b_p, b_p, b_p, b_p, b_p, b_p, b_p, b_p,},
        {EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY},
        {EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY},
        {EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY},
        {EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY,EMPTY},
        {w_p, w_p, w_p, w_p, w_p, w_p, w_p, w_p},
        {w_r_A, w_n, w_b, w_q, w_k, w_b, w_n, w_r_B}
    };

    for (int rows = 0; rows < ROWS; rows++)
    {
        for (int cols = 0; cols < COLS; cols++)
        {
            game->board_array[rows][cols] = board_array_temp[rows][cols];
        }
    }

    game->turn = 'w';

    // booleans
    game->w_k_castle_available = 1;
    game->w_r_A_castle_available = 1;
    game->w_r_B_castle_available = 1;
    game->b_k_castle_available = 1;
    game->b_r_A_castle_available = 1;
    game->b_r_B_castle_available = 1;
    game->mate = 0;
    game->w_check = 0;
    game->b_check = 0;

    // move
    game->move[0] = 0;
    game->move[1] = 0;
    game->str_move = NULL;
}

void board_printing(Game* game)
{



    if (game->board_array == NULL)
    {
        printf("Something went wrong, the board is NULL.\n");
        exit(EXIT_FAILURE);
    }

    for (int rows = 0; rows < ROWS; rows++)
    {
        if (rows == 0)
        {
            printf("%s", TOP_ROW_CHARS);
        }
        
        for (int cols = 0; cols < COLS; cols++)
        {
            if (cols == 0)
            {
                printf("║");
            }

            switch (game->board_array[rows][cols])
            {
                case EMPTY:
                    printf("%s", EMPTY_SQUARE_CHARS);
                    break;
                case w_p:
                    printf("[%s ]", w_p_CHAR);
                    break;
                case w_r_A:
                case w_r_B:
                    printf("[%s ]", w_r_CHAR);
                    break;
                case w_n:
                    printf("[%s ]", w_n_CHAR);
                    break;
                case w_b:
                    printf("[%s ]", w_b_CHAR);
                    break;
                case w_q:
                    printf("[%s ]", w_q_CHAR);
                    break;
                case w_k:
                    printf("[%s ]", w_k_CHAR);
                    break;
                case b_p:
                    printf("[%s ]", b_p_CHAR);
                    break;
                case b_r_A:
                case b_r_B:
                    printf("[%s ]", b_r_CHAR);
                    break;
                case b_n:
                    printf("[%s ]", b_n_CHAR);
                    break;
                case b_b:
                    printf("[%s ]", b_b_CHAR);
                    break;
                case b_q:
                    printf("[%s ]", b_q_CHAR);
                    break;
                case b_k:
                    printf("[%s ]", b_k_CHAR);
                    break;
                default:
                    break;
            }

            if (cols == COLS - 1)
            {
                printf("║\n");
            }
        }

        if (rows == ROWS - 1)
        {
            printf("%s", BOTTOM_ROW_CHARS);
        }
    }
}

