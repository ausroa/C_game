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
#include <windows.h>
#include <iostream>
#include <string>
#include <sstream>

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
	void cycleChar(std::string x);

	/**
	* Accessors
	*/
	std::string getIntro() { return intro; };
	std::string getNameP1() { return p1; };
	std::string getNameP2() { return p2; };
	std::string getNameP3() { return p3; };
	std::string getNameP4() { return p4; };
};

#endif /* Game_hpp */
