#pragma once

#include <string>
#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &a);
		Animal &operator= (const Animal &a);

		std::string getType(void) const;
		virtual void makeSound(void) const;
};