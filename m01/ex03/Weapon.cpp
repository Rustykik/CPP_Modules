#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const std::string type) {
	this->type = type;
}

Weapon::~Weapon() {}

std::string  const &Weapon::getType(void) const {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}