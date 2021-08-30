#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon()
{}

const std::string &Weapon::getType()
{
	return (this->_type);
}

Weapon::~Weapon()
{
}
