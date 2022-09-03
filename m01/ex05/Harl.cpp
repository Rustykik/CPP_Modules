#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain( std::string level )
{
	void	(Harl::*complaint[])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string complaintLevels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		void (Harl::*selectedComplaint)( void ) = complaint[i];
		if (level == complaintLevels[i])
			(this->*selectedComplaint)();
	}
}

void Harl::debug( void )
{
	std::cout << "debugging" << std::endl;
}

void Harl::info( void )
{
	std::cout << "info" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "warning" << std::endl;
}

void Harl::error( void )
{
	std::cout << "error" << std::endl;
}