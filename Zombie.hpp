//
// Created by Gregorio Velva on 8/29/21.
//

#ifndef CPP_D1_ZOMBIE_HPP
#define CPP_D1_ZOMBIE_HPP


#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce();
};

Zombie*	newZombie(const std::string& name );
void	randomChump( std::string name );
#endif //CPP_D1_ZOMBIE_HPP
