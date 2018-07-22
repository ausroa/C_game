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
#include <iostream>
#include <string>

class Game {
private:
	std::string p1;
	std::string p2;
	std::string p3;
	std::string p4;

public:
    	Game();
    	~Game();

	/**
	* Intro Scene
	*/
	void gameIntro();
};

#endif /* Game_hpp */
