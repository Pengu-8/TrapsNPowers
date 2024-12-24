//
// Created by 123ye on 20/12/2024.
//
// #pragma once
#ifndef BOARD_H
#define BOARD_H
#include <list>
#include "trap.h"
#include "power.h"
#include "player.h"

class Board {
public:
    int no_trap;
    int no_power;
    std::list<Trap> trap_location;
    std::list<Power> power_location;
    Board (int trap_numbers, int power_numbers);
};



#endif //BOARD_H
