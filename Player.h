#ifndef _PLAYER_H
#define _PLAYER_H
#include <iostream>
#include <string>
#include "I_Printable.h"
class Player:public I_Printable{
        friend Player &char_create(Player &charac);
protected:
    std::string name;
    std::string gender;
    int xp = 0;
    int level = 0;
    int magicka = 0;
    long double damage = 10;
    
public:
    virtual void print(std::ostream &os) override;      //Make the Player Object Printable
    Player(std::string _gender, std::string _name = "Bot");          // Args Constructor
    Player();                               //No Args Constructor
    Player(const Player &source);               // Copy Constructor
    Player(Player &&source);                    // Move Constructor
    Player &operator=(const Player &rhs);           //Copy assignment
    Player &operator=(const Player &&rhs);          //Move assignment
    virtual~Player() = default;
};


#endif //_PLAYER_H