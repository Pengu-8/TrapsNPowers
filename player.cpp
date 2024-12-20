//
// Created by 123ye on 18/12/2024.
//

#include "player.h"
#include <iostream>
#include <string>

Player::Player (std::string sname): name(sname) {
    std::cout << "Player name: " << name << std::endl;
}
