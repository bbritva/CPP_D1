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
	weaponMale.setType("Slignshot");
	weaponFemale.setType("Pan");

	HumanA guy(weaponMale);
	HumanB chick;
	guy.setName("Buddy");
	chick.setName("Josie");
	chick.setWeapon(weaponFemale);
	guy.attack();
	chick.attack();
	weaponFemale.setType("rolling pin");
	chick.attack();

}
