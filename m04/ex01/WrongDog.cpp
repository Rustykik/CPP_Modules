#include"WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal() {
	type = "WrongDog";
	std::cout << type << " activated BARK \\(o)\\/(o)/" << std::endl;
}

WrongDog::WrongDog(const WrongDog &c): WrongAnimal() {
	type = c.type;
	std::cout << type << " activated BARK \\(o)\\/(o)/" << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << type << " diactivated BARK \\(o)\\/(o)/" << std::endl;
}

WrongDog &WrongDog::operator= (const WrongDog &c) {
	type = c.type;
	return (*this);
}

std::string WrongDog::getType() const {
	return type;
}

void WrongDog::makeSound() const {
	std::cout << " X gon' give it to ya (what) \\(o)\\/(o)/" << std::endl;
}
