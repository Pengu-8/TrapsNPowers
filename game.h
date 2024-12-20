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
    bool winner = false;
    Board board = Board(5);
public:
    Game();
    void ask_players();
    void play_game();
};



#endif //GAME_H
