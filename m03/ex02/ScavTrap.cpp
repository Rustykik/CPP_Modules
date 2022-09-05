#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(std::string()) {
	this->_name = std::string();
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap is build with name " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap is build with name " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &given): ClapTrap(given) {
	this->_name = given._name;
	this->_hitPoints = given._hitPoints;
	this->_energyPoints = given._energyPoints;
	this->_attackDamage = given._attackDamage;
	std::cout << "ScavTrap is build with name " << this->_name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap oh no destructed " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &given) {
	this->_name = given._name;
	this->_hitPoints = given._hitPoints;
	this->_energyPoints = given._energyPoints;
	this->_attackDamage = given._attackDamage;
	return (*this);
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " is awsome gate guard" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout 	<< "ScavTrap " 
					<< this->_name
					<< " attacks "
					<< target
					<< " causing "
					<< this->_attackDamage
					<< " points of damage!"
					<< std::endl;
	}
}