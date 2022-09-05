#include"WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	type = "WrongCat";
	std::cout << type << " activated MEOW \\(o)\\/(o)/" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c): WrongAnimal() {
	type = c.type;
	std::cout << type << " activated MEOW \\(o)\\/(o)/" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << type << " diactivated MEOW \\(o)\\/(o)/" << std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat &c) {
	type = c.type;
	return (*this);
}

std::string WrongCat::getType() const {
	return type;
}

void WrongCat::makeSound() const {
	std::cout << " MOOOOOW \\(o)\\/(o)/" << std::endl;
}
