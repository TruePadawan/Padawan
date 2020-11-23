#include "Fight.h"

void Game(){
    Fight Player;
    int comp = 0;
    do{
    std::cout << "Welcome To A Game" << std::endl;
    std::cout << "==============================\n" << std::endl;
    std::cout << "1. New Game" << std::endl;
    std::cout << "2. Quit" << std::endl;
    std::cin >> comp;
    if(comp == 1){
        Char_create(Player);
    }
    else if(comp == 2)
        std::cout << "What A Loser" << std::endl;
    else
        std::cout << "Invalid Option Noob" << std::endl;
    }while(comp != 2);
    
}