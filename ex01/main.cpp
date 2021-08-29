//
// Created by Gregorio Velva on 8/29/21.
//

#include "Zombie.hpp"

int main()
{
	int count = 6;
	int i;
	Zombie *horde;
	Zombie zombie("Butthead");
	
	horde = zombieHorde(count, "Shon");
	i = -1;
	while(++i < count)
		horde[i].announce();
	delete[] horde;
}
