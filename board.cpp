//
// Created by 123ye on 20/12/2024.
//

#include "board.h"

Board::Board(int tile_numbers): no_trap(tile_numbers) {
    for (int i = 0; i < tile_numbers; i++) {
        trap_location.push_back(Trap());
        power_location.push_back(Power());
    }
    std::cout << "traps"<< std::endl;
    for (Trap traps : trap_location) {
        std::cout << traps.position << std::endl;
    }
    std::cout << "powers"<< std::endl;
    for (Power powers : power_location) {
        std::cout << powers.position << std::endl;
    }
}