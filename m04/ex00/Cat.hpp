#pragma once

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat &c);
		Cat &operator= (const Cat &c);
		void makeSound(void) const;
		std::string getType(void) const;
};