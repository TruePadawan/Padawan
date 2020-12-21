#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

int main(){
    char comp = '0';
    do{
    std::cout << "Welcome To A Game" << std::endl;
    std::cout << "==============================\n" << std::endl;
    std::cout << "1. New Game" << std::endl;
    std::cout << "2. Quit" << std::endl;
    std::cin >> comp;
    if(comp == '1'){
        Player Player1;
        char_create(Player1);
        cout << "========THE BEGINNING===========\n" << "\n";
        cout << "You wake up and find yourself in a Dark Cave!\n";
        cout << "You see a Sword and Leather Clothing\n";
        cout << "You: Where am I?....\n";
        cout << "You: *pickes up sword and leather clothing*\n";
        cout << "You: *walks around looking for an exit but comes across two passageways" << endl;
        cout << "You: Hmmm, Which way do I go? " << endl;
        cout << "(Press 1 for left passageway or 2 for right passageway)" << endl;
        char first_pick{'0'};
        cin >> first_pick;
        while (first_pick != '1' && first_pick != '2'){
        cout << "Lets try that again!..." << endl;
        cout << "Which way do I go? " << endl;
        cin >> first_pick;
        }
        if(first_pick == '1'){
            cout << "I Think I'm Gonna Go Left\n";
        }
        else if(first_pick == '2'){
            cout << "I'm Going Right\n";
        }
        else
            cout << "There are no other obvious passageways\n";
        
    }
    else if(comp == '2')
        std::cout << "What A Loser" << std::endl;
    else
        std::cout << "Invalid Option Noob" << std::endl;
    }while(comp != '2');
    return 0;
}
