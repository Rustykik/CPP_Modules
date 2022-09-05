#include"Dog.hpp"

Dog::Dog(): Animal() {
	type = "Dog";
	brain = new Brain(type);
	std::cout << type << " activated BARK" << std::endl;
}

Dog::Dog(const Dog &c): Animal() {
	type = c.type;
	brain = new Brain(*c.brain);
	std::cout << type << " activated BARK" << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << type << " diactivated BARK" << std::endl;
}

Dog &Dog::operator= (const Dog &c) {
	type = c.type;
	brain = new Brain(*c.brain);
	return (*this);
}

std::string Dog::getType() const {
	return type;
}

void Dog::makeSound() const {
	std::cout << " X gon' give it to ya (what) " << std::endl;
}
