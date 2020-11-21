#include <iostream>
#include <string>

#include "Fight.h"

using namespace std;

void Player_statt(Fight obj){
    std::cout << "Name: " << obj.name << std::endl;
    cout << "Gender: " << obj.gender << endl;
    std::cout << "Xp: " << obj.xp << std::endl;
    std::cout << "Level: " << obj.level << std::endl;
    std::cout << "Magicka: " << obj.magicka << std::endl;
    std::cout << "Damage: " << obj.damage << std::endl;
}
int main(){
    cout << "This is A Game" << endl;
    cout << "===============" << endl;
    Fight Player;
    bool done{false};
    char selekt;
    do{
    cout << "Welcome to Character Creation Menu!" << endl;
    cout << endl;
    cout << "1. Create A Character" << endl;
    cout << "2. Check Character Info" << endl;
    cout << "3. Done" << endl;
    cout << endl;
    cout << "What Do You Need? ";
    cin >> selekt;
    if(selekt == '1'){
        cout << "What Gender Is Your Character? ";
        cin >> Player.gender;
        if(Player.gender != "Male" && Player.gender != "Female" && Player.gender != "male" && Player.gender != "female")
            cout << "Invalid Gender" << endl;
        else{
            cout << Player.gender << " character created" << endl;
            cout << endl;
            cout << "What Is Your Character's Name? ";
            cin >> Player.name;
            cout << Player.name << " given as player name" << endl;
        }
    }
    
    
    else if(selekt == '2'){
        if(Player.get_name() == "Bot")
            cout << "Unable To Show Info Because Player Hasn't Been Created" << endl;
        else
            Player_statt(Player);
    }
    
    
    else if(selekt == '3'){
        if(Player.get_name() == "Bot")
            cout << "Character Has Not Been Created" << endl;
        else
            done = true;
    }
    }while(done != true);
    return 0;
}
