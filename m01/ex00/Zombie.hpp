#pragma once
#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie(const std::string name);
		Zombie();
		~Zombie();
		void announce(void);

	private:
		std::string name;
};

Zombie* newZombie( std::string name);
void randomChamp( std::string name);
Zombie* zombieHorde( int N, std::string name );