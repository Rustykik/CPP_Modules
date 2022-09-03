#include "Harl.hpp"

Harl::Harl() {
	this->levels["INFO"] = INFO;
	this->levels["DEBUG"] = DEBUG;
	this->levels["WARNING"] = WARNING;
	this->levels["ERROR"] = ERROR;
}

Harl::~Harl() {
}

void Harl::complain( std::string level ) {

	switch(this->levels[level]) {
		case DEBUG:
			this->debug();
		case INFO:
			this->info();
		case WARNING:
			this->warning();
		case ERROR:
			this->error();
			break ;
		default :
			std::cout << "look what you made" << std::endl;
	}
}


void Harl::debug( void ) {
	std::cout << "debugging" << std::endl;
}

void Harl::info( void ) {
	std::cout << "info" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "warning" << std::endl;
}

void Harl::error( void ) {
	std::cout << "error" << std::endl;
}