#pragma once

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &given);
		virtual ~ScavTrap();

		ScavTrap &operator=(const ScavTrap &given);
		void attack(const std::string &name);
		void guardGate();
};