//
//  Game.cpp
//  C_Game
//
//  Created by <author> on 22/07/2018.
//
//

#include "../headers/Game.hpp"

Game::Game()  {

}
Game::~Game() {

}

void Game::gameIntro() {
	std::cout << "========== FATE OF THE FOOL ==========\n" << std::endl;
	std::cout << "What is your name? ";
	std::cin >> p1;
	std::cout << std::endl;

	std::cout << "\nIt's dangerous out there. Bring 3 friends. ";
	std::cout << "Who are these fools? " << std::endl;
	std::cin >> p2 >> p3 >> p4;

}
