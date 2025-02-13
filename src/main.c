#include "functions.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    Game game;
    game_init(&game);
    board_printing(&game);
    return 0;
}
