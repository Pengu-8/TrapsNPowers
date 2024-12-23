//
// Created by 123ye on 22/12/2024.
//

#ifndef POWER_H
#define POWER_H
#include <iostream>
#include "player.h"
#include "game.h"


class Power {
public:
    int double_pos = 2;
    int triple_pos = 3;
    int position = rand() % 99 + 1;
    int selection = rand() % 5;
    void power_move(Player player);
};



#endif //POWER_H
