#include "Animal.hpp"

Animal &Animal::operator= (const Animal &a) {
	type = a.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << type << " diactivated" << std::endl;
}

std::string Animal::getType() const {
	return type;
}