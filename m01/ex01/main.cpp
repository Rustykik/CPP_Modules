#include "Zombie.hpp"

int main(void) {
	const std::string s = "jfjf";
	Zombie z = Zombie(s);
	z.announce();

	Zombie z3 = Zombie();
	z3.announce();

	Zombie* z2 = newZombie("JFJFJ");
	z2->announce();
	delete z2;

	randomChamp("lol");

	int hordeSize = 10;
	Zombie* horde = zombieHorde(hordeSize, "Horde member");
	for (int i = 0; i < hordeSize; ++i) {
		horde[i].announce();
	}
	delete[] horde;
}