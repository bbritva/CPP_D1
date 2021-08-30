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
	chick.setWeapon(&weaponFemale);
	guy.attack();
	chick.attack();
	weaponFemale.setType("rolling pin");
	weaponMale.setType("boleadoras");
	chick.attack();
	guy.attack();

}
