#pragma once

#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal {
	public:
		WrongDog();
		~WrongDog();
		WrongDog(const WrongDog &c);
		WrongDog &operator= (const WrongDog &c);
		void makeSound(void) const;
		std::string getType(void) const;
};