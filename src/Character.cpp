//
// Created by Austin Roa on 7/25/18.
//

#include "../headers/Character.h"

Character::Character() {
    isSet = false;

    stamina = 0;
    accuracy = 0;
    strength = 0;
    defense = 0;
    health = 0;

    startingPoints = 10;
}

Character::~Character() {

}

void Character::characterName() {
    std::cout << "What is your name? ";
    std::cin >> name;
}

void Character::startingAttributes() {
    std::cout << "========== STATS ==========" << std::endl;
    std::cout << "|| 1. Stamina            ||" << std::endl;
    std::cout << "|| 2. Accuracy           ||" << std::endl;
    std::cout << "|| 3. Strength           ||" << std::endl;
    std::cout << "|| 4. Defense            ||" << std::endl;
    std::cout << "===========================" << std::endl;

    std::cout << "Set your starting attributes" << std::endl;
    std::cin >> playerPoints;

    switch(playerPoints) {
        case 1:
            startingPoints--;
            stamina++;
            std::cout << startingPoints << " " << stamina << std::endl;
            break;
        default:
            break;
    }
}
