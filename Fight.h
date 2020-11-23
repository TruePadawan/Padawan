#ifndef _FIGHT_H
#define _FIGHT_H
#include <iostream>
#include <string>
class Fight{
        friend void Player_statt(Fight obj);
        friend void Char_create(Fight &Player);
        friend std::ostream &operator<<(std::ostream &os, const Fight &obj);
protected:
    std::string name;
    std::string gender;
    int xp = 0;
    int level = 0;
    int magicka = 0;
    long int damage = 10;
public:
    Fight(std::string gender, std::string _name = "Bot");
    Fight();
    Fight(const Fight &source);
    Fight(Fight &&source);
    Fight &operator=(const Fight &rhs); //Copy assignment
    Fight &operator=(const Fight &&rhs); //Move assignment
    std::string get_name(){
        return name;
    }
    void set_gender(std::string ava){ gender = ava;}
    void set_name(std::string ava){ name = ava;}
    void set_damage(int g){
        damage = g;
}
    ~Fight();
};


#endif //_FIGHT_H