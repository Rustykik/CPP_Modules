#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type(std::string("WrongAnimal")) {
	std::cout << type << " activated \\(o)\\/(o)/" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a): type(a.type) {
	std::cout << type << " activated \\(o)\\/(o)/" << std::endl;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &a) {
	type = a.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << type << " diactivated \\(o)\\/(o)/" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << " IM WrongAnimal \\(o)\\/(o)/" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}