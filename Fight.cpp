#include "Fight.h"
#include <iostream>

//No Args Constructor
Fight::Fight(){
    name = "Bot";
    gender = "Male";
    xp = 0;
    level = 0;
    magicka = 0;
    damage = 10;
}

//Args Constructor
Fight::Fight(std::string _gender, std::string _name){
    name = _name;
    gender = _gender;
}

//Copy Constructor
Fight::Fight(const Fight &source)
     :name{source.name}, gender{source.gender}, xp{source.xp}, level{source.level}, magicka{source.magicka}, damage{source.damage}
     {
}

//Destrucktor
Fight::~Fight(){
}


//Move Construcktor
Fight::Fight(Fight &&source)
    :name{source.name}, gender{source.gender}, xp{source.xp}, level{source.level}, magicka{source.magicka}, damage{source.damage}
      {
}
//Copy Assignment
Fight &Fight::operator=(const Fight &rhs){
    name = rhs.name;
    gender = rhs.gender;
    return *this;
}

//Move Assignment
Fight &Fight::operator =(const Fight &&rhs){
    name = rhs.name;
    gender = rhs.gender;
    return *this;
}

void Char_create(Fight &Player){
    int comp{0};
    char selekt;
    do{
    std::cout << "Welcome to Character Creation Menu!" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Create A Character" << std::endl;
    std::cout << "2. Check Character Info" << std::endl;
    std::cout << "3. Done" << std::endl;
    std::cout << std::endl;
    std::cout << "What Do You Need? ";
    std::cin >> selekt;
    if(selekt == '1'){
        std::cout << "What Gender Is Your Character? ";
        std::cin >> Player.gender;
        if(Player.gender != "Male" && Player.gender != "Female" && Player.gender != "male" && Player.gender != "female")
            std::cout << "Invalid Gender" << std::endl;
        else{
            std::cout << Player.gender << " character created" << std::endl;
            std::cout << std::endl;
            std::cout << "What Is Your Character's Name? ";
            std::cin >> Player.name;
            std::cout << Player.name << " given as player name" << std::endl;
        }
    }
    
    
    else if(selekt == '2'){
        if(Player.get_name() == "Bot")
            std::cout << "Unable To Show Info Because Player Hasn't Been Created" << std::endl;
        else
            Player_statt(Player);
    }
    
    
    else if(selekt == '3'){
        if(Player.name == "Bot")
            std::cout << "Character Has Not Been Created" << std::endl;
        else{
            std::cout << "Your Character Has Been Created Successfully" << std::endl;
            comp = 1;
        }
    }
    }while(comp == 0);
}
void Player_statt(Fight obj){
    std::cout << "Name: " << obj.name << std::endl;
    std::cout << "Gender: " << obj.gender << std::endl;
    std::cout << "Xp: " << obj.xp << std::endl;
    std::cout << "Level: " << obj.level << std::endl;
    std::cout << "Magicka: " << obj.magicka << std::endl;
    std::cout << "Damage: " << obj.damage << std::endl;
}