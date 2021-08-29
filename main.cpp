//
// Created by Gregorio Velva on 8/29/21.
//

#include "Zombie.hpp"

int main()
{
	Zombie *zomb;
	Zombie zombie("Butthead");
	Zombie z;
	
	zomb = newZombie("Beavis");
	zomb->announce();
	delete zomb;
	randomChump("Randy");
}
