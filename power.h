//
// Created by 123ye on 22/12/2024.
//

#ifndef POWER_H
#define POWER_H
#include <iostream>
#include "player.h"

class Power {
public:
    int triple_dice = 2;
    int position = rand() % 99 + 1;
    int selection = rand() % 2;
    void power_move(Player player, int dice_roll);
};



#endif //POWER_H