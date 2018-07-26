//
// Created by Austin Roa on 7/25/18.
//

#include "../headers/Game.h"

Game::Game() {

}

Game::~Game() {

}

void Game::intro() {
    std::cout << "Welcome to Fate of the Fool" << std::endl;
}

void Game::mainMenu() {
    std::cout << "========== MAIN MENU ==========" << std::endl;
    std::cout << "|| 1. New Game               ||" << std::endl;
    std::cout << "|| 2. Travel                 ||" << std::endl;
    std::cout << "|| 3. Shop                   ||" << std::endl;
    std::cout << "|| 4. Rest                   ||" << std::endl;
    std::cout << "|| 5. Stats                  ||" << std::endl;
    std::cout << "|| 6. Quit                   ||" << std::endl;
    std::cout << "===============================" << std::endl;
    std::cout << std::endl;

    std::cin >> playerChoice;

    switch(playerChoice) {
        case 1:
            gw.init();
    }
}

