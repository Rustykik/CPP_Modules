#pragma once

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA();

		void attack(void);
	private:
		std::string name;
		Weapon weapon;
};