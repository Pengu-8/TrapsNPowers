//
// Created by 123ye on 20/12/2024.
//

#ifndef GAME_H
#define GAME_H
#include <list>
#include <iostream>
#include "board.h"
#include "player.h"

class Game {
    std::list<Player> player_list;
    bool winner;
    Board board;
    bool tile_hit = true;
public:
    Game();
    void ask_players();
    void play_game();
    void check_board(int dice_roll, Player current_player);
};

#endif //GAME_H