#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {

		const Brain * brain;
		
	public:
		Dog();
		~Dog();
		Dog(const Dog &c);
		Dog &operator= (const Dog &c);
		void makeSound(void) const;
		std::string getType(void) const;
};