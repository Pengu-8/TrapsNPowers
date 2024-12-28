//
// Created by 123ye on 20/12/2024.
//

#ifndef BOARD_H
#define BOARD_H
#include <list>
#include "trap.h"
#include "power.h"

class Board {
public:
    int no_trap;
    std::list<Trap> trap_location;
    std::list<Power> power_location;
    Board (int tile_numbers);
};



#endif //BOARD_H