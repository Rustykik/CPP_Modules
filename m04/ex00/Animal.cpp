#include "Animal.hpp"

Animal::Animal(): type(std::string("Animal")) {
	std::cout << type << " activated" << std::endl;
}

Animal::Animal(const Animal &a): type(a.type) {
	std::cout << type << " activated" << std::endl;
}

Animal &Animal::operator= (const Animal &a) {
	type = a.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << type << " diactivated" << std::endl;
}

void Animal::makeSound() const {
	std::cout << " IM ANIMAL " << std::endl;
}

std::string Animal::getType() const {
	return type;
}