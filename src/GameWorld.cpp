//
// Created by Austin Roa on 7/25/18.
//

#include "../headers/GameWorld.h"

GameWorld::GameWorld() {

}

GameWorld::~GameWorld() {

}

void GameWorld::init() {
    character.characterName();

    std::cout << std::endl;
    std::cout << "Our adventure begins now........" << std::endl;
}

void GameWorld::chapter1() {
    std::cout << "\n========== CHAPTER 1 ==========" << std::endl;
    std::cout << std::endl;

    std::cout << "START STORY HERE" << std::endl;
}
