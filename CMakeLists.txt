cmake_minimum_required(VERSION 3.29)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 main.cpp
        player.cpp
        player.h
        board.cpp
        board.h
        trap.cpp
        trap.h
        game.cpp
        game.h
        power.cpp
        power.h
)
