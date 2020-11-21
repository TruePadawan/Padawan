#include "Fight.h"
#include <iostream>

//No Args Constructor
Fight::Fight(){
    name = "Bot";
    gender = "Male";
    xp = 0;
    level = 0;
    magicka = 0;
    damage = 0;
}

//Args Constructor
Fight::Fight(std::string _gender, std::string _name, int _xp, int _level, int _magicka, long int _damage){
    name = _name;
    gender = _gender;
    xp = _xp;
    level = _level;
    magicka = _magicka;
    damage = _damage;
}

//Copy Constructor
Fight::Fight(const Fight &source)
     :name{source.name}, gender{source.gender}, xp{source.xp}, level{source.level}, magicka{source.magicka}, damage{source.damage}
     {
    std::cout << "Copy Constuckt" << std::endl;
}

//Destrucktor
Fight::~Fight(){
    std::cout << "Destroy" << std::endl;
}


//Move Construcktor
Fight::Fight(Fight &&source)
    :name{source.name}, gender{source.gender}, xp{source.xp}, level{source.level}, magicka{source.magicka}, damage{source.damage}
      {
          std::cout << "Move Constructor called" << std::endl;
}

Fight &Fight::operator=(const Fight &rhs){
    name = rhs.name;
    gender = rhs.gender;
    std::cout << "OverFlow"<< std::endl;
    return *this;
}