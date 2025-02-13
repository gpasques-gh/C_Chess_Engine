#include "functions.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    Game game;
    game_init(&game);
    board_printing(&game);
    int square1[2] = {0 ,0};
    int square2[2] = {2, 4};
    move_temp(square1, square2, &game);
    board_printing(&game);
    return 0;
}
