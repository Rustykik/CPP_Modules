#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(std::string()) {
	this->_name = std::string();
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap is build with name " << this->_name << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap is build with name " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &given): ClapTrap(given) {
	this->_name = given._name;
	this->_hitPoints = given._hitPoints;
	this->_energyPoints = given._energyPoints;
	this->_attackDamage = given._attackDamage;
	std::cout << "FragTrap is build with name " << this->_name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap oh no destructed " << this->_name << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &given) {
	this->_name = given._name;
	this->_hitPoints = given._hitPoints;
	this->_energyPoints = given._energyPoints;
	this->_attackDamage = given._attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " gave highfives" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout 	<< "FragTrap " 
					<< this->_name
					<< " attacks "
					<< target
					<< " causing "
					<< this->_attackDamage
					<< " points of damage!"
					<< std::endl;
	}
}