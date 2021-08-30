//
// Created by Альбина Андреева on 30.08.2021.
//

#ifndef CPP_D1_HUMANA_HPP
#define CPP_D1_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
    std::string _name;
    Weapon      _weapon;
public:
    HumanA();
    ~HumanA();
    void setName(std::string name);
    void setWeapon(Weapon weapon);
    std::string getName();
    Weapon getWeapon();
};


#endif //CPP_D1_HUMANA_HPP
