//
// Created by 123ye on 20/12/2024.
//

#include "game.h"
using namespace std;

Game::Game():board(10) {
    ask_players();
    play_game();
}
void Game::ask_players() {
    int no_players = 0;
    while (no_players < 1 || no_players > 4) {
        cout << "Enter number of players between 1-4:"<<endl;
        cin >> no_players;
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            // cout 3<< "Please enter a number between 1-4:"<<endl;
        }
        else if (no_players < 1 || no_players > 4) {
            cout << "Invalid number of players."<<endl;
        }
    }
    for (int i = 0;i < no_players;i++) {
        string name;
        cout << "Enter name for player " << i+1 << endl;
        cin >> name;
        Player player(name);
        player_list.push_back(player);
    }
}
void Game::check_board(int dice_roll, Player current_player) {
    // Player current_player = player_list.front();
    while (tile_hit) {
        tile_hit = false;
        for (Trap traps : board.trap_location) {
            if (current_player.position == traps.position) {
                cout << current_player.name << " stepped on a trap" << endl;
                current_player.position -= traps.trap;
                current_player.position = std::max(0,current_player.position);
                cout << "Player: " << current_player.name<< ", Position: " << current_player.position<< endl;
                tile_hit = true;
                break;
            }
        }
        for (Power powers: board.power_location) {
            if (current_player.position == powers.position) {
                cout << "dice" << dice_roll << endl;
                cout << current_player.name << " stepped on a power" << endl;
                // powers.power_move(current_player,dice_roll);
                switch(powers.selection) {
                    case 0:
                        cout << current_player.name << " stepped on a double power" << endl;
                        cout << "Player: " << current_player.name<< ", Position: " << current_player.position<< endl;
                        current_player.position += dice_roll;
                        break;
                    case 1:
                        cout << current_player.name << " stepped on a triple power" << endl;
                        current_player.position += dice_roll * 2;
                        break;
                    // case 2:
                    //     std::cout <<"case 2" << std::endl;
                    // case 3:
                    //     std::cout << "case 3" << std::endl;
                }
                cout << "Player: " << current_player.name<< ", Position: " << current_player.position<< endl;
                tile_hit = true;
            }
        }
    }
    tile_hit = true;
    player_list.push_back(current_player);
    player_list.pop_front();
}
void Game::play_game() {
    while (not winner) {
        Player current_player = player_list.front();
        cout << "Click enter to roll the dice" << endl;
        cin.get();
        int dice_roll = rand() % 6 + 1;
        cout << "Rolled" << dice_roll << endl;
        current_player.position += dice_roll;
        cout << "Player: " << current_player.name<< ", Position: " << current_player.position<< endl;
        if (current_player.position > 100) {
            winner = true;
            cout << current_player.name << " wins!" << endl;
        }
        check_board(dice_roll, current_player);
    }
}
