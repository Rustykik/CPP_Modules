#pragma once

#include <string>
#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &a);
		WrongAnimal &operator= (const WrongAnimal &a);

		std::string getType(void) const;
		virtual void makeSound(void) const;
};