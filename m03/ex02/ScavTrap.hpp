#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &given);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &given);
		void attack(const std::string &name);
		void guardGate();
};