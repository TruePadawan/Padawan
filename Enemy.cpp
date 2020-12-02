#include "Enemy.h"

void Enemy::print(std::ostream &os){
    os << "Name: " << name << std::endl;
    os << "Gender: " << gender << std::endl;
    os << "Xp: " << xp << std::endl;
    os << "Level: " << level << std::endl;
    os << "Magicka: " << magicka << std::endl;
    os << "Damage: " << damage << std::endl;
}

Enemy::Enemy(){
    name = "Enemy";
    gender = "Male";
    xp = 0;
    level = 0;
    magicka = 0;
    damage = 20;
}

Enemy::Enemy(std::string _gender, std::string _name)
{
    gender = _gender;
    name = _name;
    xp = 0;
    level = 0;
    magicka = 0;
    damage = 20;
}

Enemy::Enemy(const Enemy &copy)
:gender{copy.gender}, name{copy.name}
{
}

Enemy::Enemy(const Enemy &&copy)
:gender{copy.gender}, name{copy.name}
{
}