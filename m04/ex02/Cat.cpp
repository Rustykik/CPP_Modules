#include"Cat.hpp"

Cat::Cat() {
	type = "Cat";
	brain = new Brain(type);
	std::cout << type << " activated MEOW" << std::endl;
}

Cat::Cat(const Cat &c) {
	type = c.type;
	brain = new Brain(*c.brain);
	std::cout << type << " activated MEOW" << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << type << " diactivated MEOW" << std::endl;
}

Cat &Cat::operator= (const Cat &c) {
	type = c.type;
	brain = new Brain(*c.brain);
	return (*this);
}

std::string Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	std::cout << " MOOOOOW " << std::endl;
}
