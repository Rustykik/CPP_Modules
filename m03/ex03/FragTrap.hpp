#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &given);
		virtual ~FragTrap();

		FragTrap &operator=(const FragTrap &given);
		void attack(const std::string &name);
		void highFivesGuys(void);
};