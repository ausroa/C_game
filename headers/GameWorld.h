//
// Created by Austin Roa on 7/25/18.
//

#ifndef C_GAME_GAMEWORLD_H
#define C_GAME_GAMEWORLD_H

#include "../headers/Character.h"

class GameWorld {
private:
    Character character;

public:
    GameWorld();
    ~GameWorld();

    void init();
};


#endif //C_GAME_GAMEWORLD_H
