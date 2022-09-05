#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(std::string()), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "CONSTRUCT Can I shoot something now? Or climb some stairs? SOMETHING exciting" << std::endl;
	std::cout << "       ,\n       |\n    ]  |.-._\n     \\|\"(0)\"| _]\n     `|=\\#/=|\\/\n      :  _  :\n       \\/_\\/         |=| \n        `-\' " << std::endl;
}

ClapTrap::ClapTrap(const std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "CONSTRUCT Can I shoot something now? Or climb some stairs? SOMETHING exciting" << std::endl;
	std::cout << "       ,\n       |\n    ]  |.-._\n     \\|\"(0)\"| _]\n     `|=\\#/=|\\/\n      :  _  :\n       \\/_\\/         |=| \n        `-\' " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &given): _name(given._name), _hitPoints(given._hitPoints), _energyPoints(given._energyPoints), _attackDamage(given._attackDamage) {
	std::cout << "CONSTRUCT Can I shoot something now? Or climb some stairs? SOMETHING exciting" << std::endl;
	std::cout << "       ,\n       |\n    ]  |.-._\n     \\|\"(0)\"| _]\n     `|=\\#/=|\\/\n      :  _  :\n       \\/_\\/         |=| \n        `-\' " << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &given) {
	this->_name = given._name;
	this->_hitPoints = given._hitPoints;
	this->_energyPoints = given._energyPoints;
	this->_attackDamage = given._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "DESTRUCT Together, we shall free Pandora! I will lead you into battle! I will destroy Handsome Jack with my bare hands! I will... Stairs!? NOOOOO!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout 	<< "ClapTrap " 
					<< this->_name
					<< " attacks "
					<< target
					<< " causing "
					<< this->_attackDamage
					<< " points of damage!"
					<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	unsigned int takenDamage;

	if (amount < this->_hitPoints) {
		takenDamage = amount;
	} else {
	  	takenDamage = this->_hitPoints;
	}

	this->_hitPoints -= takenDamage;
	std::cout 	<< this->_name
				<< " has taken "
				<< takenDamage
				<< " damage and now he has "
				<< this->_hitPoints
				<< " hit points."
				<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout 	<< this->_name
					<< " has repaired "
					<< amount
					<< " and now he has "
					<< this->_hitPoints
					<< " hit points."
					<< std::endl;
	}
}
