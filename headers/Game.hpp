//
//  Game.hpp
//  C_Game
//
//  Created by <author> on 22/07/2018.
//
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>

class Game {
private:
	std::string p1;
	std::string p2;
	std::string p3;
	std::string p4;

	/**
	* Intro scene
	*/
	std::string intro;

public:
    	Game();
    	~Game();

	/**
	* Intro of game
	*/
	void gameIntro();
	/**
	* Cycle letters
	*/
	void cycleChar();
};

#endif /* Game_hpp */
