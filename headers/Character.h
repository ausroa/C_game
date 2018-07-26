//
// Created by Austin Roa on 7/25/18.
//

#ifndef C_GAME_CHARACTER_H
#define C_GAME_CHARACTER_H

#include <iostream>

class Character {
private:
    std::string name;

public:
    Character();
    ~Character();

    void characterName();
};


#endif //C_GAME_CHARACTER_H
