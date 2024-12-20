//
// Created by 123ye on 20/12/2024.
//

#ifndef BOARD_H
#define BOARD_H
#include <list>
#include "trap.h"

class Board {
public:
    int no_trap;
    std::list<Trap> trap_location;
    Board (int trap_numbers);
};



#endif //BOARD_H
