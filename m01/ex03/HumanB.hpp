#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanB {
		const Weapon *weapon;
		const std::string name;

	public:
		HumanB(std::string);
		void setWeapon(const Weapon&);
		void attack(void) const;
};