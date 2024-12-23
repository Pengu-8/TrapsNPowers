//
// Created by 123ye on 20/12/2024.
//

#include "board.h"

Board::Board(int trap_numbers, int power_numbers): no_trap(trap_numbers),no_power(power_numbers) {
    for (int i = 0; i < trap_numbers; i++) {
        trap_location.push_back(Trap());
    }

    for (int i = 0; i < power_numbers; i++) {
        power_location.push_back(Power());
    }


    for (Trap traps : trap_location) {
        std::cout << traps.position << std::endl;
    }

    for (Power powers : power_location) {
        std::cout << powers.position << std::endl;
    }
}