#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap clap("SCAV");

	clap.attack("This BOY");
	clap.takeDamage(8);
	clap.beRepaired(2);
	clap.attack("This BOY");
	clap.takeDamage(8);
	clap.beRepaired(2);
	clap.attack("This BOY");
	clap.takeDamage(8);
	clap.beRepaired(2);
	clap.guardGate();
	clap.attack("This BOY");
	clap.takeDamage(8);
	clap.beRepaired(2);
	clap.attack("This BOY");
	clap.takeDamage(8);
	clap.beRepaired(2);
	for (int i = 0; i < 100; ++i) {
		std::cout << i << " ";
		clap.attack("This BOY");
		clap.guardGate();
	}
}