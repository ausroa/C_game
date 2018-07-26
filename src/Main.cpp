#include "../headers/Game.h"

int main() {
    Game game;
    GameWorld gw;
    Character character;

    game.intro();
    game.mainMenu();
    character.startingAttributes();
    gw.chapter1();

    return 0;
}