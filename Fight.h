#ifndef _FIGHT_H
#define _FIGHT_H
#include <iostream>
#include <string>
class Fight{
private:
    friend void Player_statt(Fight obj);
    std::string name;
    std::string gender;
    int xp;
    int level;
    int magicka;
protected:
    long int damage;
public:
    Fight(std::string gender, std::string _name = "Bot", int _xp = 0, int _level = 0, int _magicka = 0, long int _damage = 0);
    Fight();
    Fight(const Fight &source);
    Fight(Fight &&source);
    Fight &operator=(const Fight &rhs);
    std::string get_name(){
        return name;
    }
    void set_gender(std::string ava){ gender = ava;}
    void set_name(std::string ava){ name = ava;}
    void set_damage(int g){
    Fight::damage = g;
}
    ~Fight();
};


#endif //_FIGHT_H