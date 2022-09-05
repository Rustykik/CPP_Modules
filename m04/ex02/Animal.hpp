#pragma once

#include <string>
#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		virtual ~Animal();
		Animal &operator= (const Animal &a);

		virtual std::string getType(void) const = 0;
		virtual void makeSound(void) const = 0;
};