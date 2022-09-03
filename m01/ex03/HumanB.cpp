#include "HumanB.hpp"

HumanB::HumanB(const std::string name): weapon(NULL), name(name) {
	
}

void HumanB::setWeapon(const Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack(void) const {
	if (this->weapon != NULL)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}