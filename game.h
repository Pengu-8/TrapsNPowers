//
// Created by 123ye on 20/12/2024.
//

#ifndef GAME_H
#define GAME_H
#include <list>
#include "board.h"
#include "player.h"
#include "power.h"

class Game {
    std::list<Player> player_list;
    bool winner = false;
    Board board = Board(10,10);
    bool trap_hit = true;
    Player current_player = player_list.front();
public:
    Game();
    void ask_players();
    void play_game();
    void check_board();
    void roll_dice();
};



#endif //GAME_H
