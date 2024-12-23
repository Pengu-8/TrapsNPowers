//
// Created by 123ye on 20/12/2024.
//

#ifndef TRAP_H
#define TRAP_H
#include <iostream>
#include "player.h"


class Trap {
public:
    int trap = rand() % 13 + 3;
    int position = rand() % 99 + 1;
};



#endif //TRAP_H
