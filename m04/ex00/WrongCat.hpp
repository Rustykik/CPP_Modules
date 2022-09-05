#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &c);
		WrongCat &operator= (const WrongCat &c);
		void makeSound(void) const;
		std::string getType(void) const;
};