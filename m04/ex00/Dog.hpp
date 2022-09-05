#pragma once

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		~Dog();
		Dog(const Dog &c);
		Dog &operator= (const Dog &c);
		void makeSound(void) const;
		std::string getType(void) const;
};