#include "Player.h"
#include <iostream>

//No Args Constructor

Player::Player(){
    name = "Bot";
    gender = "Male";
    xp = 0;
    level = 0;
    magicka = 0;
    damage = 10;
}

//Args Constructor

Player::Player(std::string _gender, std::string _name){
    name = _name;
    gender = _gender;
}

//Copy Constructor

Player::Player(const Player &source)
     :name{source.name}, gender{source.gender}, xp{source.xp}, level{source.level}, magicka{source.magicka}, damage{source.damage}
     {
}


//Move Construcktor

Player::Player(Player &&source)
    :name{source.name}, gender{source.gender}, xp{source.xp}, level{source.level}, magicka{source.magicka}, damage{source.damage}
      {
}


//Copy Assignment

Player &Player::operator=(const Player &rhs){
    name = rhs.name;
    gender = rhs.gender;
    return *this;
}


//Move Assignment

Player &Player::operator =(const Player &&rhs){
    name = rhs.name;
    gender = rhs.gender;
    return *this;
}


//Printable Implemetation

void Player::print(std::ostream &os){
    os << "Name: " << name << std::endl;
    os << "Gender: " << gender << std::endl;
    os << "Xp: " << xp << std::endl;
    os << "Level: " << level << std::endl;
    os << "Magicka: " << magicka << std::endl;
    os << "Damage: " << damage << std::endl;
}




//Character Customization

Player &char_create(Player &charac){
    int comm{0};
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
        std::cin >> charac.gender;
        if(charac.gender != "Male" && charac.gender != "Female" && charac.gender != "male" && charac.gender != "female")
            std::cout << "Invalid Gender" << std::endl;
        else{
            std::cout << charac.gender << " character created" << std::endl;
            std::cout << std::endl;
            std::cout << "What Is Your Character's Name? ";
            std::cin >> charac.name;
            std::cout << charac.name << " given as player name" << std::endl;
        }
    }
    
    
    else if(selekt == '2'){
        if(charac.name == "Bot")
            std::cout << "Unable To Show Info Because Player Hasn't Been Created" << std::endl;
        else
            std::cout << charac << std::endl;
    }
    
    
    else if(selekt == '3'){
        if(charac.name == "Bot")
            std::cout << "Character Has Not Been Created" << std::endl;
        else{
            std::cout << "Character Creation Complete" << std::endl;
            comm = 1;
        }
    }
    }while(comm == 0);
    return charac;
}


//void Player_statt(Player obj){
//    std::cout << "Name: " << obj.name << std::endl;
//    std::cout << "Gender: " << obj.gender << std::endl;
//    std::cout << "Xp: " << obj.xp << std::endl;
//    std::cout << "Level: " << obj.level << std::endl;
//    std::cout << "Magicka: " << obj.magicka << std::endl;
//    std::cout << "Damage: " << obj.damage << std::endl;
//}