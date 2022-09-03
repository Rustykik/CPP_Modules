#pragma once

#include <string>
#include <iostream>
#include <map>

class Harl {
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		enum eLevels {
			DEBUG = 1,
			INFO = 2,
			WARNING = 3,
			ERROR = 4
		};
		std::map<std::string, int>  levels;
	public:
		void complain( std::string level );
		Harl();
		~Harl();
};