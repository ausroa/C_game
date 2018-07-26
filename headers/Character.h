//
// Created by Austin Roa on 7/25/18.
//

#ifndef C_GAME_CHARACTER_H
#define C_GAME_CHARACTER_H

#include <iostream>

class Character {
private:
    std::string name;
    int playerPoints;
    bool isSet;

    int stamina;
    int accuracy;
    int strength;
    int defense;
    int health;

    int startingPoints;

public:
    Character();
    ~Character();

    int getStamina() { return stamina; };
    int getAccuracy() { return accuracy; };
    int getStrength() { return strength; };
    int getDefense() { return defense; };
    int getHealth() { return health; };

    void startingAttributes();

    void characterName();
};


#endif //C_GAME_CHARACTER_H
