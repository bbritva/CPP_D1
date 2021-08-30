#ifndef CPP_D1_HUMANB_HPP
#define CPP_D1_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon      *_weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void setName(std::string name);
    void setWeapon(Weapon *weapon);
    std::string getName();
    Weapon getWeapon();
    void attack();
};

#endif //CPP_D1_HUMANA_HPP
