//
// Created by Gregorio Velva on 8/29/21.
//

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon weaponMale;
	Weapon weaponFemale;
	weaponMale.setType("slignshot");
	weaponFemale.setType("pan");

	HumanA guy("Buddy", weaponMale);
	HumanB chick("Josie");
	chick.setWeapon(weaponFemale);
	guy.attack();
	chick.attack();
	weaponFemale.setType("rolling pin");
	weaponMale.setType("boleadoras");
	chick.attack();
	guy.attack();


	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}


}
