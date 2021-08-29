//
// Created by Gregorio Velva on 8/29/21.
//
#include "Zombie.hpp"

Zombie* newZombie(const std::string& name )
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}
