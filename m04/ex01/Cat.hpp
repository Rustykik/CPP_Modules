#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {

		const Brain * brain;
		
	public:
		Cat();
		~Cat();
		Cat(const Cat &c);
		Cat &operator= (const Cat &c);
		void makeSound(void) const;
		std::string getType(void) const;
};