//
// Created by 123ye on 20/12/2024.
//

#include "game.h"
using namespace std;

Game::Game() {
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
void Game::play_game() {
    while (not winner) {
        Player current_player = player_list.front();
        cout << "Click enter to roll the dice" << endl;
        cin.ignore();
        int dice_roll = rand() % 6 + 1;
        cout << "Rolled" << dice_roll << endl;
        current_player.position += dice_roll;
        cout << "Player: " << current_player.name<< ", Position: " << current_player.position<< endl;
        if (current_player.position > 100) {
            winner = true;
            cout << current_player.name << " wins!" << endl;
        }
        bool is_position_trap = true;
        Trap last;
        while (is_position_trap) {
            for (Trap traps : board.trap_location) {
                if (current_player.position == traps.position) {
                    cout << current_player.name << " stepped on a trap" << endl;
                    current_player.position -= traps.trap;
                    if (current_player.position < 0) {
                        current_player.position = 0;
                    }
                    cout << "Player: " << current_player.name<< ", Position: " << current_player.position<< endl;
                    is_position_trap = true;
                    break;
                }
                last = traps;
            }
            if (last.position == board.trap_location.back().position) {
                is_position_trap = false;
            }
        }
        player_list.push_back(current_player);
        player_list.pop_front();

    }
}