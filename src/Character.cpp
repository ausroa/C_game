//
// Created by Austin Roa on 7/25/18.
//

#include "../headers/Character.h"

Character::Character() {

}

Character::~Character() {

}

void Character::characterName() {
    std::cout << "What is your name? ";
    std::cin >> name;
}
