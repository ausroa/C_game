//
// Created by Austin Roa on 7/25/18.
//

#ifndef C_GAME_GAME_H
#define C_GAME_GAME_H

#include <iostream>
#include <string>
#include "../headers/GameWorld.h"
#include "../headers/Character.h"

class Game {
private:
    GameWorld gw;
    int playerChoice;

public:
    Game();
    ~Game();

    void intro();
    void mainMenu();
};


#endif //C_GAME_GAME_H
