//
// Created by 123ye on 22/12/2024.
//

#include "power.h"

void Power::power_move(Player player, int dice_roll) {
    switch(selection) {
        case 0:
            player.position += dice_roll;
        case 1:
            player.position += dice_roll * triple_dice;
        case 2:
            std::cout <<"case 2" << std::endl;
        case 3:
            std::cout << "case 3" << std::endl;
    }
}