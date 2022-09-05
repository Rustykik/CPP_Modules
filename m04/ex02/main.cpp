#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	Animal * animals[100];

	std::cout << " ACTIVATING ANIMALS " << std::endl;
	for (size_t i = 0; i < 50; ++i) {
		std::cout << i << " ";
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << " ACTIVATING ANIMALS  assign" << std::endl;
	for (size_t i = 50; i < 98; ++i) {
		std::cout << i << " ";
		if (i % 2)
			animals[i] = new Dog(*(Dog*) animals[i - 50]);
		else
			animals[i] = new Cat(*(Cat*) animals[i - 50]);
	}
	Dog d = Dog();
	Cat c = Cat();

	Dog &dref = d;
	Cat &cref = c;
	std::cout << 98 << " ";
	animals[98] = new Dog(dref);
	std::cout << 99 << " ";
	animals[99] = new Cat(cref);

	std::cout << " Making sound" << std::endl;
	for (size_t i = 0; i < 100; ++i) {
		animals[i]->makeSound();
	}


	std::cout << "DEACTIVATING ANIMALS" << std::endl;
	for (size_t i = 0; i < 100; ++i) {
		std::cout << i << " ";
		delete animals[i];
		std::cout <<  std::endl;
	}
	std::cout << "\n----------------\n";
}