#ifndef ENEMY_H
#define ENEMY_H
#include "I_Printable.h"
#include <string>
#include <iostream>
class Enemy
:public I_Printable{
protected:
    std::string gender;
    std::string name;
    int xp = 0;
    int level = 0;
    int magicka = 0;
    long double damage = 20;
public:
    virtual void print(std::ostream &os) override;       //Makes the Enemy Object Printable
    Enemy();    //No args Constructor
    Enemy(std::string _gender, std::string _name);    //Args Constructor
    Enemy(const Enemy &copy); // Copy Constructor
    Enemy(const Enemy &&copy); //Move Constructor
//    Enemy &operator=(const Enemy &obj); //Copy Assignment
//    Enemy &operator=(const Enemy &&obj); // Move Assignment
    virtual~Enemy() = default;
};

#endif // ENEMY_H
