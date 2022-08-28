#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::Zombie(const std::string name ) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << this->name << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
