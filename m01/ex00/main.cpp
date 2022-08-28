#include "Zombie.hpp"

int main(void) {
	const std::string s = "jfjf";
	Zombie z = Zombie(s);
	z.announce();

	Zombie z3 = Zombie();

	Zombie* z2 = newZombie("JFJFJ");
	z2->announce();
	delete z2;

	randomChamp("lol");
}