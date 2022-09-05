#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: virtual public ScavTrap, virtual public FragTrap {

	public:
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &given);
		DiamondTrap &operator= (const DiamondTrap &given);
		virtual ~DiamondTrap();
		void whoAmI(void);
		void attack(const std::string &target);
};
