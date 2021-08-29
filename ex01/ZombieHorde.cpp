//
// Created by Gregorio Velva on 8/29/21.
//
#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie *zombieHorde = new Zombie[n];

	if (n > 0)
	{
		while(n--)
			zombieHorde[n].setName(name);
		return (zombieHorde);
	}
	else
		return(NULL);
}
