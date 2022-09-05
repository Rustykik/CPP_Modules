#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name): 
	ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_hitPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;;
	std::cout << "DiamondTrap " << this->_name << " constructed!\n"
		<< " Hits: " << this->_hitPoints << " DMG: "
		<< this->_attackDamage << " Energy: " << this->_energyPoints << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &clap) : 
	ClapTrap(clap), ScavTrap(clap._name), FragTrap(clap._name)
{
	this->_name = clap._name;
	this->_hitPoints = clap._hitPoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &clap)
{
	this->_name = clap._name;
	this->_hitPoints = clap._hitPoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " distructed!\n";
}

void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap "<< this->_name << " : seems i'm " << this->_name << " trap... or " << this->ClapTrap::_name << "\n";
}