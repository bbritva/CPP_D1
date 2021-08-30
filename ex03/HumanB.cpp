#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setName(std::string name)
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
}

std::string HumanB::getName()
{
	return (this->_name);
}

Weapon HumanB::getWeapon()
{
	return (*(this->_weapon));
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << \
		(*(this->_weapon)).getType() << std::endl;
}
