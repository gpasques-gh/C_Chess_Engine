#include "functions.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    Game game;
    game_init(&game);
    board_printing(&game);
    int square_a[2] = {0, 0};
    int square_b[2] = {0, 0};

    while (!game.mate)
    {
        if (game.turn == 'w')
        {
            printf("White to move :\n");
        }
        else if (game.turn == 'b')
        {
            printf("Black to move :\n");
        }

        printf("Row of the piece to move : ");
        scanf("%d", &square_a[0]);
        printf("Column of the piece to move : ");
        scanf("%d", &square_a[1]);
        printf("Row of the square to move on : ");
        scanf("%d", &square_b[0]);
        printf("Column of the square to move on : ");
        scanf("%d", &square_b[1]);

        move_piece(square_a, square_b, &game);
        board_printing(&game);
    }

    return 0;
}
