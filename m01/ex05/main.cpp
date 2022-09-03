#include "Harl.hpp"

int main( void ) {
	Harl logger;

	logger.complain("DEBUG");
	logger.complain("INFO");
	logger.complain("WARNING");
	logger.complain("ERROR");

}