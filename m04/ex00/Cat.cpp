#include"Cat.hpp"

Cat::Cat(): Animal() {
	type = "Cat";
	std::cout << type << " activated MEOW" << std::endl;
}

Cat::Cat(const Cat &c): Animal() {
	type = c.type;
	std::cout << type << " activated MEOW" << std::endl;
}

Cat::~Cat() {
	std::cout << type << " diactivated MEOW" << std::endl;
}

Cat &Cat::operator= (const Cat &c) {
	type = c.type;
	return (*this);
}

std::string Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	std::cout << " MOOOOOW " << std::endl;
}
